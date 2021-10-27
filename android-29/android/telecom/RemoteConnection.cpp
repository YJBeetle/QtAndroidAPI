#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "./CallAudioState.hpp"
#include "./DisconnectCause.hpp"
#include "./RemoteConference.hpp"
#include "./RemoteConnection_Callback.hpp"
#include "./RemoteConnection_VideoProvider.hpp"
#include "./StatusHints.hpp"
#include "./RemoteConnection.hpp"

namespace android::telecom
{
	// Fields
	
	RemoteConnection::RemoteConnection(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void RemoteConnection::abort()
	{
		__thiz.callMethod<void>(
			"abort",
			"()V"
		);
	}
	void RemoteConnection::answer()
	{
		__thiz.callMethod<void>(
			"answer",
			"()V"
		);
	}
	void RemoteConnection::disconnect()
	{
		__thiz.callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	QAndroidJniObject RemoteConnection::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()Landroid/net/Uri;"
		);
	}
	jint RemoteConnection::getAddressPresentation()
	{
		return __thiz.callMethod<jint>(
			"getAddressPresentation",
			"()I"
		);
	}
	jstring RemoteConnection::getCallerDisplayName()
	{
		return __thiz.callObjectMethod(
			"getCallerDisplayName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint RemoteConnection::getCallerDisplayNamePresentation()
	{
		return __thiz.callMethod<jint>(
			"getCallerDisplayNamePresentation",
			"()I"
		);
	}
	QAndroidJniObject RemoteConnection::getConference()
	{
		return __thiz.callObjectMethod(
			"getConference",
			"()Landroid/telecom/RemoteConference;"
		);
	}
	QAndroidJniObject RemoteConnection::getConferenceableConnections()
	{
		return __thiz.callObjectMethod(
			"getConferenceableConnections",
			"()Ljava/util/List;"
		);
	}
	jint RemoteConnection::getConnectionCapabilities()
	{
		return __thiz.callMethod<jint>(
			"getConnectionCapabilities",
			"()I"
		);
	}
	jint RemoteConnection::getConnectionProperties()
	{
		return __thiz.callMethod<jint>(
			"getConnectionProperties",
			"()I"
		);
	}
	QAndroidJniObject RemoteConnection::getDisconnectCause()
	{
		return __thiz.callObjectMethod(
			"getDisconnectCause",
			"()Landroid/telecom/DisconnectCause;"
		);
	}
	QAndroidJniObject RemoteConnection::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint RemoteConnection::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I"
		);
	}
	QAndroidJniObject RemoteConnection::getStatusHints()
	{
		return __thiz.callObjectMethod(
			"getStatusHints",
			"()Landroid/telecom/StatusHints;"
		);
	}
	QAndroidJniObject RemoteConnection::getVideoProvider()
	{
		return __thiz.callObjectMethod(
			"getVideoProvider",
			"()Landroid/telecom/RemoteConnection$VideoProvider;"
		);
	}
	jint RemoteConnection::getVideoState()
	{
		return __thiz.callMethod<jint>(
			"getVideoState",
			"()I"
		);
	}
	void RemoteConnection::hold()
	{
		__thiz.callMethod<void>(
			"hold",
			"()V"
		);
	}
	jboolean RemoteConnection::isRingbackRequested()
	{
		return __thiz.callMethod<jboolean>(
			"isRingbackRequested",
			"()Z"
		);
	}
	jboolean RemoteConnection::isVoipAudioMode()
	{
		return __thiz.callMethod<jboolean>(
			"isVoipAudioMode",
			"()Z"
		);
	}
	void RemoteConnection::playDtmfTone(jchar arg0)
	{
		__thiz.callMethod<void>(
			"playDtmfTone",
			"(C)V",
			arg0
		);
	}
	void RemoteConnection::postDialContinue(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"postDialContinue",
			"(Z)V",
			arg0
		);
	}
	void RemoteConnection::pullExternalCall()
	{
		__thiz.callMethod<void>(
			"pullExternalCall",
			"()V"
		);
	}
	void RemoteConnection::registerCallback(android::telecom::RemoteConnection_Callback arg0)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConnection$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteConnection::registerCallback(android::telecom::RemoteConnection_Callback arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConnection$Callback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConnection::reject()
	{
		__thiz.callMethod<void>(
			"reject",
			"()V"
		);
	}
	void RemoteConnection::setCallAudioState(android::telecom::CallAudioState arg0)
	{
		__thiz.callMethod<void>(
			"setCallAudioState",
			"(Landroid/telecom/CallAudioState;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteConnection::stopDtmfTone()
	{
		__thiz.callMethod<void>(
			"stopDtmfTone",
			"()V"
		);
	}
	void RemoteConnection::unhold()
	{
		__thiz.callMethod<void>(
			"unhold",
			"()V"
		);
	}
	void RemoteConnection::unregisterCallback(android::telecom::RemoteConnection_Callback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/RemoteConnection$Callback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::telecom

