#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "./CallAudioState.hpp"
#include "./DisconnectCause.hpp"
#include "./RemoteConference.hpp"
#include "./RemoteConnection_Callback.hpp"
#include "./RemoteConnection_VideoProvider.hpp"
#include "./StatusHints.hpp"
#include "../../JString.hpp"
#include "./RemoteConnection.hpp"

namespace android::telecom
{
	// Fields
	
	// QJniObject forward
	RemoteConnection::RemoteConnection(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void RemoteConnection::abort()
	{
		callMethod<void>(
			"abort",
			"()V"
		);
	}
	void RemoteConnection::answer()
	{
		callMethod<void>(
			"answer",
			"()V"
		);
	}
	void RemoteConnection::disconnect()
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	android::net::Uri RemoteConnection::getAddress()
	{
		return callObjectMethod(
			"getAddress",
			"()Landroid/net/Uri;"
		);
	}
	jint RemoteConnection::getAddressPresentation()
	{
		return callMethod<jint>(
			"getAddressPresentation",
			"()I"
		);
	}
	JString RemoteConnection::getCallerDisplayName()
	{
		return callObjectMethod(
			"getCallerDisplayName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint RemoteConnection::getCallerDisplayNamePresentation()
	{
		return callMethod<jint>(
			"getCallerDisplayNamePresentation",
			"()I"
		);
	}
	android::telecom::RemoteConference RemoteConnection::getConference()
	{
		return callObjectMethod(
			"getConference",
			"()Landroid/telecom/RemoteConference;"
		);
	}
	JObject RemoteConnection::getConferenceableConnections()
	{
		return callObjectMethod(
			"getConferenceableConnections",
			"()Ljava/util/List;"
		);
	}
	jint RemoteConnection::getConnectionCapabilities()
	{
		return callMethod<jint>(
			"getConnectionCapabilities",
			"()I"
		);
	}
	jint RemoteConnection::getConnectionProperties()
	{
		return callMethod<jint>(
			"getConnectionProperties",
			"()I"
		);
	}
	android::telecom::DisconnectCause RemoteConnection::getDisconnectCause()
	{
		return callObjectMethod(
			"getDisconnectCause",
			"()Landroid/telecom/DisconnectCause;"
		);
	}
	android::os::Bundle RemoteConnection::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint RemoteConnection::getState()
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	android::telecom::StatusHints RemoteConnection::getStatusHints()
	{
		return callObjectMethod(
			"getStatusHints",
			"()Landroid/telecom/StatusHints;"
		);
	}
	android::telecom::RemoteConnection_VideoProvider RemoteConnection::getVideoProvider()
	{
		return callObjectMethod(
			"getVideoProvider",
			"()Landroid/telecom/RemoteConnection$VideoProvider;"
		);
	}
	jint RemoteConnection::getVideoState()
	{
		return callMethod<jint>(
			"getVideoState",
			"()I"
		);
	}
	void RemoteConnection::hold()
	{
		callMethod<void>(
			"hold",
			"()V"
		);
	}
	jboolean RemoteConnection::isRingbackRequested()
	{
		return callMethod<jboolean>(
			"isRingbackRequested",
			"()Z"
		);
	}
	jboolean RemoteConnection::isVoipAudioMode()
	{
		return callMethod<jboolean>(
			"isVoipAudioMode",
			"()Z"
		);
	}
	void RemoteConnection::playDtmfTone(jchar arg0)
	{
		callMethod<void>(
			"playDtmfTone",
			"(C)V",
			arg0
		);
	}
	void RemoteConnection::postDialContinue(jboolean arg0)
	{
		callMethod<void>(
			"postDialContinue",
			"(Z)V",
			arg0
		);
	}
	void RemoteConnection::pullExternalCall()
	{
		callMethod<void>(
			"pullExternalCall",
			"()V"
		);
	}
	void RemoteConnection::registerCallback(android::telecom::RemoteConnection_Callback arg0)
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConnection$Callback;)V",
			arg0.object()
		);
	}
	void RemoteConnection::registerCallback(android::telecom::RemoteConnection_Callback arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConnection$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void RemoteConnection::reject()
	{
		callMethod<void>(
			"reject",
			"()V"
		);
	}
	void RemoteConnection::setCallAudioState(android::telecom::CallAudioState arg0)
	{
		callMethod<void>(
			"setCallAudioState",
			"(Landroid/telecom/CallAudioState;)V",
			arg0.object()
		);
	}
	void RemoteConnection::stopDtmfTone()
	{
		callMethod<void>(
			"stopDtmfTone",
			"()V"
		);
	}
	void RemoteConnection::unhold()
	{
		callMethod<void>(
			"unhold",
			"()V"
		);
	}
	void RemoteConnection::unregisterCallback(android::telecom::RemoteConnection_Callback arg0)
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/RemoteConnection$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::telecom

