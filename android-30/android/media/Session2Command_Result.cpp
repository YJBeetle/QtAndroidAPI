#include "../os/Bundle.hpp"
#include "./Session2Command_Result.hpp"

namespace android::media
{
	// Fields
	jint Session2Command_Result::RESULT_ERROR_UNKNOWN_ERROR()
	{
		return getStaticField<jint>(
			"android.media.Session2Command$Result",
			"RESULT_ERROR_UNKNOWN_ERROR"
		);
	}
	jint Session2Command_Result::RESULT_INFO_SKIPPED()
	{
		return getStaticField<jint>(
			"android.media.Session2Command$Result",
			"RESULT_INFO_SKIPPED"
		);
	}
	jint Session2Command_Result::RESULT_SUCCESS()
	{
		return getStaticField<jint>(
			"android.media.Session2Command$Result",
			"RESULT_SUCCESS"
		);
	}
	
	// QAndroidJniObject forward
	Session2Command_Result::Session2Command_Result(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Session2Command_Result::Session2Command_Result(jint arg0, android::os::Bundle arg1)
		: JObject(
			"android.media.Session2Command$Result",
			"(ILandroid/os/Bundle;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jint Session2Command_Result::getResultCode() const
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	android::os::Bundle Session2Command_Result::getResultData() const
	{
		return callObjectMethod(
			"getResultData",
			"()Landroid/os/Bundle;"
		);
	}
} // namespace android::media

