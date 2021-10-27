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
	
	Conference::Conference(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Conference::Conference(android::telecom::PhoneAccountHandle &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.Conference",
			"(Landroid/telecom/PhoneAccountHandle;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean Conference::addConnection(android::telecom::Connection arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addConnection",
			"(Landroid/telecom/Connection;)Z",
			arg0.__jniObject().object()
		);
	}
	void Conference::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V"
		);
	}
	QAndroidJniObject Conference::getCallAudioState()
	{
		return __thiz.callObjectMethod(
			"getCallAudioState",
			"()Landroid/telecom/CallAudioState;"
		);
	}
	QAndroidJniObject Conference::getConferenceableConnections()
	{
		return __thiz.callObjectMethod(
			"getConferenceableConnections",
			"()Ljava/util/List;"
		);
	}
	jint Conference::getConnectionCapabilities()
	{
		return __thiz.callMethod<jint>(
			"getConnectionCapabilities",
			"()I"
		);
	}
	jint Conference::getConnectionProperties()
	{
		return __thiz.callMethod<jint>(
			"getConnectionProperties",
			"()I"
		);
	}
	jlong Conference::getConnectionTime()
	{
		return __thiz.callMethod<jlong>(
			"getConnectionTime",
			"()J"
		);
	}
	QAndroidJniObject Conference::getConnections()
	{
		return __thiz.callObjectMethod(
			"getConnections",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Conference::getDisconnectCause()
	{
		return __thiz.callObjectMethod(
			"getDisconnectCause",
			"()Landroid/telecom/DisconnectCause;"
		);
	}
	QAndroidJniObject Conference::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject Conference::getPhoneAccountHandle()
	{
		return __thiz.callObjectMethod(
			"getPhoneAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	jint Conference::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I"
		);
	}
	QAndroidJniObject Conference::getStatusHints()
	{
		return __thiz.callObjectMethod(
			"getStatusHints",
			"()Landroid/telecom/StatusHints;"
		);
	}
	QAndroidJniObject Conference::getVideoProvider()
	{
		return __thiz.callObjectMethod(
			"getVideoProvider",
			"()Landroid/telecom/Connection$VideoProvider;"
		);
	}
	jint Conference::getVideoState()
	{
		return __thiz.callMethod<jint>(
			"getVideoState",
			"()I"
		);
	}
	void Conference::onCallAudioStateChanged(android::telecom::CallAudioState arg0)
	{
		__thiz.callMethod<void>(
			"onCallAudioStateChanged",
			"(Landroid/telecom/CallAudioState;)V",
			arg0.__jniObject().object()
		);
	}
	void Conference::onConnectionAdded(android::telecom::Connection arg0)
	{
		__thiz.callMethod<void>(
			"onConnectionAdded",
			"(Landroid/telecom/Connection;)V",
			arg0.__jniObject().object()
		);
	}
	void Conference::onDisconnect()
	{
		__thiz.callMethod<void>(
			"onDisconnect",
			"()V"
		);
	}
	void Conference::onExtrasChanged(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onExtrasChanged",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Conference::onHold()
	{
		__thiz.callMethod<void>(
			"onHold",
			"()V"
		);
	}
	void Conference::onMerge()
	{
		__thiz.callMethod<void>(
			"onMerge",
			"()V"
		);
	}
	void Conference::onMerge(android::telecom::Connection arg0)
	{
		__thiz.callMethod<void>(
			"onMerge",
			"(Landroid/telecom/Connection;)V",
			arg0.__jniObject().object()
		);
	}
	void Conference::onPlayDtmfTone(jchar arg0)
	{
		__thiz.callMethod<void>(
			"onPlayDtmfTone",
			"(C)V",
			arg0
		);
	}
	void Conference::onSeparate(android::telecom::Connection arg0)
	{
		__thiz.callMethod<void>(
			"onSeparate",
			"(Landroid/telecom/Connection;)V",
			arg0.__jniObject().object()
		);
	}
	void Conference::onStopDtmfTone()
	{
		__thiz.callMethod<void>(
			"onStopDtmfTone",
			"()V"
		);
	}
	void Conference::onSwap()
	{
		__thiz.callMethod<void>(
			"onSwap",
			"()V"
		);
	}
	void Conference::onUnhold()
	{
		__thiz.callMethod<void>(
			"onUnhold",
			"()V"
		);
	}
	void Conference::putExtras(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"putExtras",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Conference::removeConnection(android::telecom::Connection arg0)
	{
		__thiz.callMethod<void>(
			"removeConnection",
			"(Landroid/telecom/Connection;)V",
			arg0.__jniObject().object()
		);
	}
	void Conference::removeExtras(jarray arg0)
	{
		__thiz.callMethod<void>(
			"removeExtras",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void Conference::removeExtras(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeExtras",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void Conference::setActive()
	{
		__thiz.callMethod<void>(
			"setActive",
			"()V"
		);
	}
	void Conference::setConferenceableConnections(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setConferenceableConnections",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void Conference::setConnectionCapabilities(jint arg0)
	{
		__thiz.callMethod<void>(
			"setConnectionCapabilities",
			"(I)V",
			arg0
		);
	}
	void Conference::setConnectionProperties(jint arg0)
	{
		__thiz.callMethod<void>(
			"setConnectionProperties",
			"(I)V",
			arg0
		);
	}
	void Conference::setConnectionStartElapsedRealTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setConnectionStartElapsedRealTime",
			"(J)V",
			arg0
		);
	}
	void Conference::setConnectionTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setConnectionTime",
			"(J)V",
			arg0
		);
	}
	void Conference::setDialing()
	{
		__thiz.callMethod<void>(
			"setDialing",
			"()V"
		);
	}
	void Conference::setDisconnected(android::telecom::DisconnectCause arg0)
	{
		__thiz.callMethod<void>(
			"setDisconnected",
			"(Landroid/telecom/DisconnectCause;)V",
			arg0.__jniObject().object()
		);
	}
	void Conference::setExtras(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Conference::setOnHold()
	{
		__thiz.callMethod<void>(
			"setOnHold",
			"()V"
		);
	}
	void Conference::setStatusHints(android::telecom::StatusHints arg0)
	{
		__thiz.callMethod<void>(
			"setStatusHints",
			"(Landroid/telecom/StatusHints;)V",
			arg0.__jniObject().object()
		);
	}
	void Conference::setVideoProvider(android::telecom::Connection arg0, android::telecom::Connection_VideoProvider arg1)
	{
		__thiz.callMethod<void>(
			"setVideoProvider",
			"(Landroid/telecom/Connection;Landroid/telecom/Connection$VideoProvider;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Conference::setVideoState(android::telecom::Connection arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setVideoState",
			"(Landroid/telecom/Connection;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring Conference::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::telecom

