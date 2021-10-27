#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::telecom
{
	class Call_Details : public __JniBaseClass
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
		
		Call_Details(QAndroidJniObject obj);
		// Constructors
		Call_Details() = default;
		
		// Methods
		static jboolean can(jint arg0, jint arg1);
		static jstring capabilitiesToString(jint arg0);
		static jboolean hasProperty(jint arg0, jint arg1);
		static jstring propertiesToString(jint arg0);
		jboolean can(jint arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject getAccountHandle();
		jint getCallCapabilities();
		jint getCallDirection();
		jint getCallProperties();
		jstring getCallerDisplayName();
		jint getCallerDisplayNamePresentation();
		jlong getConnectTimeMillis();
		jlong getCreationTimeMillis();
		QAndroidJniObject getDisconnectCause();
		QAndroidJniObject getExtras();
		QAndroidJniObject getGatewayInfo();
		QAndroidJniObject getHandle();
		jint getHandlePresentation();
		QAndroidJniObject getIntentExtras();
		QAndroidJniObject getStatusHints();
		jint getVideoState();
		jboolean hasProperty(jint arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace android::telecom

