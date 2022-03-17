#pragma once

#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "./DisconnectCause.def.hpp"
#include "./GatewayInfo.def.hpp"
#include "./PhoneAccountHandle.def.hpp"
#include "./StatusHints.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Call_Details.def.hpp"

namespace android::telecom
{
	// Fields
	inline jint Call_Details::CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO"
		);
	}
	inline jint Call_Details::CAPABILITY_CAN_PAUSE_VIDEO()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_CAN_PAUSE_VIDEO"
		);
	}
	inline jint Call_Details::CAPABILITY_CAN_PULL_CALL()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_CAN_PULL_CALL"
		);
	}
	inline jint Call_Details::CAPABILITY_DISCONNECT_FROM_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_DISCONNECT_FROM_CONFERENCE"
		);
	}
	inline jint Call_Details::CAPABILITY_HOLD()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_HOLD"
		);
	}
	inline jint Call_Details::CAPABILITY_MANAGE_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_MANAGE_CONFERENCE"
		);
	}
	inline jint Call_Details::CAPABILITY_MERGE_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_MERGE_CONFERENCE"
		);
	}
	inline jint Call_Details::CAPABILITY_MUTE()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_MUTE"
		);
	}
	inline jint Call_Details::CAPABILITY_RESPOND_VIA_TEXT()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_RESPOND_VIA_TEXT"
		);
	}
	inline jint Call_Details::CAPABILITY_SEPARATE_FROM_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SEPARATE_FROM_CONFERENCE"
		);
	}
	inline jint Call_Details::CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL"
		);
	}
	inline jint Call_Details::CAPABILITY_SUPPORTS_VT_LOCAL_RX()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORTS_VT_LOCAL_RX"
		);
	}
	inline jint Call_Details::CAPABILITY_SUPPORTS_VT_LOCAL_TX()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORTS_VT_LOCAL_TX"
		);
	}
	inline jint Call_Details::CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL"
		);
	}
	inline jint Call_Details::CAPABILITY_SUPPORTS_VT_REMOTE_RX()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORTS_VT_REMOTE_RX"
		);
	}
	inline jint Call_Details::CAPABILITY_SUPPORTS_VT_REMOTE_TX()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORTS_VT_REMOTE_TX"
		);
	}
	inline jint Call_Details::CAPABILITY_SUPPORT_DEFLECT()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORT_DEFLECT"
		);
	}
	inline jint Call_Details::CAPABILITY_SUPPORT_HOLD()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORT_HOLD"
		);
	}
	inline jint Call_Details::CAPABILITY_SWAP_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SWAP_CONFERENCE"
		);
	}
	inline jint Call_Details::DIRECTION_INCOMING()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"DIRECTION_INCOMING"
		);
	}
	inline jint Call_Details::DIRECTION_OUTGOING()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"DIRECTION_OUTGOING"
		);
	}
	inline jint Call_Details::DIRECTION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"DIRECTION_UNKNOWN"
		);
	}
	inline jint Call_Details::PROPERTY_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_CONFERENCE"
		);
	}
	inline jint Call_Details::PROPERTY_EMERGENCY_CALLBACK_MODE()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_EMERGENCY_CALLBACK_MODE"
		);
	}
	inline jint Call_Details::PROPERTY_ENTERPRISE_CALL()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_ENTERPRISE_CALL"
		);
	}
	inline jint Call_Details::PROPERTY_GENERIC_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_GENERIC_CONFERENCE"
		);
	}
	inline jint Call_Details::PROPERTY_HAS_CDMA_VOICE_PRIVACY()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_HAS_CDMA_VOICE_PRIVACY"
		);
	}
	inline jint Call_Details::PROPERTY_HIGH_DEF_AUDIO()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_HIGH_DEF_AUDIO"
		);
	}
	inline jint Call_Details::PROPERTY_IS_EXTERNAL_CALL()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_IS_EXTERNAL_CALL"
		);
	}
	inline jint Call_Details::PROPERTY_NETWORK_IDENTIFIED_EMERGENCY_CALL()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_NETWORK_IDENTIFIED_EMERGENCY_CALL"
		);
	}
	inline jint Call_Details::PROPERTY_RTT()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_RTT"
		);
	}
	inline jint Call_Details::PROPERTY_SELF_MANAGED()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_SELF_MANAGED"
		);
	}
	inline jint Call_Details::PROPERTY_VOIP_AUDIO_MODE()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_VOIP_AUDIO_MODE"
		);
	}
	inline jint Call_Details::PROPERTY_WIFI()
	{
		return getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_WIFI"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean Call_Details::can(jint arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.telecom.Call$Details",
			"can",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline JString Call_Details::capabilitiesToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.telecom.Call$Details",
			"capabilitiesToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jboolean Call_Details::hasProperty(jint arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.telecom.Call$Details",
			"hasProperty",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline JString Call_Details::propertiesToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.telecom.Call$Details",
			"propertiesToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jboolean Call_Details::can(jint arg0) const
	{
		return callMethod<jboolean>(
			"can",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Call_Details::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::telecom::PhoneAccountHandle Call_Details::getAccountHandle() const
	{
		return callObjectMethod(
			"getAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	inline jint Call_Details::getCallCapabilities() const
	{
		return callMethod<jint>(
			"getCallCapabilities",
			"()I"
		);
	}
	inline jint Call_Details::getCallDirection() const
	{
		return callMethod<jint>(
			"getCallDirection",
			"()I"
		);
	}
	inline jint Call_Details::getCallProperties() const
	{
		return callMethod<jint>(
			"getCallProperties",
			"()I"
		);
	}
	inline JString Call_Details::getCallerDisplayName() const
	{
		return callObjectMethod(
			"getCallerDisplayName",
			"()Ljava/lang/String;"
		);
	}
	inline jint Call_Details::getCallerDisplayNamePresentation() const
	{
		return callMethod<jint>(
			"getCallerDisplayNamePresentation",
			"()I"
		);
	}
	inline jlong Call_Details::getConnectTimeMillis() const
	{
		return callMethod<jlong>(
			"getConnectTimeMillis",
			"()J"
		);
	}
	inline jlong Call_Details::getCreationTimeMillis() const
	{
		return callMethod<jlong>(
			"getCreationTimeMillis",
			"()J"
		);
	}
	inline android::telecom::DisconnectCause Call_Details::getDisconnectCause() const
	{
		return callObjectMethod(
			"getDisconnectCause",
			"()Landroid/telecom/DisconnectCause;"
		);
	}
	inline android::os::Bundle Call_Details::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::telecom::GatewayInfo Call_Details::getGatewayInfo() const
	{
		return callObjectMethod(
			"getGatewayInfo",
			"()Landroid/telecom/GatewayInfo;"
		);
	}
	inline android::net::Uri Call_Details::getHandle() const
	{
		return callObjectMethod(
			"getHandle",
			"()Landroid/net/Uri;"
		);
	}
	inline jint Call_Details::getHandlePresentation() const
	{
		return callMethod<jint>(
			"getHandlePresentation",
			"()I"
		);
	}
	inline android::os::Bundle Call_Details::getIntentExtras() const
	{
		return callObjectMethod(
			"getIntentExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::telecom::StatusHints Call_Details::getStatusHints() const
	{
		return callObjectMethod(
			"getStatusHints",
			"()Landroid/telecom/StatusHints;"
		);
	}
	inline jint Call_Details::getVideoState() const
	{
		return callMethod<jint>(
			"getVideoState",
			"()I"
		);
	}
	inline jboolean Call_Details::hasProperty(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasProperty",
			"(I)Z",
			arg0
		);
	}
	inline jint Call_Details::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Call_Details::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::telecom

// Base class headers

