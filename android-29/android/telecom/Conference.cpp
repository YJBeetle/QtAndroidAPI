#include "../os/Bundle.hpp"
#include "./CallAudioState.hpp"
#include "./Connection.hpp"
#include "./Connection_VideoProvider.hpp"
#include "./DisconnectCause.hpp"
#include "./PhoneAccountHandle.hpp"
#include "./StatusHints.hpp"
#include "./Conference.hpp"

namespace android::telecom
{
	// Fields
	jlong Conference::CONNECT_TIME_NOT_SPECIFIED()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.telecom.Conference",
			"CONNECT_TIME_NOT_SPECIFIED"
		);
	}
	
	// QAndroidJniObject forward
	Conference::Conference(QAndroidJniObject obj) : android::telecom::Conferenceable(obj) {}
	
	// Constructors
	Conference::Conference(android::telecom::PhoneAccountHandle arg0)
		: android::telecom::Conferenceable(
			"android.telecom.Conference",
			"(Landroid/telecom/PhoneAccountHandle;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean Conference::addConnection(android::telecom::Connection arg0)
	{
		return callMethod<jboolean>(
			"addConnection",
			"(Landroid/telecom/Connection;)Z",
			arg0.object()
		);
	}
	void Conference::destroy()
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	android::telecom::CallAudioState Conference::getCallAudioState()
	{
		return callObjectMethod(
			"getCallAudioState",
			"()Landroid/telecom/CallAudioState;"
		);
	}
	__JniBaseClass Conference::getConferenceableConnections()
	{
		return callObjectMethod(
			"getConferenceableConnections",
			"()Ljava/util/List;"
		);
	}
	jint Conference::getConnectionCapabilities()
	{
		return callMethod<jint>(
			"getConnectionCapabilities",
			"()I"
		);
	}
	jint Conference::getConnectionProperties()
	{
		return callMethod<jint>(
			"getConnectionProperties",
			"()I"
		);
	}
	jlong Conference::getConnectionTime()
	{
		return callMethod<jlong>(
			"getConnectionTime",
			"()J"
		);
	}
	__JniBaseClass Conference::getConnections()
	{
		return callObjectMethod(
			"getConnections",
			"()Ljava/util/List;"
		);
	}
	android::telecom::DisconnectCause Conference::getDisconnectCause()
	{
		return callObjectMethod(
			"getDisconnectCause",
			"()Landroid/telecom/DisconnectCause;"
		);
	}
	android::os::Bundle Conference::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	android::telecom::PhoneAccountHandle Conference::getPhoneAccountHandle()
	{
		return callObjectMethod(
			"getPhoneAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	jint Conference::getState()
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	android::telecom::StatusHints Conference::getStatusHints()
	{
		return callObjectMethod(
			"getStatusHints",
			"()Landroid/telecom/StatusHints;"
		);
	}
	android::telecom::Connection_VideoProvider Conference::getVideoProvider()
	{
		return callObjectMethod(
			"getVideoProvider",
			"()Landroid/telecom/Connection$VideoProvider;"
		);
	}
	jint Conference::getVideoState()
	{
		return callMethod<jint>(
			"getVideoState",
			"()I"
		);
	}
	void Conference::onCallAudioStateChanged(android::telecom::CallAudioState arg0)
	{
		callMethod<void>(
			"onCallAudioStateChanged",
			"(Landroid/telecom/CallAudioState;)V",
			arg0.object()
		);
	}
	void Conference::onConnectionAdded(android::telecom::Connection arg0)
	{
		callMethod<void>(
			"onConnectionAdded",
			"(Landroid/telecom/Connection;)V",
			arg0.object()
		);
	}
	void Conference::onDisconnect()
	{
		callMethod<void>(
			"onDisconnect",
			"()V"
		);
	}
	void Conference::onExtrasChanged(android::os::Bundle arg0)
	{
		callMethod<void>(
			"onExtrasChanged",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Conference::onHold()
	{
		callMethod<void>(
			"onHold",
			"()V"
		);
	}
	void Conference::onMerge()
	{
		callMethod<void>(
			"onMerge",
			"()V"
		);
	}
	void Conference::onMerge(android::telecom::Connection arg0)
	{
		callMethod<void>(
			"onMerge",
			"(Landroid/telecom/Connection;)V",
			arg0.object()
		);
	}
	void Conference::onPlayDtmfTone(jchar arg0)
	{
		callMethod<void>(
			"onPlayDtmfTone",
			"(C)V",
			arg0
		);
	}
	void Conference::onSeparate(android::telecom::Connection arg0)
	{
		callMethod<void>(
			"onSeparate",
			"(Landroid/telecom/Connection;)V",
			arg0.object()
		);
	}
	void Conference::onStopDtmfTone()
	{
		callMethod<void>(
			"onStopDtmfTone",
			"()V"
		);
	}
	void Conference::onSwap()
	{
		callMethod<void>(
			"onSwap",
			"()V"
		);
	}
	void Conference::onUnhold()
	{
		callMethod<void>(
			"onUnhold",
			"()V"
		);
	}
	void Conference::putExtras(android::os::Bundle arg0)
	{
		callMethod<void>(
			"putExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Conference::removeConnection(android::telecom::Connection arg0)
	{
		callMethod<void>(
			"removeConnection",
			"(Landroid/telecom/Connection;)V",
			arg0.object()
		);
	}
	void Conference::removeExtras(jarray arg0)
	{
		callMethod<void>(
			"removeExtras",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void Conference::removeExtras(__JniBaseClass arg0)
	{
		callMethod<void>(
			"removeExtras",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Conference::setActive()
	{
		callMethod<void>(
			"setActive",
			"()V"
		);
	}
	void Conference::setConferenceableConnections(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setConferenceableConnections",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Conference::setConnectionCapabilities(jint arg0)
	{
		callMethod<void>(
			"setConnectionCapabilities",
			"(I)V",
			arg0
		);
	}
	void Conference::setConnectionProperties(jint arg0)
	{
		callMethod<void>(
			"setConnectionProperties",
			"(I)V",
			arg0
		);
	}
	void Conference::setConnectionStartElapsedRealTime(jlong arg0)
	{
		callMethod<void>(
			"setConnectionStartElapsedRealTime",
			"(J)V",
			arg0
		);
	}
	void Conference::setConnectionTime(jlong arg0)
	{
		callMethod<void>(
			"setConnectionTime",
			"(J)V",
			arg0
		);
	}
	void Conference::setDialing()
	{
		callMethod<void>(
			"setDialing",
			"()V"
		);
	}
	void Conference::setDisconnected(android::telecom::DisconnectCause arg0)
	{
		callMethod<void>(
			"setDisconnected",
			"(Landroid/telecom/DisconnectCause;)V",
			arg0.object()
		);
	}
	void Conference::setExtras(android::os::Bundle arg0)
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Conference::setOnHold()
	{
		callMethod<void>(
			"setOnHold",
			"()V"
		);
	}
	void Conference::setStatusHints(android::telecom::StatusHints arg0)
	{
		callMethod<void>(
			"setStatusHints",
			"(Landroid/telecom/StatusHints;)V",
			arg0.object()
		);
	}
	void Conference::setVideoProvider(android::telecom::Connection arg0, android::telecom::Connection_VideoProvider arg1)
	{
		callMethod<void>(
			"setVideoProvider",
			"(Landroid/telecom/Connection;Landroid/telecom/Connection$VideoProvider;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Conference::setVideoState(android::telecom::Connection arg0, jint arg1)
	{
		callMethod<void>(
			"setVideoState",
			"(Landroid/telecom/Connection;I)V",
			arg0.object(),
			arg1
		);
	}
	jstring Conference::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::telecom

