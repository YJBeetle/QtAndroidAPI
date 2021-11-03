#include "./BugreportManager_BugreportCallback.hpp"

namespace android::os
{
	// Fields
	jint BugreportManager_BugreportCallback::BUGREPORT_ERROR_ANOTHER_REPORT_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.os.BugreportManager$BugreportCallback",
			"BUGREPORT_ERROR_ANOTHER_REPORT_IN_PROGRESS"
		);
	}
	jint BugreportManager_BugreportCallback::BUGREPORT_ERROR_INVALID_INPUT()
	{
		return getStaticField<jint>(
			"android.os.BugreportManager$BugreportCallback",
			"BUGREPORT_ERROR_INVALID_INPUT"
		);
	}
	jint BugreportManager_BugreportCallback::BUGREPORT_ERROR_RUNTIME()
	{
		return getStaticField<jint>(
			"android.os.BugreportManager$BugreportCallback",
			"BUGREPORT_ERROR_RUNTIME"
		);
	}
	jint BugreportManager_BugreportCallback::BUGREPORT_ERROR_USER_CONSENT_TIMED_OUT()
	{
		return getStaticField<jint>(
			"android.os.BugreportManager$BugreportCallback",
			"BUGREPORT_ERROR_USER_CONSENT_TIMED_OUT"
		);
	}
	jint BugreportManager_BugreportCallback::BUGREPORT_ERROR_USER_DENIED_CONSENT()
	{
		return getStaticField<jint>(
			"android.os.BugreportManager$BugreportCallback",
			"BUGREPORT_ERROR_USER_DENIED_CONSENT"
		);
	}
	
	// QAndroidJniObject forward
	BugreportManager_BugreportCallback::BugreportManager_BugreportCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	BugreportManager_BugreportCallback::BugreportManager_BugreportCallback()
		: JObject(
			"android.os.BugreportManager$BugreportCallback",
			"()V"
		) {}
	
	// Methods
	void BugreportManager_BugreportCallback::onEarlyReportFinished() const
	{
		callMethod<void>(
			"onEarlyReportFinished",
			"()V"
		);
	}
	void BugreportManager_BugreportCallback::onError(jint arg0) const
	{
		callMethod<void>(
			"onError",
			"(I)V",
			arg0
		);
	}
	void BugreportManager_BugreportCallback::onFinished() const
	{
		callMethod<void>(
			"onFinished",
			"()V"
		);
	}
	void BugreportManager_BugreportCallback::onProgress(jfloat arg0) const
	{
		callMethod<void>(
			"onProgress",
			"(F)V",
			arg0
		);
	}
} // namespace android::os

