pipeline {
    agent any
    environment
    {
        // for Docker
        DOCKER_USER='cpptest'
        DOCKER_IMAGE_NAME='webinar-demo-ja'
        DOCKER_IMAGE_TAG='webinar-demo-ja'
        DOCKER_CONTAINER_NAME='cpptest-workflow'
        HOST_HOME_DIR='/home/ubuntu'
        CONTAINER_HOME_DIR='/home/cpptest'
        CONTAINER_WORK_DIR='/home/cpptest/webinar-demo-ja'
        // for cpptest
        CPPTEST_PROJECT_NAME='FlowAnalysis'
        CPPTEST_CONFIG_MISRA='user://MISRA C 2012'
        CPPTEST_CONFIG_CERT='builtin://SEI CERT C Rules'
        CPPTEST_CONFIG_UNIT_TEST='user://03. Run Unit Tests for ARM'
        //GitHub
        GIT_PROJECT_URL='<Git URL>'
    }
    stages {
        stage('Create Docker Image') {
            steps {
                sh '''cp ${HOST_HOME_DIR}/module/parasoft_cpptest_2020.2.0_linux_x86_64.tar.gz ./
                docker build -t ${DOCKER_IMAGE_NAME}:${DOCKER_IMAGE_TAG} .'''
            }
        }
        stage('Run Docker Container') {
            steps {
                sh 'docker run --net host --name ${DOCKER_CONTAINER_NAME} -u ${DOCKER_USER} -w ${CONTAINER_HOME_DIR} -itd ${DOCKER_IMAGE_NAME}:${DOCKER_IMAGE_TAG}'
            }
        }
        stage('Clone Project') {
            steps {
                sh 'docker exec -u ${DOCKER_USER} -i ${DOCKER_CONTAINER_NAME} git clone ${GIT_PROJECT_URL}'
            }
        }
        stage('Build Project') {
            steps {
                sh 'docker exec -u ${DOCKER_USER} -w ${CONTAINER_WORK_DIR}/${CPPTEST_PROJECT_NAME} -i ${DOCKER_CONTAINER_NAME} /bin/bash -c "cmake . && cpptesttrace --cpptesttraceProjectName=${CPPTEST_PROJECT_NAME} make"'
            }
        }
        stage('Create C++test Project') {
            steps {
                sh 'docker exec -u ${DOCKER_USER} -w ${CONTAINER_WORK_DIR} -i ${DOCKER_CONTAINER_NAME} cpptestcli -data . -bdf ${CPPTEST_PROJECT_NAME}/cpptestscan.bdf -localsettings cpptest.ls.properties -showdetails'
            }
        }
        stage('Run MISRA Guideline Test') {
            steps {
                //sh 'echo "Run MISRA Guideline Test"'
                sh 'docker exec -u ${DOCKER_USER} -w ${CONTAINER_WORK_DIR} -i ${DOCKER_CONTAINER_NAME} cpptestcli -data . -resource ${CPPTEST_PROJECT_NAME} -config "${CPPTEST_CONFIG_MISRA}" -localsettings cpptest.ls.properties -report reports_MISRA -showdetails -appconsole stdout'
            }
        }
        stage('Run Security Test') {
            steps {
                //sh 'echo "Run Security Test"'
                sh 'docker exec -u ${DOCKER_USER} -w ${CONTAINER_WORK_DIR} -i ${DOCKER_CONTAINER_NAME} cpptestcli -data . -resource ${CPPTEST_PROJECT_NAME} -config "${CPPTEST_CONFIG_CERT}" -localsettings cpptest.ls.properties -report reports_CERT -showdetails -appconsole stdout'
            }
        }
        stage('Run Unit Tests') {
            steps {
                //sh 'echo "Run Unit Tests"'
                sh 'docker exec -u ${DOCKER_USER} -w ${CONTAINER_WORK_DIR} -i ${DOCKER_CONTAINER_NAME} cpptestcli -data . -resource ${CPPTEST_PROJECT_NAME} -config "${CPPTEST_CONFIG_UNIT_TEST}" -localsettings cpptest.ls.properties -report reports_UNITTEST -showdetails -appconsole stdout'
            }
        }
        stage('Delete Docker Container') {
            steps {
                sh '''docker stop ${DOCKER_CONTAINER_NAME}
                docker rm ${DOCKER_CONTAINER_NAME}'''
            }
        }
        stage('Delete Docker Image') {
            steps {
                sh 'docker rmi ${DOCKER_IMAGE_NAME}:${DOCKER_IMAGE_TAG}'
            }
        }
    }
    post {
        success {
            cleanWs()
        }
    }
}

