#pragma once

#include "./CellLocation.def.hpp"
#include "./ServiceState.def.hpp"
#include "./SignalStrength.def.hpp"
#include "../../JString.hpp"
#include "./PhoneStateListener.def.hpp"

namespace android::telephony
{
	// Fields
	inline jint PhoneStateListener::LISTEN_CALL_FORWARDING_INDICATOR()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_CALL_FORWARDING_INDICATOR"
		);
	}
	inline jint PhoneStateListener::LISTEN_CALL_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_CALL_STATE"
		);
	}
	inline jint PhoneStateListener::LISTEN_CELL_INFO()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_CELL_INFO"
		);
	}
	inline jint PhoneStateListener::LISTEN_CELL_LOCATION()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_CELL_LOCATION"
		);
	}
	inline jint PhoneStateListener::LISTEN_DATA_ACTIVITY()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_DATA_ACTIVITY"
		);
	}
	inline jint PhoneStateListener::LISTEN_DATA_CONNECTION_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_DATA_CONNECTION_STATE"
		);
	}
	inline jint PhoneStateListener::LISTEN_MESSAGE_WAITING_INDICATOR()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_MESSAGE_WAITING_INDICATOR"
		);
	}
	inline jint PhoneStateListener::LISTEN_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_NONE"
		);
	}
	inline jint PhoneStateListener::LISTEN_SERVICE_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_SERVICE_STATE"
		);
	}
	inline jint PhoneStateListener::LISTEN_SIGNAL_STRENGTH()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_SIGNAL_STRENGTH"
		);
	}
	inline jint PhoneStateListener::LISTEN_SIGNAL_STRENGTHS()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_SIGNAL_STRENGTHS"
		);
	}
	inline jint PhoneStateListener::LISTEN_USER_MOBILE_DATA_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.PhoneStateListener",
			"LISTEN_USER_MOBILE_DATA_STATE"
		);
	}
	
	// Constructors
	inline PhoneStateListener::PhoneStateListener()
		: JObject(
			"android.telephony.PhoneStateListener",
			"()V"
		) {}
	
	// Methods
	inline void PhoneStateListener::onCallForwardingIndicatorChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onCallForwardingIndicatorChanged",
			"(Z)V",
			arg0
		);
	}
	inline void PhoneStateListener::onCallStateChanged(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"onCallStateChanged",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void PhoneStateListener::onCellInfoChanged(JObject arg0) const
	{
		callMethod<void>(
			"onCellInfoChanged",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void PhoneStateListener::onCellLocationChanged(android::telephony::CellLocation arg0) const
	{
		callMethod<void>(
			"onCellLocationChanged",
			"(Landroid/telephony/CellLocation;)V",
			arg0.object()
		);
	}
	inline void PhoneStateListener::onDataActivity(jint arg0) const
	{
		callMethod<void>(
			"onDataActivity",
			"(I)V",
			arg0
		);
	}
	inline void PhoneStateListener::onDataConnectionStateChanged(jint arg0) const
	{
		callMethod<void>(
			"onDataConnectionStateChanged",
			"(I)V",
			arg0
		);
	}
	inline void PhoneStateListener::onDataConnectionStateChanged(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"onDataConnectionStateChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void PhoneStateListener::onMessageWaitingIndicatorChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onMessageWaitingIndicatorChanged",
			"(Z)V",
			arg0
		);
	}
	inline void PhoneStateListener::onServiceStateChanged(android::telephony::ServiceState arg0) const
	{
		callMethod<void>(
			"onServiceStateChanged",
			"(Landroid/telephony/ServiceState;)V",
			arg0.object()
		);
	}
	inline void PhoneStateListener::onSignalStrengthChanged(jint arg0) const
	{
		callMethod<void>(
			"onSignalStrengthChanged",
			"(I)V",
			arg0
		);
	}
	inline void PhoneStateListener::onSignalStrengthsChanged(android::telephony::SignalStrength arg0) const
	{
		callMethod<void>(
			"onSignalStrengthsChanged",
			"(Landroid/telephony/SignalStrength;)V",
			arg0.object()
		);
	}
	inline void PhoneStateListener::onUserMobileDataStateChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onUserMobileDataStateChanged",
			"(Z)V",
			arg0
		);
	}
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
