#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/FlowAnalysis/sensor.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/FlowAnalysis/sensor.c");

EXTERN_C_LINKAGE void TestSuite_sensor_c_269316db_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_sensor_c_269316db_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_sensor_c_269316db);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_sensor_c_269316db_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_sensor_c_269316db_testSuiteTearDown);
CPPTEST_TEST_DS(TestSuite_sensor_c_269316db_test_case_addSignals, CPPTEST_DS("__ds_step_autogen_5b19f1ac_17b5d068ca8"));
CPPTEST_TEST_DS(TestSuite_sensor_c_269316db_test_case_getTemperature, CPPTEST_DS("__ds_step_autogen_132c0e00_17b5da9504e"));
CPPTEST_TEST_DS(TestSuite_sensor_c_269316db_test_case_initializeSensor, CPPTEST_DS("__ds_step_autogen_7d7db8ac_17b5dbeef3f"));
CPPTEST_TEST_SUITE_END();
        

void TestSuite_sensor_c_269316db_test_case_addSignals(void);
void CppTest_StubCallback_TestSuite_sensor_c_269316db_test_case_addSignals_1_needCompensation(CppTest_StubCallInfo* stubCallInfo, int* __return); /* CPPTEST_TEST_CASE_CALLBACK void TestSuite_sensor_c_269316db_test_case_addSignals(void); */
void CppTest_StubCallback_TestSuite_sensor_c_269316db_test_case_addSignals_2_calcCompensation(CppTest_StubCallInfo* stubCallInfo, int* __return, int temp); /* CPPTEST_TEST_CASE_CALLBACK void TestSuite_sensor_c_269316db_test_case_addSignals(void); */
void TestSuite_sensor_c_269316db_test_case_getTemperature(void);
void CppTest_StubCallback_TestSuite_sensor_c_269316db_test_case_getTemperature_1_initializeSensor(CppTest_StubCallInfo* stubCallInfo, sensor_handle* __return, unsigned id); /* CPPTEST_TEST_CASE_CALLBACK void TestSuite_sensor_c_269316db_test_case_getTemperature(void); */
void TestSuite_sensor_c_269316db_test_case_initializeSensor(void);
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_sensor_c_269316db);

void TestSuite_sensor_c_269316db_testSuiteSetUp(void);
void TestSuite_sensor_c_269316db_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_sensor_c_269316db_testSuiteTearDown(void);
void TestSuite_sensor_c_269316db_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_sensor_c_269316db_setUp(void);
void TestSuite_sensor_c_269316db_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_sensor_c_269316db_tearDown(void);
void TestSuite_sensor_c_269316db_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_case_addSignals */
/* CPPTEST_TEST_CASE_CALLBACKS_BEGIN */
void CppTest_StubCallback_TestSuite_sensor_c_269316db_test_case_addSignals_1_needCompensation(CppTest_StubCallInfo* stubCallInfo, int* __return)
{
   /* CPPTEST_TC_STEP_UID:2.0 */
   *__return = CPPTEST_DS_GET_INTEGER("S#I#_needCompensation");
}
void CppTest_StubCallback_TestSuite_sensor_c_269316db_test_case_addSignals_2_calcCompensation(CppTest_StubCallInfo* stubCallInfo, int* __return, int temp)
{
/* CPPTEST_TC_STEP_UID:3 */
//To access current call number use: 'stubCallInfo->callNo'
*__return = temp;
}
/* CPPTEST_TEST_CASE_CALLBACKS_END */
/* CPPTEST_TEST_CASE_CONTEXT int addSignals(int, int, int) */
void TestSuite_sensor_c_269316db_test_case_addSignals()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" uid="0" version="2">
            <row>
                <val>V#I#_signalA</val>
                <val>V#I#_signalB</val>
                <val>V#I#_temp</val>
                <val>A#I#_return</val>
                <val>S#I#_needCompensation</val>
            </row>
            <row>
                <val>1</val>
                <val>3</val>
                <val>0</val>
                <val>4</val>
                <val>0</val>
            </row>
            <row>
                <val>1</val>
                <val>3</val>
                <val>0</val>
                <val>4</val>
                <val>1</val>
            </row>
            <row>
                <val>1</val>
                <val>3</val>
                <val>1</val>
                <val>5</val>
                <val>1</val>
            </row>
            <ext>false</ext>
            <extname/>
        </step>
        <step id="MultiVariableStep" uid="1" version="1">
            <step id="VariableStep" version="1">
                <name>_signalA</name>
                <type>int</type>
                <value>CPPTEST_DS_GET_INTEGER("V#I#_signalA")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_signalB</name>
                <type>int</type>
                <value>CPPTEST_DS_GET_INTEGER("V#I#_signalB")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_temp</name>
                <type>int</type>
                <value>CPPTEST_DS_GET_INTEGER("V#I#_temp")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_return</name>
                <type>int</type>
                <value/>
            </step>
        </step>
        <step id="StubConfigurationStep" uid="2" version="1">
            <step id="StubConfigurationEntryStep" uid="2.0" version="1">
                <action>SET VALUE</action>
                <P1>*__return</P1>
                <P2>CPPTEST_DS_GET_INTEGER("S#I#_needCompensation")</P2>
                <P3/>
                <P4/>
            </step>
            <function>needCompensation</function>
            <code><![CDATA[//To access current call number use: 'stubCallInfo->callNo']]></code>
            <mode>table</mode>
        </step>
        <step id="StubConfigurationStep" uid="3" version="1">
            <function>calcCompensation</function>
            <code><![CDATA[//To access current call number use: 'stubCallInfo->callNo']]></code>
            <code><![CDATA[*__return = temp;]]></code>
            <mode>code</mode>
        </step>
        <step id="CallStep" uid="4" version="1">
            <comment>Tested function call</comment>
            <return>_return</return>
            <name>addSignals</name>
            <params>_signalA, _signalB, _temp</params>
        </step>
        <step id="AssertionsStep" uid="5" version="1">
            <step id="AssertionStep" uid="5.0" version="1">
                <type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
                <P1>CPPTEST_DS_GET_INTEGER("A#I#_return")</P1>
                <P2>_return</P2>
                <P3/>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
int _signalA = CPPTEST_DS_GET_INTEGER("V#I#_signalA");
int _signalB = CPPTEST_DS_GET_INTEGER("V#I#_signalB");
int _temp = CPPTEST_DS_GET_INTEGER("V#I#_temp");
int _return;
CPPTEST_REGISTER_STUB_CALLBACK("needCompensation", &CppTest_StubCallback_TestSuite_sensor_c_269316db_test_case_addSignals_1_needCompensation);
CPPTEST_REGISTER_STUB_CALLBACK("calcCompensation", &CppTest_StubCallback_TestSuite_sensor_c_269316db_test_case_addSignals_2_calcCompensation);
/* CPPTEST_TC_STEP_UID:4 */
_return = addSignals(_signalA, _signalB, _temp);
/* CPPTEST_TC_STEP_UID:5.0 */
CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("A#I#_return"), _return);
}
/* CPPTEST_TEST_CASE_END test_case_addSignals */

/* CPPTEST_TEST_CASE_BEGIN test_case_getTemperature */
/* CPPTEST_TEST_CASE_CALLBACKS_BEGIN */
void CppTest_StubCallback_TestSuite_sensor_c_269316db_test_case_getTemperature_1_initializeSensor(CppTest_StubCallInfo* stubCallInfo, sensor_handle* __return, unsigned id)
{
/* CPPTEST_TC_STEP_UID:2 */
//To access current call number use: 'stubCallInfo->callNo'
}
/* CPPTEST_TEST_CASE_CALLBACKS_END */
/* CPPTEST_TEST_CASE_CONTEXT int addSignals(int, int, int) */
void TestSuite_sensor_c_269316db_test_case_getTemperature()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" uid="0" version="2">
            <row>
                <val>V#I#_ret</val>
                <val>A#I#_return</val>
                <val>A#I#_result</val>
                <val>S#I#_initializeSensor_flag</val>
            </row>
            <row>
                <val>0</val>
                <val>1</val>
                <val>0</val>
                <val>0</val>
            </row>
            <row>
                <val>0</val>
                <val>0</val>
                <val>0</val>
                <val>1</val>
            </row>
            <ext>false</ext>
            <extname/>
        </step>
        <step id="MultiVariableStep" uid="1" version="1">
            <step id="VariableStep" version="1">
                <name>_ret</name>
                <type>int</type>
                <value>CPPTEST_DS_GET_INTEGER("V#I#_ret")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_result</name>
                <type>int *</type>
                <value>&amp;_ret</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_return</name>
                <type>int</type>
                <value/>
            </step>
        </step>
        <step id="StubConfigurationStep" uid="2" version="1">
            <function>initializeSensor</function>
            <code><![CDATA[//To access current call number use: 'stubCallInfo->callNo']]></code>
            <mode>code</mode>
        </step>
        <step id="CallStep" uid="3" version="1">
            <comment>Tested function call</comment>
            <return>_return</return>
            <name>getTemperature</name>
            <params>_result</params>
        </step>
        <step id="AssertionsStep" uid="4" version="1">
            <step id="AssertionStep" uid="4.0" version="1">
                <type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
                <P1>CPPTEST_DS_GET_INTEGER("A#I#_return")</P1>
                <P2>_return</P2>
                <P3/>
                <P4/>
            </step>
            <step id="AssertionStep" uid="4.1" version="1">
                <type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
                <P1>CPPTEST_DS_GET_INTEGER("A#I#_result")</P1>
                <P2>*_result</P2>
                <P3/>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
int _ret = CPPTEST_DS_GET_INTEGER("V#I#_ret");
int * _result = &_ret;
int _return;
CPPTEST_REGISTER_STUB_CALLBACK("initializeSensor", &CppTest_StubCallback_TestSuite_sensor_c_269316db_test_case_getTemperature_1_initializeSensor);
/* CPPTEST_TC_STEP_UID:3 */
_return = getTemperature(_result);
/* CPPTEST_TC_STEP_UID:4.0 */
CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("A#I#_return"), _return);
/* CPPTEST_TC_STEP_UID:4.1 */
CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("A#I#_result"), *_result);
}
/* CPPTEST_TEST_CASE_END test_case_getTemperature */

/* CPPTEST_TEST_CASE_BEGIN test_case_initializeSensor */
/* CPPTEST_TEST_CASE_CONTEXT sensor_handle initializeSensor(unsigned int) */
void TestSuite_sensor_c_269316db_test_case_initializeSensor()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" uid="0" version="2">
            <row>
                <val>V#U#_id</val>
            </row>
            <row>
                <val>3</val>
            </row>
            <row>
                <val>2</val>
            </row>
            <row>
                <val>1</val>
            </row>
            <ext>false</ext>
            <extname/>
        </step>
        <step id="MultiVariableStep" uid="1" version="1">
            <step id="VariableStep" version="1">
                <name>_id</name>
                <type>unsigned</type>
                <value>CPPTEST_DS_GET_UINTEGER("V#U#_id")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_return</name>
                <type>sensor_handle</type>
                <value/>
            </step>
            <step id="VariableStep" version="1">
                <name>count</name>
                <type>static unsigned int</type>
                <value>1</value>
            </step>
        </step>
        <step id="CallStep" uid="2" version="1">
            <comment>Tested function call</comment>
            <return>_return</return>
            <name>initializeSensor</name>
            <params>_id</params>
        </step>
        <step id="CodeStep" uid="3" version="1">
            <code><![CDATA[if(count == 1 || count == 2) {]]></code>
            <code><![CDATA[    CPPTEST_ASSERT_EQUAL(_return, 0);]]></code>
            <code><![CDATA[} else if (count ==  3) {]]></code>
            <code><![CDATA[printf("_return = %d", *_return);]]></code>
            <code><![CDATA[    CPPTEST_ASSERT_INTEGER_EQUAL(*_return, 1);]]></code>
            <code><![CDATA[}]]></code>
            <code><![CDATA[count++;]]></code>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
unsigned _id = CPPTEST_DS_GET_UINTEGER("V#U#_id");
sensor_handle _return;
static unsigned int count = 1;
/* CPPTEST_TC_STEP_UID:2 */
_return = initializeSensor(_id);
/* CPPTEST_TC_STEP_UID:3 */
if(count == 1 || count == 2) {
    CPPTEST_ASSERT_EQUAL(_return, 0);
} else if (count ==  3) {
printf("_return = %d", *_return);
    CPPTEST_ASSERT_INTEGER_EQUAL(*_return, 1);
}
count++;
}
/* CPPTEST_TEST_CASE_END test_case_initializeSensor */
