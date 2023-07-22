#pragma once

#include "./BugreportManager_BugreportCallback.def.hpp"

namespace android::os
{
	// Fields
	inline jint BugreportManager_BugreportCallback::BUGREPORT_ERROR_ANOTHER_REPORT_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.os.BugreportManager$BugreportCallback",
			"BUGREPORT_ERROR_ANOTHER_REPORT_IN_PROGRESS"
		);
	}
	inline jint BugreportManager_BugreportCallback::BUGREPORT_ERROR_INVALID_INPUT()
	{
		return getStaticField<jint>(
			"android.os.BugreportManager$BugreportCallback",
			"BUGREPORT_ERROR_INVALID_INPUT"
		);
	}
	inline jint BugreportManager_BugreportCallback::BUGREPORT_ERROR_RUNTIME()
	{
		return getStaticField<jint>(
			"android.os.BugreportManager$BugreportCallback",
			"BUGREPORT_ERROR_RUNTIME"
		);
	}
	inline jint BugreportManager_BugreportCallback::BUGREPORT_ERROR_USER_CONSENT_TIMED_OUT()
	{
		return getStaticField<jint>(
			"android.os.BugreportManager$BugreportCallback",
			"BUGREPORT_ERROR_USER_CONSENT_TIMED_OUT"
		);
	}
	inline jint BugreportManager_BugreportCallback::BUGREPORT_ERROR_USER_DENIED_CONSENT()
	{
		return getStaticField<jint>(
			"android.os.BugreportManager$BugreportCallback",
			"BUGREPORT_ERROR_USER_DENIED_CONSENT"
		);
	}
	
	// Constructors
	inline BugreportManager_BugreportCallback::BugreportManager_BugreportCallback()
		: JObject(
			"android.os.BugreportManager$BugreportCallback",
			"()V"
		) {}
	
	// Methods
	inline void BugreportManager_BugreportCallback::onEarlyReportFinished() const
	{
		callMethod<void>(
			"onEarlyReportFinished",
			"()V"
		);
	}
	inline void BugreportManager_BugreportCallback::onError(jint arg0) const
	{
		callMethod<void>(
			"onError",
			"(I)V",
			arg0
		);
	}
	inline void BugreportManager_BugreportCallback::onFinished() const
	{
		callMethod<void>(
			"onFinished",
			"()V"
		);
	}
	inline void BugreportManager_BugreportCallback::onProgress(jfloat arg0) const
	{
		callMethod<void>(
			"onProgress",
			"(F)V",
			arg0
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
