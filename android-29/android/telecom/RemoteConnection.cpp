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
	
	// Constructors
	
	// Methods
	void RemoteConnection::abort() const
	{
		callMethod<void>(
			"abort",
			"()V"
		);
	}
	void RemoteConnection::answer() const
	{
		callMethod<void>(
			"answer",
			"()V"
		);
	}
	void RemoteConnection::disconnect() const
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	android::net::Uri RemoteConnection::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Landroid/net/Uri;"
		);
	}
	jint RemoteConnection::getAddressPresentation() const
	{
		return callMethod<jint>(
			"getAddressPresentation",
			"()I"
		);
	}
	JString RemoteConnection::getCallerDisplayName() const
	{
		return callObjectMethod(
			"getCallerDisplayName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint RemoteConnection::getCallerDisplayNamePresentation() const
	{
		return callMethod<jint>(
			"getCallerDisplayNamePresentation",
			"()I"
		);
	}
	android::telecom::RemoteConference RemoteConnection::getConference() const
	{
		return callObjectMethod(
			"getConference",
			"()Landroid/telecom/RemoteConference;"
		);
	}
	JObject RemoteConnection::getConferenceableConnections() const
	{
		return callObjectMethod(
			"getConferenceableConnections",
			"()Ljava/util/List;"
		);
	}
	jint RemoteConnection::getConnectionCapabilities() const
	{
		return callMethod<jint>(
			"getConnectionCapabilities",
			"()I"
		);
	}
	jint RemoteConnection::getConnectionProperties() const
	{
		return callMethod<jint>(
			"getConnectionProperties",
			"()I"
		);
	}
	android::telecom::DisconnectCause RemoteConnection::getDisconnectCause() const
	{
		return callObjectMethod(
			"getDisconnectCause",
			"()Landroid/telecom/DisconnectCause;"
		);
	}
	android::os::Bundle RemoteConnection::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint RemoteConnection::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	android::telecom::StatusHints RemoteConnection::getStatusHints() const
	{
		return callObjectMethod(
			"getStatusHints",
			"()Landroid/telecom/StatusHints;"
		);
	}
	android::telecom::RemoteConnection_VideoProvider RemoteConnection::getVideoProvider() const
	{
		return callObjectMethod(
			"getVideoProvider",
			"()Landroid/telecom/RemoteConnection$VideoProvider;"
		);
	}
	jint RemoteConnection::getVideoState() const
	{
		return callMethod<jint>(
			"getVideoState",
			"()I"
		);
	}
	void RemoteConnection::hold() const
	{
		callMethod<void>(
			"hold",
			"()V"
		);
	}
	jboolean RemoteConnection::isRingbackRequested() const
	{
		return callMethod<jboolean>(
			"isRingbackRequested",
			"()Z"
		);
	}
	jboolean RemoteConnection::isVoipAudioMode() const
	{
		return callMethod<jboolean>(
			"isVoipAudioMode",
			"()Z"
		);
	}
	void RemoteConnection::playDtmfTone(jchar arg0) const
	{
		callMethod<void>(
			"playDtmfTone",
			"(C)V",
			arg0
		);
	}
	void RemoteConnection::postDialContinue(jboolean arg0) const
	{
		callMethod<void>(
			"postDialContinue",
			"(Z)V",
			arg0
		);
	}
	void RemoteConnection::pullExternalCall() const
	{
		callMethod<void>(
			"pullExternalCall",
			"()V"
		);
	}
	void RemoteConnection::registerCallback(android::telecom::RemoteConnection_Callback arg0) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConnection$Callback;)V",
			arg0.object()
		);
	}
	void RemoteConnection::registerCallback(android::telecom::RemoteConnection_Callback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConnection$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void RemoteConnection::reject() const
	{
		callMethod<void>(
			"reject",
			"()V"
		);
	}
	void RemoteConnection::setCallAudioState(android::telecom::CallAudioState arg0) const
	{
		callMethod<void>(
			"setCallAudioState",
			"(Landroid/telecom/CallAudioState;)V",
			arg0.object()
		);
	}
	void RemoteConnection::stopDtmfTone() const
	{
		callMethod<void>(
			"stopDtmfTone",
			"()V"
		);
	}
	void RemoteConnection::unhold() const
	{
		callMethod<void>(
			"unhold",
			"()V"
		);
	}
	void RemoteConnection::unregisterCallback(android::telecom::RemoteConnection_Callback arg0) const
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/RemoteConnection$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::telecom

