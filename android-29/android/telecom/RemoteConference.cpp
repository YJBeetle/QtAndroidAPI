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
	
	RemoteConference::RemoteConference(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void RemoteConference::disconnect()
	{
		__thiz.callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	QAndroidJniObject RemoteConference::getConferenceableConnections()
	{
		return __thiz.callObjectMethod(
			"getConferenceableConnections",
			"()Ljava/util/List;"
		);
	}
	jint RemoteConference::getConnectionCapabilities()
	{
		return __thiz.callMethod<jint>(
			"getConnectionCapabilities",
			"()I"
		);
	}
	jint RemoteConference::getConnectionProperties()
	{
		return __thiz.callMethod<jint>(
			"getConnectionProperties",
			"()I"
		);
	}
	QAndroidJniObject RemoteConference::getConnections()
	{
		return __thiz.callObjectMethod(
			"getConnections",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject RemoteConference::getDisconnectCause()
	{
		return __thiz.callObjectMethod(
			"getDisconnectCause",
			"()Landroid/telecom/DisconnectCause;"
		);
	}
	QAndroidJniObject RemoteConference::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint RemoteConference::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I"
		);
	}
	void RemoteConference::hold()
	{
		__thiz.callMethod<void>(
			"hold",
			"()V"
		);
	}
	void RemoteConference::merge()
	{
		__thiz.callMethod<void>(
			"merge",
			"()V"
		);
	}
	void RemoteConference::playDtmfTone(jchar arg0)
	{
		__thiz.callMethod<void>(
			"playDtmfTone",
			"(C)V",
			arg0
		);
	}
	void RemoteConference::registerCallback(android::telecom::RemoteConference_Callback arg0)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConference$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteConference::registerCallback(android::telecom::RemoteConference_Callback arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConference$Callback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConference::separate(android::telecom::RemoteConnection arg0)
	{
		__thiz.callMethod<void>(
			"separate",
			"(Landroid/telecom/RemoteConnection;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteConference::setCallAudioState(android::telecom::CallAudioState arg0)
	{
		__thiz.callMethod<void>(
			"setCallAudioState",
			"(Landroid/telecom/CallAudioState;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteConference::stopDtmfTone()
	{
		__thiz.callMethod<void>(
			"stopDtmfTone",
			"()V"
		);
	}
	void RemoteConference::swap()
	{
		__thiz.callMethod<void>(
			"swap",
			"()V"
		);
	}
	void RemoteConference::unhold()
	{
		__thiz.callMethod<void>(
			"unhold",
			"()V"
		);
	}
	void RemoteConference::unregisterCallback(android::telecom::RemoteConference_Callback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/RemoteConference$Callback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::telecom

