#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "./DisconnectCause.hpp"
#include "./GatewayInfo.hpp"
#include "./PhoneAccountHandle.hpp"
#include "./StatusHints.hpp"
#include "./Call_Details.hpp"

namespace android::telecom
{
	// Fields
	jint Call_Details::CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO"
		);
	}
	jint Call_Details::CAPABILITY_CAN_PAUSE_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_CAN_PAUSE_VIDEO"
		);
	}
	jint Call_Details::CAPABILITY_CAN_PULL_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_CAN_PULL_CALL"
		);
	}
	jint Call_Details::CAPABILITY_DISCONNECT_FROM_CONFERENCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_DISCONNECT_FROM_CONFERENCE"
		);
	}
	jint Call_Details::CAPABILITY_HOLD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_HOLD"
		);
	}
	jint Call_Details::CAPABILITY_MANAGE_CONFERENCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_MANAGE_CONFERENCE"
		);
	}
	jint Call_Details::CAPABILITY_MERGE_CONFERENCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_MERGE_CONFERENCE"
		);
	}
	jint Call_Details::CAPABILITY_MUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_MUTE"
		);
	}
	jint Call_Details::CAPABILITY_RESPOND_VIA_TEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_RESPOND_VIA_TEXT"
		);
	}
	jint Call_Details::CAPABILITY_SEPARATE_FROM_CONFERENCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SEPARATE_FROM_CONFERENCE"
		);
	}
	jint Call_Details::CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL"
		);
	}
	jint Call_Details::CAPABILITY_SUPPORTS_VT_LOCAL_RX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORTS_VT_LOCAL_RX"
		);
	}
	jint Call_Details::CAPABILITY_SUPPORTS_VT_LOCAL_TX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORTS_VT_LOCAL_TX"
		);
	}
	jint Call_Details::CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL"
		);
	}
	jint Call_Details::CAPABILITY_SUPPORTS_VT_REMOTE_RX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORTS_VT_REMOTE_RX"
		);
	}
	jint Call_Details::CAPABILITY_SUPPORTS_VT_REMOTE_TX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORTS_VT_REMOTE_TX"
		);
	}
	jint Call_Details::CAPABILITY_SUPPORT_DEFLECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORT_DEFLECT"
		);
	}
	jint Call_Details::CAPABILITY_SUPPORT_HOLD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SUPPORT_HOLD"
		);
	}
	jint Call_Details::CAPABILITY_SWAP_CONFERENCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"CAPABILITY_SWAP_CONFERENCE"
		);
	}
	jint Call_Details::DIRECTION_INCOMING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"DIRECTION_INCOMING"
		);
	}
	jint Call_Details::DIRECTION_OUTGOING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"DIRECTION_OUTGOING"
		);
	}
	jint Call_Details::DIRECTION_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"DIRECTION_UNKNOWN"
		);
	}
	jint Call_Details::PROPERTY_CONFERENCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_CONFERENCE"
		);
	}
	jint Call_Details::PROPERTY_EMERGENCY_CALLBACK_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_EMERGENCY_CALLBACK_MODE"
		);
	}
	jint Call_Details::PROPERTY_ENTERPRISE_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_ENTERPRISE_CALL"
		);
	}
	jint Call_Details::PROPERTY_GENERIC_CONFERENCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_GENERIC_CONFERENCE"
		);
	}
	jint Call_Details::PROPERTY_HAS_CDMA_VOICE_PRIVACY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_HAS_CDMA_VOICE_PRIVACY"
		);
	}
	jint Call_Details::PROPERTY_HIGH_DEF_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_HIGH_DEF_AUDIO"
		);
	}
	jint Call_Details::PROPERTY_IS_EXTERNAL_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_IS_EXTERNAL_CALL"
		);
	}
	jint Call_Details::PROPERTY_NETWORK_IDENTIFIED_EMERGENCY_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_NETWORK_IDENTIFIED_EMERGENCY_CALL"
		);
	}
	jint Call_Details::PROPERTY_RTT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_RTT"
		);
	}
	jint Call_Details::PROPERTY_SELF_MANAGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_SELF_MANAGED"
		);
	}
	jint Call_Details::PROPERTY_VOIP_AUDIO_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_VOIP_AUDIO_MODE"
		);
	}
	jint Call_Details::PROPERTY_WIFI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Call$Details",
			"PROPERTY_WIFI"
		);
	}
	
	Call_Details::Call_Details(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean Call_Details::can(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telecom.Call$Details",
			"can",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jstring Call_Details::capabilitiesToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telecom.Call$Details",
			"capabilitiesToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean Call_Details::hasProperty(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telecom.Call$Details",
			"hasProperty",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jstring Call_Details::propertiesToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telecom.Call$Details",
			"propertiesToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean Call_Details::can(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"can",
			"(I)Z",
			arg0
		);
	}
	jboolean Call_Details::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Call_Details::getAccountHandle()
	{
		return __thiz.callObjectMethod(
			"getAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	jint Call_Details::getCallCapabilities()
	{
		return __thiz.callMethod<jint>(
			"getCallCapabilities",
			"()I"
		);
	}
	jint Call_Details::getCallDirection()
	{
		return __thiz.callMethod<jint>(
			"getCallDirection",
			"()I"
		);
	}
	jint Call_Details::getCallProperties()
	{
		return __thiz.callMethod<jint>(
			"getCallProperties",
			"()I"
		);
	}
	jstring Call_Details::getCallerDisplayName()
	{
		return __thiz.callObjectMethod(
			"getCallerDisplayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Call_Details::getCallerDisplayNamePresentation()
	{
		return __thiz.callMethod<jint>(
			"getCallerDisplayNamePresentation",
			"()I"
		);
	}
	jlong Call_Details::getConnectTimeMillis()
	{
		return __thiz.callMethod<jlong>(
			"getConnectTimeMillis",
			"()J"
		);
	}
	jlong Call_Details::getCreationTimeMillis()
	{
		return __thiz.callMethod<jlong>(
			"getCreationTimeMillis",
			"()J"
		);
	}
	QAndroidJniObject Call_Details::getDisconnectCause()
	{
		return __thiz.callObjectMethod(
			"getDisconnectCause",
			"()Landroid/telecom/DisconnectCause;"
		);
	}
	QAndroidJniObject Call_Details::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject Call_Details::getGatewayInfo()
	{
		return __thiz.callObjectMethod(
			"getGatewayInfo",
			"()Landroid/telecom/GatewayInfo;"
		);
	}
	QAndroidJniObject Call_Details::getHandle()
	{
		return __thiz.callObjectMethod(
			"getHandle",
			"()Landroid/net/Uri;"
		);
	}
	jint Call_Details::getHandlePresentation()
	{
		return __thiz.callMethod<jint>(
			"getHandlePresentation",
			"()I"
		);
	}
	QAndroidJniObject Call_Details::getIntentExtras()
	{
		return __thiz.callObjectMethod(
			"getIntentExtras",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject Call_Details::getStatusHints()
	{
		return __thiz.callObjectMethod(
			"getStatusHints",
			"()Landroid/telecom/StatusHints;"
		);
	}
	jint Call_Details::getVideoState()
	{
		return __thiz.callMethod<jint>(
			"getVideoState",
			"()I"
		);
	}
	jboolean Call_Details::hasProperty(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasProperty",
			"(I)Z",
			arg0
		);
	}
	jint Call_Details::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Call_Details::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::telecom

