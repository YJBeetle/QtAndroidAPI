#include "./CellLocation.hpp"
#include "./ServiceState.hpp"
#include "./SignalStrength.hpp"
#include "../../JString.hpp"
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
	jint PhoneStateListener::LISTEN_EMERGENCY_NUMBER_LIST()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_EMERGENCY_NUMBER_LIST"
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
	
	// Constructors
	PhoneStateListener::PhoneStateListener()
		: JObject(
			"android.telephony.PhoneStateListener",
			"()V"
		) {}
	PhoneStateListener::PhoneStateListener(JObject arg0)
		: JObject(
			"android.telephony.PhoneStateListener",
			"(Ljava/util/concurrent/Executor;)V",
			arg0.object()
		) {}
	
	// Methods
	void PhoneStateListener::onActiveDataSubscriptionIdChanged(jint arg0) const
	{
		callMethod<void>(
			"onActiveDataSubscriptionIdChanged",
			"(I)V",
			arg0
		);
	}
	void PhoneStateListener::onCallForwardingIndicatorChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onCallForwardingIndicatorChanged",
			"(Z)V",
			arg0
		);
	}
	void PhoneStateListener::onCallStateChanged(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"onCallStateChanged",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void PhoneStateListener::onCellInfoChanged(JObject arg0) const
	{
		callMethod<void>(
			"onCellInfoChanged",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void PhoneStateListener::onCellLocationChanged(android::telephony::CellLocation arg0) const
	{
		callMethod<void>(
			"onCellLocationChanged",
			"(Landroid/telephony/CellLocation;)V",
			arg0.object()
		);
	}
	void PhoneStateListener::onDataActivity(jint arg0) const
	{
		callMethod<void>(
			"onDataActivity",
			"(I)V",
			arg0
		);
	}
	void PhoneStateListener::onDataConnectionStateChanged(jint arg0) const
	{
		callMethod<void>(
			"onDataConnectionStateChanged",
			"(I)V",
			arg0
		);
	}
	void PhoneStateListener::onDataConnectionStateChanged(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"onDataConnectionStateChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	void PhoneStateListener::onMessageWaitingIndicatorChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onMessageWaitingIndicatorChanged",
			"(Z)V",
			arg0
		);
	}
	void PhoneStateListener::onServiceStateChanged(android::telephony::ServiceState arg0) const
	{
		callMethod<void>(
			"onServiceStateChanged",
			"(Landroid/telephony/ServiceState;)V",
			arg0.object()
		);
	}
	void PhoneStateListener::onSignalStrengthChanged(jint arg0) const
	{
		callMethod<void>(
			"onSignalStrengthChanged",
			"(I)V",
			arg0
		);
	}
	void PhoneStateListener::onSignalStrengthsChanged(android::telephony::SignalStrength arg0) const
	{
		callMethod<void>(
			"onSignalStrengthsChanged",
			"(Landroid/telephony/SignalStrength;)V",
			arg0.object()
		);
	}
	void PhoneStateListener::onUserMobileDataStateChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onUserMobileDataStateChanged",
			"(Z)V",
			arg0
		);
	}
} // namespace android::telephony

