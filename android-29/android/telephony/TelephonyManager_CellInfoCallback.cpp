#include "../../JThrowable.hpp"
#include "./TelephonyManager_CellInfoCallback.hpp"

namespace android::telephony
{
	// Fields
	jint TelephonyManager_CellInfoCallback::ERROR_MODEM_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager$CellInfoCallback",
			"ERROR_MODEM_ERROR"
		);
	}
	jint TelephonyManager_CellInfoCallback::ERROR_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager$CellInfoCallback",
			"ERROR_TIMEOUT"
		);
	}
	
	// QJniObject forward
	TelephonyManager_CellInfoCallback::TelephonyManager_CellInfoCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TelephonyManager_CellInfoCallback::TelephonyManager_CellInfoCallback()
		: JObject(
			"android.telephony.TelephonyManager$CellInfoCallback",
			"()V"
		) {}
	
	// Methods
	void TelephonyManager_CellInfoCallback::onCellInfo(JObject arg0) const
	{
		callMethod<void>(
			"onCellInfo",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void TelephonyManager_CellInfoCallback::onError(jint arg0, JThrowable arg1) const
	{
		callMethod<void>(
			"onError",
			"(ILjava/lang/Throwable;)V",
			arg0,
			arg1.object<jthrowable>()
		);
	}
} // namespace android::telephony

