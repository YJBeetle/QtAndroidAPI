#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::telecom
{
	class DisconnectCause;
}
namespace android::telecom
{
	class GatewayInfo;
}
namespace android::telecom
{
	class PhoneAccountHandle;
}
namespace android::telecom
{
	class StatusHints;
}
class JObject;
class JString;

namespace android::telecom
{
	class Call_Details : public JObject
	{
	public:
		// Fields
		static jint CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO();
		static jint CAPABILITY_CAN_PAUSE_VIDEO();
		static jint CAPABILITY_CAN_PULL_CALL();
		static jint CAPABILITY_DISCONNECT_FROM_CONFERENCE();
		static jint CAPABILITY_HOLD();
		static jint CAPABILITY_MANAGE_CONFERENCE();
		static jint CAPABILITY_MERGE_CONFERENCE();
		static jint CAPABILITY_MUTE();
		static jint CAPABILITY_RESPOND_VIA_TEXT();
		static jint CAPABILITY_SEPARATE_FROM_CONFERENCE();
		static jint CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL();
		static jint CAPABILITY_SUPPORTS_VT_LOCAL_RX();
		static jint CAPABILITY_SUPPORTS_VT_LOCAL_TX();
		static jint CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL();
		static jint CAPABILITY_SUPPORTS_VT_REMOTE_RX();
		static jint CAPABILITY_SUPPORTS_VT_REMOTE_TX();
		static jint CAPABILITY_SUPPORT_DEFLECT();
		static jint CAPABILITY_SUPPORT_HOLD();
		static jint CAPABILITY_SWAP_CONFERENCE();
		static jint DIRECTION_INCOMING();
		static jint DIRECTION_OUTGOING();
		static jint DIRECTION_UNKNOWN();
		static jint PROPERTY_CONFERENCE();
		static jint PROPERTY_EMERGENCY_CALLBACK_MODE();
		static jint PROPERTY_ENTERPRISE_CALL();
		static jint PROPERTY_GENERIC_CONFERENCE();
		static jint PROPERTY_HAS_CDMA_VOICE_PRIVACY();
		static jint PROPERTY_HIGH_DEF_AUDIO();
		static jint PROPERTY_IS_EXTERNAL_CALL();
		static jint PROPERTY_NETWORK_IDENTIFIED_EMERGENCY_CALL();
		static jint PROPERTY_RTT();
		static jint PROPERTY_SELF_MANAGED();
		static jint PROPERTY_VOIP_AUDIO_MODE();
		static jint PROPERTY_WIFI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Call_Details(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Call_Details(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean can(jint arg0, jint arg1);
		static JString capabilitiesToString(jint arg0);
		static jboolean hasProperty(jint arg0, jint arg1);
		static JString propertiesToString(jint arg0);
		jboolean can(jint arg0);
		jboolean equals(JObject arg0);
		android::telecom::PhoneAccountHandle getAccountHandle();
		jint getCallCapabilities();
		jint getCallDirection();
		jint getCallProperties();
		JString getCallerDisplayName();
		jint getCallerDisplayNamePresentation();
		jlong getConnectTimeMillis();
		jlong getCreationTimeMillis();
		android::telecom::DisconnectCause getDisconnectCause();
		android::os::Bundle getExtras();
		android::telecom::GatewayInfo getGatewayInfo();
		android::net::Uri getHandle();
		jint getHandlePresentation();
		android::os::Bundle getIntentExtras();
		android::telecom::StatusHints getStatusHints();
		jint getVideoState();
		jboolean hasProperty(jint arg0);
		jint hashCode();
		JString toString();
	};
} // namespace android::telecom

