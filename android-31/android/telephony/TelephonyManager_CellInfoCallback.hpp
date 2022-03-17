#pragma once

#include "../../JThrowable.hpp"
#include "./TelephonyManager_CellInfoCallback.def.hpp"

namespace android::telephony
{
	// Fields
	inline jint TelephonyManager_CellInfoCallback::ERROR_MODEM_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager$CellInfoCallback",
			"ERROR_MODEM_ERROR"
		);
	}
	inline jint TelephonyManager_CellInfoCallback::ERROR_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager$CellInfoCallback",
			"ERROR_TIMEOUT"
		);
	}
	
	// Constructors
	inline TelephonyManager_CellInfoCallback::TelephonyManager_CellInfoCallback()
		: JObject(
			"android.telephony.TelephonyManager$CellInfoCallback",
			"()V"
		) {}
	
	// Methods
	inline void TelephonyManager_CellInfoCallback::onCellInfo(JObject arg0) const
	{
		callMethod<void>(
			"onCellInfo",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void TelephonyManager_CellInfoCallback::onError(jint arg0, JThrowable arg1) const
	{
		callMethod<void>(
			"onError",
			"(ILjava/lang/Throwable;)V",
			arg0,
			arg1.object<jthrowable>()
		);
	}
} // namespace android::telephony

// Base class headers

