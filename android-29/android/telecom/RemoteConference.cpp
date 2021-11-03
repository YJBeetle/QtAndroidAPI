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
	void RemoteConference::disconnect()
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	JObject RemoteConference::getConferenceableConnections()
	{
		return callObjectMethod(
			"getConferenceableConnections",
			"()Ljava/util/List;"
		);
	}
	jint RemoteConference::getConnectionCapabilities()
	{
		return callMethod<jint>(
			"getConnectionCapabilities",
			"()I"
		);
	}
	jint RemoteConference::getConnectionProperties()
	{
		return callMethod<jint>(
			"getConnectionProperties",
			"()I"
		);
	}
	JObject RemoteConference::getConnections()
	{
		return callObjectMethod(
			"getConnections",
			"()Ljava/util/List;"
		);
	}
	android::telecom::DisconnectCause RemoteConference::getDisconnectCause()
	{
		return callObjectMethod(
			"getDisconnectCause",
			"()Landroid/telecom/DisconnectCause;"
		);
	}
	android::os::Bundle RemoteConference::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint RemoteConference::getState()
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	void RemoteConference::hold()
	{
		callMethod<void>(
			"hold",
			"()V"
		);
	}
	void RemoteConference::merge()
	{
		callMethod<void>(
			"merge",
			"()V"
		);
	}
	void RemoteConference::playDtmfTone(jchar arg0)
	{
		callMethod<void>(
			"playDtmfTone",
			"(C)V",
			arg0
		);
	}
	void RemoteConference::registerCallback(android::telecom::RemoteConference_Callback arg0)
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConference$Callback;)V",
			arg0.object()
		);
	}
	void RemoteConference::registerCallback(android::telecom::RemoteConference_Callback arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConference$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void RemoteConference::separate(android::telecom::RemoteConnection arg0)
	{
		callMethod<void>(
			"separate",
			"(Landroid/telecom/RemoteConnection;)V",
			arg0.object()
		);
	}
	void RemoteConference::setCallAudioState(android::telecom::CallAudioState arg0)
	{
		callMethod<void>(
			"setCallAudioState",
			"(Landroid/telecom/CallAudioState;)V",
			arg0.object()
		);
	}
	void RemoteConference::stopDtmfTone()
	{
		callMethod<void>(
			"stopDtmfTone",
			"()V"
		);
	}
	void RemoteConference::swap()
	{
		callMethod<void>(
			"swap",
			"()V"
		);
	}
	void RemoteConference::unhold()
	{
		callMethod<void>(
			"unhold",
			"()V"
		);
	}
	void RemoteConference::unregisterCallback(android::telecom::RemoteConference_Callback arg0)
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/RemoteConference$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::telecom

