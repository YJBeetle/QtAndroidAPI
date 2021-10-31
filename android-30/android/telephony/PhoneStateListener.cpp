#include "./BarringInfo.hpp"
#include "./CellIdentity.hpp"
#include "./CellLocation.hpp"
#include "./PreciseDataConnectionState.hpp"
#include "./ServiceState.hpp"
#include "./SignalStrength.hpp"
#include "./TelephonyDisplayInfo.hpp"
#include "./ims/ImsReasonInfo.hpp"
#include "./PhoneStateListener.hpp"

namespace android::telephony
{
	// Fields
	jint PhoneStateListener::LISTEN_ACTIVE_DATA_SUBSCRIPTION_ID_CHANGE()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_ACTIVE_DATA_SUBSCRIPTION_ID_CHANGE"
		);
	}
	jint PhoneStateListener::LISTEN_BARRING_INFO()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_BARRING_INFO"
		);
	}
	jint PhoneStateListener::LISTEN_CALL_DISCONNECT_CAUSES()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_CALL_DISCONNECT_CAUSES"
		);
	}
	jint PhoneStateListener::LISTEN_CALL_FORWARDING_INDICATOR()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_CALL_FORWARDING_INDICATOR"
		);
	}
	jint PhoneStateListener::LISTEN_CALL_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_CALL_STATE"
		);
	}
	jint PhoneStateListener::LISTEN_CELL_INFO()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_CELL_INFO"
		);
	}
	jint PhoneStateListener::LISTEN_CELL_LOCATION()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_CELL_LOCATION"
		);
	}
	jint PhoneStateListener::LISTEN_DATA_ACTIVITY()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_DATA_ACTIVITY"
		);
	}
	jint PhoneStateListener::LISTEN_DATA_CONNECTION_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_DATA_CONNECTION_STATE"
		);
	}
	jint PhoneStateListener::LISTEN_DISPLAY_INFO_CHANGED()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_DISPLAY_INFO_CHANGED"
		);
	}
	jint PhoneStateListener::LISTEN_EMERGENCY_NUMBER_LIST()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_EMERGENCY_NUMBER_LIST"
		);
	}
	jint PhoneStateListener::LISTEN_IMS_CALL_DISCONNECT_CAUSES()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_IMS_CALL_DISCONNECT_CAUSES"
		);
	}
	jint PhoneStateListener::LISTEN_MESSAGE_WAITING_INDICATOR()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_MESSAGE_WAITING_INDICATOR"
		);
	}
	jint PhoneStateListener::LISTEN_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_NONE"
		);
	}
	jint PhoneStateListener::LISTEN_PRECISE_DATA_CONNECTION_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_PRECISE_DATA_CONNECTION_STATE"
		);
	}
	jint PhoneStateListener::LISTEN_REGISTRATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_REGISTRATION_FAILURE"
		);
	}
	jint PhoneStateListener::LISTEN_SERVICE_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_SERVICE_STATE"
		);
	}
	jint PhoneStateListener::LISTEN_SIGNAL_STRENGTH()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_SIGNAL_STRENGTH"
		);
	}
	jint PhoneStateListener::LISTEN_SIGNAL_STRENGTHS()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_SIGNAL_STRENGTHS"
		);
	}
	jint PhoneStateListener::LISTEN_USER_MOBILE_DATA_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_USER_MOBILE_DATA_STATE"
		);
	}
	
	// QJniObject forward
	PhoneStateListener::PhoneStateListener(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PhoneStateListener::PhoneStateListener()
		: __JniBaseClass(
			"android.telephony.PhoneStateListener",
			"()V"
		) {}
	PhoneStateListener::PhoneStateListener(__JniBaseClass arg0)
		: __JniBaseClass(
			"android.telephony.PhoneStateListener",
			"(Ljava/util/concurrent/Executor;)V",
			arg0.object()
		) {}
	
	// Methods
	void PhoneStateListener::onActiveDataSubscriptionIdChanged(jint arg0)
	{
		callMethod<void>(
			"onActiveDataSubscriptionIdChanged",
			"(I)V",
			arg0
		);
	}
	void PhoneStateListener::onBarringInfoChanged(android::telephony::BarringInfo arg0)
	{
		callMethod<void>(
			"onBarringInfoChanged",
			"(Landroid/telephony/BarringInfo;)V",
			arg0.object()
		);
	}
	void PhoneStateListener::onCallDisconnectCauseChanged(jint arg0, jint arg1)
	{
		callMethod<void>(
			"onCallDisconnectCauseChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	void PhoneStateListener::onCallForwardingIndicatorChanged(jboolean arg0)
	{
		callMethod<void>(
			"onCallForwardingIndicatorChanged",
			"(Z)V",
			arg0
		);
	}
	void PhoneStateListener::onCallStateChanged(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"onCallStateChanged",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void PhoneStateListener::onCellInfoChanged(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onCellInfoChanged",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void PhoneStateListener::onCellLocationChanged(android::telephony::CellLocation arg0)
	{
		callMethod<void>(
			"onCellLocationChanged",
			"(Landroid/telephony/CellLocation;)V",
			arg0.object()
		);
	}
	void PhoneStateListener::onDataActivity(jint arg0)
	{
		callMethod<void>(
			"onDataActivity",
			"(I)V",
			arg0
		);
	}
	void PhoneStateListener::onDataConnectionStateChanged(jint arg0)
	{
		callMethod<void>(
			"onDataConnectionStateChanged",
			"(I)V",
			arg0
		);
	}
	void PhoneStateListener::onDataConnectionStateChanged(jint arg0, jint arg1)
	{
		callMethod<void>(
			"onDataConnectionStateChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	void PhoneStateListener::onDisplayInfoChanged(android::telephony::TelephonyDisplayInfo arg0)
	{
		callMethod<void>(
			"onDisplayInfoChanged",
			"(Landroid/telephony/TelephonyDisplayInfo;)V",
			arg0.object()
		);
	}
	void PhoneStateListener::onImsCallDisconnectCauseChanged(android::telephony::ims::ImsReasonInfo arg0)
	{
		callMethod<void>(
			"onImsCallDisconnectCauseChanged",
			"(Landroid/telephony/ims/ImsReasonInfo;)V",
			arg0.object()
		);
	}
	void PhoneStateListener::onMessageWaitingIndicatorChanged(jboolean arg0)
	{
		callMethod<void>(
			"onMessageWaitingIndicatorChanged",
			"(Z)V",
			arg0
		);
	}
	void PhoneStateListener::onPreciseDataConnectionStateChanged(android::telephony::PreciseDataConnectionState arg0)
	{
		callMethod<void>(
			"onPreciseDataConnectionStateChanged",
			"(Landroid/telephony/PreciseDataConnectionState;)V",
			arg0.object()
		);
	}
	void PhoneStateListener::onRegistrationFailed(android::telephony::CellIdentity arg0, jstring arg1, jint arg2, jint arg3, jint arg4)
	{
		callMethod<void>(
			"onRegistrationFailed",
			"(Landroid/telephony/CellIdentity;Ljava/lang/String;III)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void PhoneStateListener::onServiceStateChanged(android::telephony::ServiceState arg0)
	{
		callMethod<void>(
			"onServiceStateChanged",
			"(Landroid/telephony/ServiceState;)V",
			arg0.object()
		);
	}
	void PhoneStateListener::onSignalStrengthChanged(jint arg0)
	{
		callMethod<void>(
			"onSignalStrengthChanged",
			"(I)V",
			arg0
		);
	}
	void PhoneStateListener::onSignalStrengthsChanged(android::telephony::SignalStrength arg0)
	{
		callMethod<void>(
			"onSignalStrengthsChanged",
			"(Landroid/telephony/SignalStrength;)V",
			arg0.object()
		);
	}
	void PhoneStateListener::onUserMobileDataStateChanged(jboolean arg0)
	{
		callMethod<void>(
			"onUserMobileDataStateChanged",
			"(Z)V",
			arg0
		);
	}
} // namespace android::telephony

