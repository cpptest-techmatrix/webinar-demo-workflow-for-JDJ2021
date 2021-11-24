#include "cpptest.h"

/** 
 * This file contains auto-generated stub definitions.
 *
 * Available C++test API functions (see C++test Users Guide for details):
 *     void CppTest_Assert(bool test, const char * message)
 *     void CppTest_Break()
 *     const char* CppTest_GetCurrentTestCaseName()
 *     const char* CppTest_GetCurrentTestSuiteName()
 *     bool CppTest_IsCurrentTestCase(const char* testCaseName)
 */

/** 
 * Header files where the stubbed functions are originally declared.
 * Verify #include directives and add any additional header files as necessary.
 */
#include "../../../../webinar-demo-ja/FlowAnalysis/sensor.h"

/** Auto-generated stub definition for function: enum SENSOR_STATUS readSensor(sensor_handle, int *) */
EXTERN_C_LINKAGE enum SENSOR_STATUS readSensor (sensor_handle _MT_var26, int * measure) ;
EXTERN_C_LINKAGE enum SENSOR_STATUS CppTest_Auto_Stub_readSensor (sensor_handle _MT_var16, int * measure) 
{
    CPPTEST_STUB_CALLED("readSensor");

    enum SENSOR_STATUS __return = SENSOR_READ_OK;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, enum SENSOR_STATUS* __return, sensor_handle _MT_var16, int * measure)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("readSensor", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = readSensor(_MT_var16, measure);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(enum SENSOR_STATUS* __return, sensor_handle _MT_var16, int * measure);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, _MT_var16, measure);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** Auto-generated stub definition for function: int calcCompensation(int) */
EXTERN_C_LINKAGE int calcCompensation (int temp) ;
EXTERN_C_LINKAGE int CppTest_Auto_Stub_calcCompensation (int temp) 
{
    CPPTEST_STUB_CALLED("calcCompensation");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return, int temp)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("calcCompensation", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = calcCompensation(temp);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return, int temp);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, temp);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** Auto-generated stub definition for function: int needCompensation(void) */
EXTERN_C_LINKAGE int needCompensation () ;
EXTERN_C_LINKAGE int CppTest_Auto_Stub_needCompensation (void) 
{
    CPPTEST_STUB_CALLED("needCompensation");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("needCompensation", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = needCompensation();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** Auto-generated stub definition for function: void finalizeSensor(sensor_handle) */
EXTERN_C_LINKAGE void finalizeSensor (sensor_handle handle) ;
EXTERN_C_LINKAGE void CppTest_Auto_Stub_finalizeSensor (sensor_handle handle) 
{
    CPPTEST_STUB_CALLED("finalizeSensor");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, sensor_handle handle)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("finalizeSensor", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     finalizeSensor(handle);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(sensor_handle handle);
        CPPTEST_STUB_INVOKE_CALLBACK(handle);

    } else {
        /* You can put additional stub logic here. */

    }

}

/** Auto-generated stub definition for function: void log_error(void) */
EXTERN_C_LINKAGE void log_error () ;
EXTERN_C_LINKAGE void CppTest_Auto_Stub_log_error (void) 
{
    CPPTEST_STUB_CALLED("log_error");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("log_error", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     log_error();
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS();
        CPPTEST_STUB_INVOKE_CALLBACK();

    } else {
        /* You can put additional stub logic here. */

    }

}
