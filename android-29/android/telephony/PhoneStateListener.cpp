#include "./CellLocation.hpp"
#include "./ServiceState.hpp"
#include "./SignalStrength.hpp"
#include "./PhoneStateListener.hpp"

namespace android::telephony
{
	// Fields
	jint PhoneStateListener::LISTEN_ACTIVE_DATA_SUBSCRIPTION_ID_CHANGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_ACTIVE_DATA_SUBSCRIPTION_ID_CHANGE"
		);
	}
	jint PhoneStateListener::LISTEN_CALL_FORWARDING_INDICATOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_CALL_FORWARDING_INDICATOR"
		);
	}
	jint PhoneStateListener::LISTEN_CALL_STATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_CALL_STATE"
		);
	}
	jint PhoneStateListener::LISTEN_CELL_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_CELL_INFO"
		);
	}
	jint PhoneStateListener::LISTEN_CELL_LOCATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_CELL_LOCATION"
		);
	}
	jint PhoneStateListener::LISTEN_DATA_ACTIVITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_DATA_ACTIVITY"
		);
	}
	jint PhoneStateListener::LISTEN_DATA_CONNECTION_STATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_DATA_CONNECTION_STATE"
		);
	}
	jint PhoneStateListener::LISTEN_EMERGENCY_NUMBER_LIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_EMERGENCY_NUMBER_LIST"
		);
	}
	jint PhoneStateListener::LISTEN_MESSAGE_WAITING_INDICATOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_MESSAGE_WAITING_INDICATOR"
		);
	}
	jint PhoneStateListener::LISTEN_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_NONE"
		);
	}
	jint PhoneStateListener::LISTEN_SERVICE_STATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_SERVICE_STATE"
		);
	}
	jint PhoneStateListener::LISTEN_SIGNAL_STRENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_SIGNAL_STRENGTH"
		);
	}
	jint PhoneStateListener::LISTEN_SIGNAL_STRENGTHS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_SIGNAL_STRENGTHS"
		);
	}
	jint PhoneStateListener::LISTEN_USER_MOBILE_DATA_STATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_USER_MOBILE_DATA_STATE"
		);
	}
	
	PhoneStateListener::PhoneStateListener(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PhoneStateListener::PhoneStateListener()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.PhoneStateListener",
			"()V"
		);
	}
	PhoneStateListener::PhoneStateListener(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.PhoneStateListener",
			"(Ljava/util/concurrent/Executor;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void PhoneStateListener::onActiveDataSubscriptionIdChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onActiveDataSubscriptionIdChanged",
			"(I)V",
			arg0
		);
	}
	void PhoneStateListener::onCallForwardingIndicatorChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onCallForwardingIndicatorChanged",
			"(Z)V",
			arg0
		);
	}
	void PhoneStateListener::onCallStateChanged(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onCallStateChanged",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void PhoneStateListener::onCellInfoChanged(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onCellInfoChanged",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void PhoneStateListener::onCellLocationChanged(android::telephony::CellLocation arg0)
	{
		__thiz.callMethod<void>(
			"onCellLocationChanged",
			"(Landroid/telephony/CellLocation;)V",
			arg0.__jniObject().object()
		);
	}
	void PhoneStateListener::onDataActivity(jint arg0)
	{
		__thiz.callMethod<void>(
			"onDataActivity",
			"(I)V",
			arg0
		);
	}
	void PhoneStateListener::onDataConnectionStateChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onDataConnectionStateChanged",
			"(I)V",
			arg0
		);
	}
	void PhoneStateListener::onDataConnectionStateChanged(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onDataConnectionStateChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	void PhoneStateListener::onMessageWaitingIndicatorChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onMessageWaitingIndicatorChanged",
			"(Z)V",
			arg0
		);
	}
	void PhoneStateListener::onServiceStateChanged(android::telephony::ServiceState arg0)
	{
		__thiz.callMethod<void>(
			"onServiceStateChanged",
			"(Landroid/telephony/ServiceState;)V",
			arg0.__jniObject().object()
		);
	}
	void PhoneStateListener::onSignalStrengthChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onSignalStrengthChanged",
			"(I)V",
			arg0
		);
	}
	void PhoneStateListener::onSignalStrengthsChanged(android::telephony::SignalStrength arg0)
	{
		__thiz.callMethod<void>(
			"onSignalStrengthsChanged",
			"(Landroid/telephony/SignalStrength;)V",
			arg0.__jniObject().object()
		);
	}
	void PhoneStateListener::onUserMobileDataStateChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onUserMobileDataStateChanged",
			"(Z)V",
			arg0
		);
	}
} // namespace android::telephony

