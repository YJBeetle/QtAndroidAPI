#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "./CallAudioState.hpp"
#include "./DisconnectCause.hpp"
#include "./RemoteConference_Callback.hpp"
#include "./RemoteConnection.hpp"
#include "./RemoteConference.hpp"

namespace android::telecom
{
	// Fields
	
	// QJniObject forward
	RemoteConference::RemoteConference(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void RemoteConference::disconnect() const
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	JObject RemoteConference::getConferenceableConnections() const
	{
		return callObjectMethod(
			"getConferenceableConnections",
			"()Ljava/util/List;"
		);
	}
	jint RemoteConference::getConnectionCapabilities() const
	{
		return callMethod<jint>(
			"getConnectionCapabilities",
			"()I"
		);
	}
	jint RemoteConference::getConnectionProperties() const
	{
		return callMethod<jint>(
			"getConnectionProperties",
			"()I"
		);
	}
	JObject RemoteConference::getConnections() const
	{
		return callObjectMethod(
			"getConnections",
			"()Ljava/util/List;"
		);
	}
	android::telecom::DisconnectCause RemoteConference::getDisconnectCause() const
	{
		return callObjectMethod(
			"getDisconnectCause",
			"()Landroid/telecom/DisconnectCause;"
		);
	}
	android::os::Bundle RemoteConference::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint RemoteConference::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	void RemoteConference::hold() const
	{
		callMethod<void>(
			"hold",
			"()V"
		);
	}
	void RemoteConference::merge() const
	{
		callMethod<void>(
			"merge",
			"()V"
		);
	}
	void RemoteConference::playDtmfTone(jchar arg0) const
	{
		callMethod<void>(
			"playDtmfTone",
			"(C)V",
			arg0
		);
	}
	void RemoteConference::registerCallback(android::telecom::RemoteConference_Callback arg0) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConference$Callback;)V",
			arg0.object()
		);
	}
	void RemoteConference::registerCallback(android::telecom::RemoteConference_Callback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConference$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void RemoteConference::separate(android::telecom::RemoteConnection arg0) const
	{
		callMethod<void>(
			"separate",
			"(Landroid/telecom/RemoteConnection;)V",
			arg0.object()
		);
	}
	void RemoteConference::setCallAudioState(android::telecom::CallAudioState arg0) const
	{
		callMethod<void>(
			"setCallAudioState",
			"(Landroid/telecom/CallAudioState;)V",
			arg0.object()
		);
	}
	void RemoteConference::stopDtmfTone() const
	{
		callMethod<void>(
			"stopDtmfTone",
			"()V"
		);
	}
	void RemoteConference::swap() const
	{
		callMethod<void>(
			"swap",
			"()V"
		);
	}
	void RemoteConference::unhold() const
	{
		callMethod<void>(
			"unhold",
			"()V"
		);
	}
	void RemoteConference::unregisterCallback(android::telecom::RemoteConference_Callback arg0) const
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/RemoteConference$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::telecom

