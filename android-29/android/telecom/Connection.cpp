#include "../bluetooth/BluetoothDevice.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "./CallAudioState.hpp"
#include "./Conference.hpp"
#include "./Connection_RttTextStream.hpp"
#include "./Connection_VideoProvider.hpp"
#include "./DisconnectCause.hpp"
#include "./StatusHints.hpp"
#include "./Connection.hpp"

namespace android::telecom
{
	// Fields
	jint Connection::CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO"
		);
	}
	jint Connection::CAPABILITY_CAN_PAUSE_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_CAN_PAUSE_VIDEO"
		);
	}
	jint Connection::CAPABILITY_CAN_PULL_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_CAN_PULL_CALL"
		);
	}
	jint Connection::CAPABILITY_CAN_SEND_RESPONSE_VIA_CONNECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_CAN_SEND_RESPONSE_VIA_CONNECTION"
		);
	}
	jint Connection::CAPABILITY_CAN_UPGRADE_TO_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_CAN_UPGRADE_TO_VIDEO"
		);
	}
	jint Connection::CAPABILITY_DISCONNECT_FROM_CONFERENCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_DISCONNECT_FROM_CONFERENCE"
		);
	}
	jint Connection::CAPABILITY_HOLD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_HOLD"
		);
	}
	jint Connection::CAPABILITY_MANAGE_CONFERENCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_MANAGE_CONFERENCE"
		);
	}
	jint Connection::CAPABILITY_MERGE_CONFERENCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_MERGE_CONFERENCE"
		);
	}
	jint Connection::CAPABILITY_MUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_MUTE"
		);
	}
	jint Connection::CAPABILITY_RESPOND_VIA_TEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_RESPOND_VIA_TEXT"
		);
	}
	jint Connection::CAPABILITY_SEPARATE_FROM_CONFERENCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SEPARATE_FROM_CONFERENCE"
		);
	}
	jint Connection::CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL"
		);
	}
	jint Connection::CAPABILITY_SUPPORTS_VT_LOCAL_RX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORTS_VT_LOCAL_RX"
		);
	}
	jint Connection::CAPABILITY_SUPPORTS_VT_LOCAL_TX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORTS_VT_LOCAL_TX"
		);
	}
	jint Connection::CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL"
		);
	}
	jint Connection::CAPABILITY_SUPPORTS_VT_REMOTE_RX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORTS_VT_REMOTE_RX"
		);
	}
	jint Connection::CAPABILITY_SUPPORTS_VT_REMOTE_TX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORTS_VT_REMOTE_TX"
		);
	}
	jint Connection::CAPABILITY_SUPPORT_DEFLECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORT_DEFLECT"
		);
	}
	jint Connection::CAPABILITY_SUPPORT_HOLD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORT_HOLD"
		);
	}
	jint Connection::CAPABILITY_SWAP_CONFERENCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SWAP_CONFERENCE"
		);
	}
	jstring Connection::EVENT_CALL_MERGE_FAILED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.Connection",
			"EVENT_CALL_MERGE_FAILED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Connection::EVENT_CALL_PULL_FAILED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.Connection",
			"EVENT_CALL_PULL_FAILED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Connection::EVENT_RTT_AUDIO_INDICATION_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.Connection",
			"EVENT_RTT_AUDIO_INDICATION_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Connection::EXTRA_ANSWERING_DROPS_FG_CALL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_ANSWERING_DROPS_FG_CALL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Connection::EXTRA_ANSWERING_DROPS_FG_CALL_APP_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_ANSWERING_DROPS_FG_CALL_APP_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Connection::EXTRA_CALL_SUBJECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_CALL_SUBJECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Connection::EXTRA_CHILD_ADDRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_CHILD_ADDRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Connection::EXTRA_IS_RTT_AUDIO_PRESENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_IS_RTT_AUDIO_PRESENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Connection::EXTRA_LAST_FORWARDED_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_LAST_FORWARDED_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Connection::EXTRA_SIP_INVITE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_SIP_INVITE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Connection::PROPERTY_HAS_CDMA_VOICE_PRIVACY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"PROPERTY_HAS_CDMA_VOICE_PRIVACY"
		);
	}
	jint Connection::PROPERTY_IS_EXTERNAL_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"PROPERTY_IS_EXTERNAL_CALL"
		);
	}
	jint Connection::PROPERTY_IS_RTT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"PROPERTY_IS_RTT"
		);
	}
	jint Connection::PROPERTY_SELF_MANAGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"PROPERTY_SELF_MANAGED"
		);
	}
	jint Connection::STATE_ACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_ACTIVE"
		);
	}
	jint Connection::STATE_DIALING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_DIALING"
		);
	}
	jint Connection::STATE_DISCONNECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_DISCONNECTED"
		);
	}
	jint Connection::STATE_HOLDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_HOLDING"
		);
	}
	jint Connection::STATE_INITIALIZING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_INITIALIZING"
		);
	}
	jint Connection::STATE_NEW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_NEW"
		);
	}
	jint Connection::STATE_PULLING_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_PULLING_CALL"
		);
	}
	jint Connection::STATE_RINGING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_RINGING"
		);
	}
	
	Connection::Connection(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Connection::Connection()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.Connection",
			"()V"
		);
	}
	
	// Methods
	jstring Connection::capabilitiesToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telecom.Connection",
			"capabilitiesToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject Connection::createCanceledConnection()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telecom.Connection",
			"createCanceledConnection",
			"()Landroid/telecom/Connection;"
		);
	}
	QAndroidJniObject Connection::createFailedConnection(android::telecom::DisconnectCause arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telecom.Connection",
			"createFailedConnection",
			"(Landroid/telecom/DisconnectCause;)Landroid/telecom/Connection;",
			arg0.__jniObject().object()
		);
	}
	jstring Connection::propertiesToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telecom.Connection",
			"propertiesToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Connection::stateToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telecom.Connection",
			"stateToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void Connection::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V"
		);
	}
	QAndroidJniObject Connection::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()Landroid/net/Uri;"
		);
	}
	jint Connection::getAddressPresentation()
	{
		return __thiz.callMethod<jint>(
			"getAddressPresentation",
			"()I"
		);
	}
	jboolean Connection::getAudioModeIsVoip()
	{
		return __thiz.callMethod<jboolean>(
			"getAudioModeIsVoip",
			"()Z"
		);
	}
	QAndroidJniObject Connection::getCallAudioState()
	{
		return __thiz.callObjectMethod(
			"getCallAudioState",
			"()Landroid/telecom/CallAudioState;"
		);
	}
	jstring Connection::getCallerDisplayName()
	{
		return __thiz.callObjectMethod(
			"getCallerDisplayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Connection::getCallerDisplayNamePresentation()
	{
		return __thiz.callMethod<jint>(
			"getCallerDisplayNamePresentation",
			"()I"
		);
	}
	QAndroidJniObject Connection::getConference()
	{
		return __thiz.callObjectMethod(
			"getConference",
			"()Landroid/telecom/Conference;"
		);
	}
	QAndroidJniObject Connection::getConferenceables()
	{
		return __thiz.callObjectMethod(
			"getConferenceables",
			"()Ljava/util/List;"
		);
	}
	jint Connection::getConnectionCapabilities()
	{
		return __thiz.callMethod<jint>(
			"getConnectionCapabilities",
			"()I"
		);
	}
	jint Connection::getConnectionProperties()
	{
		return __thiz.callMethod<jint>(
			"getConnectionProperties",
			"()I"
		);
	}
	QAndroidJniObject Connection::getDisconnectCause()
	{
		return __thiz.callObjectMethod(
			"getDisconnectCause",
			"()Landroid/telecom/DisconnectCause;"
		);
	}
	QAndroidJniObject Connection::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint Connection::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I"
		);
	}
	QAndroidJniObject Connection::getStatusHints()
	{
		return __thiz.callObjectMethod(
			"getStatusHints",
			"()Landroid/telecom/StatusHints;"
		);
	}
	QAndroidJniObject Connection::getVideoProvider()
	{
		return __thiz.callObjectMethod(
			"getVideoProvider",
			"()Landroid/telecom/Connection$VideoProvider;"
		);
	}
	void Connection::handleRttUpgradeResponse(android::telecom::Connection_RttTextStream arg0)
	{
		__thiz.callMethod<void>(
			"handleRttUpgradeResponse",
			"(Landroid/telecom/Connection$RttTextStream;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Connection::isRingbackRequested()
	{
		return __thiz.callMethod<jboolean>(
			"isRingbackRequested",
			"()Z"
		);
	}
	void Connection::onAbort()
	{
		__thiz.callMethod<void>(
			"onAbort",
			"()V"
		);
	}
	void Connection::onAnswer()
	{
		__thiz.callMethod<void>(
			"onAnswer",
			"()V"
		);
	}
	void Connection::onAnswer(jint arg0)
	{
		__thiz.callMethod<void>(
			"onAnswer",
			"(I)V",
			arg0
		);
	}
	void Connection::onCallAudioStateChanged(android::telecom::CallAudioState arg0)
	{
		__thiz.callMethod<void>(
			"onCallAudioStateChanged",
			"(Landroid/telecom/CallAudioState;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection::onCallEvent(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onCallEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Connection::onCallEvent(const QString &arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onCallEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void Connection::onDeflect(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"onDeflect",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection::onDisconnect()
	{
		__thiz.callMethod<void>(
			"onDisconnect",
			"()V"
		);
	}
	void Connection::onExtrasChanged(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onExtrasChanged",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection::onHandoverComplete()
	{
		__thiz.callMethod<void>(
			"onHandoverComplete",
			"()V"
		);
	}
	void Connection::onHold()
	{
		__thiz.callMethod<void>(
			"onHold",
			"()V"
		);
	}
	void Connection::onPlayDtmfTone(jchar arg0)
	{
		__thiz.callMethod<void>(
			"onPlayDtmfTone",
			"(C)V",
			arg0
		);
	}
	void Connection::onPostDialContinue(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onPostDialContinue",
			"(Z)V",
			arg0
		);
	}
	void Connection::onPullExternalCall()
	{
		__thiz.callMethod<void>(
			"onPullExternalCall",
			"()V"
		);
	}
	void Connection::onReject()
	{
		__thiz.callMethod<void>(
			"onReject",
			"()V"
		);
	}
	void Connection::onReject(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onReject",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Connection::onReject(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"onReject",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Connection::onSeparate()
	{
		__thiz.callMethod<void>(
			"onSeparate",
			"()V"
		);
	}
	void Connection::onShowIncomingCallUi()
	{
		__thiz.callMethod<void>(
			"onShowIncomingCallUi",
			"()V"
		);
	}
	void Connection::onSilence()
	{
		__thiz.callMethod<void>(
			"onSilence",
			"()V"
		);
	}
	void Connection::onStartRtt(android::telecom::Connection_RttTextStream arg0)
	{
		__thiz.callMethod<void>(
			"onStartRtt",
			"(Landroid/telecom/Connection$RttTextStream;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection::onStateChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onStateChanged",
			"(I)V",
			arg0
		);
	}
	void Connection::onStopDtmfTone()
	{
		__thiz.callMethod<void>(
			"onStopDtmfTone",
			"()V"
		);
	}
	void Connection::onStopRtt()
	{
		__thiz.callMethod<void>(
			"onStopRtt",
			"()V"
		);
	}
	void Connection::onUnhold()
	{
		__thiz.callMethod<void>(
			"onUnhold",
			"()V"
		);
	}
	void Connection::putExtras(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"putExtras",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection::removeExtras(jarray arg0)
	{
		__thiz.callMethod<void>(
			"removeExtras",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void Connection::removeExtras(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeExtras",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection::requestBluetoothAudio(android::bluetooth::BluetoothDevice arg0)
	{
		__thiz.callMethod<void>(
			"requestBluetoothAudio",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection::sendConnectionEvent(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendConnectionEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Connection::sendConnectionEvent(const QString &arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendConnectionEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void Connection::sendRemoteRttRequest()
	{
		__thiz.callMethod<void>(
			"sendRemoteRttRequest",
			"()V"
		);
	}
	void Connection::sendRttInitiationFailure(jint arg0)
	{
		__thiz.callMethod<void>(
			"sendRttInitiationFailure",
			"(I)V",
			arg0
		);
	}
	void Connection::sendRttInitiationSuccess()
	{
		__thiz.callMethod<void>(
			"sendRttInitiationSuccess",
			"()V"
		);
	}
	void Connection::sendRttSessionRemotelyTerminated()
	{
		__thiz.callMethod<void>(
			"sendRttSessionRemotelyTerminated",
			"()V"
		);
	}
	void Connection::setActive()
	{
		__thiz.callMethod<void>(
			"setActive",
			"()V"
		);
	}
	void Connection::setAddress(android::net::Uri arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setAddress",
			"(Landroid/net/Uri;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Connection::setAudioModeIsVoip(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAudioModeIsVoip",
			"(Z)V",
			arg0
		);
	}
	void Connection::setAudioRoute(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAudioRoute",
			"(I)V",
			arg0
		);
	}
	void Connection::setCallerDisplayName(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setCallerDisplayName",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void Connection::setCallerDisplayName(const QString &arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setCallerDisplayName",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Connection::setConferenceableConnections(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setConferenceableConnections",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection::setConferenceables(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setConferenceables",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection::setConnectionCapabilities(jint arg0)
	{
		__thiz.callMethod<void>(
			"setConnectionCapabilities",
			"(I)V",
			arg0
		);
	}
	void Connection::setConnectionProperties(jint arg0)
	{
		__thiz.callMethod<void>(
			"setConnectionProperties",
			"(I)V",
			arg0
		);
	}
	void Connection::setDialing()
	{
		__thiz.callMethod<void>(
			"setDialing",
			"()V"
		);
	}
	void Connection::setDisconnected(android::telecom::DisconnectCause arg0)
	{
		__thiz.callMethod<void>(
			"setDisconnected",
			"(Landroid/telecom/DisconnectCause;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection::setExtras(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection::setInitialized()
	{
		__thiz.callMethod<void>(
			"setInitialized",
			"()V"
		);
	}
	void Connection::setInitializing()
	{
		__thiz.callMethod<void>(
			"setInitializing",
			"()V"
		);
	}
	void Connection::setNextPostDialChar(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setNextPostDialChar",
			"(C)V",
			arg0
		);
	}
	void Connection::setOnHold()
	{
		__thiz.callMethod<void>(
			"setOnHold",
			"()V"
		);
	}
	void Connection::setPostDialWait(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPostDialWait",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Connection::setPostDialWait(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPostDialWait",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Connection::setPulling()
	{
		__thiz.callMethod<void>(
			"setPulling",
			"()V"
		);
	}
	void Connection::setRingbackRequested(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setRingbackRequested",
			"(Z)V",
			arg0
		);
	}
	void Connection::setRinging()
	{
		__thiz.callMethod<void>(
			"setRinging",
			"()V"
		);
	}
	void Connection::setStatusHints(android::telecom::StatusHints arg0)
	{
		__thiz.callMethod<void>(
			"setStatusHints",
			"(Landroid/telecom/StatusHints;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection::setVideoProvider(android::telecom::Connection_VideoProvider arg0)
	{
		__thiz.callMethod<void>(
			"setVideoProvider",
			"(Landroid/telecom/Connection$VideoProvider;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection::setVideoState(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVideoState",
			"(I)V",
			arg0
		);
	}
} // namespace android::telecom

