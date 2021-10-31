#include "../os/Bundle.hpp"
#include "./Session2Command_Result.hpp"

namespace android::media
{
	// Fields
	jint Session2Command_Result::RESULT_ERROR_UNKNOWN_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.Session2Command$Result",
			"RESULT_ERROR_UNKNOWN_ERROR"
		);
	}
	jint Session2Command_Result::RESULT_INFO_SKIPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.Session2Command$Result",
			"RESULT_INFO_SKIPPED"
		);
	}
	jint Session2Command_Result::RESULT_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.Session2Command$Result",
			"RESULT_SUCCESS"
		);
	}
	
	Session2Command_Result::Session2Command_Result(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Session2Command_Result::Session2Command_Result(jint arg0, android::os::Bundle arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.Session2Command$Result",
			"(ILandroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint Session2Command_Result::getResultCode()
	{
		return __thiz.callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	QAndroidJniObject Session2Command_Result::getResultData()
	{
		return __thiz.callObjectMethod(
			"getResultData",
			"()Landroid/os/Bundle;"
		);
	}
} // namespace android::media

