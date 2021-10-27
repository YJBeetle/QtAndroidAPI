#include "./TelephonyManager_CellInfoCallback.hpp"

namespace android::telephony
{
	// Fields
	jint TelephonyManager_CellInfoCallback::ERROR_MODEM_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager$CellInfoCallback",
			"ERROR_MODEM_ERROR"
		);
	}
	jint TelephonyManager_CellInfoCallback::ERROR_TIMEOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager$CellInfoCallback",
			"ERROR_TIMEOUT"
		);
	}
	
	TelephonyManager_CellInfoCallback::TelephonyManager_CellInfoCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TelephonyManager_CellInfoCallback::TelephonyManager_CellInfoCallback()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.TelephonyManager$CellInfoCallback",
			"()V"
		);
	}
	
	// Methods
	void TelephonyManager_CellInfoCallback::onCellInfo(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onCellInfo",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void TelephonyManager_CellInfoCallback::onError(jint arg0, jthrowable arg1)
	{
		__thiz.callMethod<void>(
			"onError",
			"(ILjava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
} // namespace android::telephony

