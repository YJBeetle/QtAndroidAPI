#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "./DisconnectCause.hpp"
#include "./RemoteConference.hpp"
#include "./RemoteConnection.hpp"
#include "./RemoteConnection_VideoProvider.hpp"
#include "./StatusHints.hpp"
#include "./RemoteConnection_Callback.hpp"

namespace android::telecom
{
	// Fields
	
	RemoteConnection_Callback::RemoteConnection_Callback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RemoteConnection_Callback::RemoteConnection_Callback()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.RemoteConnection$Callback",
			"()V"
		);
	}
	
	// Methods
	void RemoteConnection_Callback::onAddressChanged(android::telecom::RemoteConnection arg0, android::net::Uri arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onAddressChanged",
			"(Landroid/telecom/RemoteConnection;Landroid/net/Uri;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void RemoteConnection_Callback::onCallerDisplayNameChanged(android::telecom::RemoteConnection arg0, jstring arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onCallerDisplayNameChanged",
			"(Landroid/telecom/RemoteConnection;Ljava/lang/String;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void RemoteConnection_Callback::onConferenceChanged(android::telecom::RemoteConnection arg0, android::telecom::RemoteConference arg1)
	{
		__thiz.callMethod<void>(
			"onConferenceChanged",
			"(Landroid/telecom/RemoteConnection;Landroid/telecom/RemoteConference;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConnection_Callback::onConferenceableConnectionsChanged(android::telecom::RemoteConnection arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onConferenceableConnectionsChanged",
			"(Landroid/telecom/RemoteConnection;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConnection_Callback::onConnectionCapabilitiesChanged(android::telecom::RemoteConnection arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onConnectionCapabilitiesChanged",
			"(Landroid/telecom/RemoteConnection;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RemoteConnection_Callback::onConnectionEvent(android::telecom::RemoteConnection arg0, jstring arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onConnectionEvent",
			"(Landroid/telecom/RemoteConnection;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void RemoteConnection_Callback::onConnectionPropertiesChanged(android::telecom::RemoteConnection arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onConnectionPropertiesChanged",
			"(Landroid/telecom/RemoteConnection;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RemoteConnection_Callback::onDestroyed(android::telecom::RemoteConnection arg0)
	{
		__thiz.callMethod<void>(
			"onDestroyed",
			"(Landroid/telecom/RemoteConnection;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteConnection_Callback::onDisconnected(android::telecom::RemoteConnection arg0, android::telecom::DisconnectCause arg1)
	{
		__thiz.callMethod<void>(
			"onDisconnected",
			"(Landroid/telecom/RemoteConnection;Landroid/telecom/DisconnectCause;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConnection_Callback::onExtrasChanged(android::telecom::RemoteConnection arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onExtrasChanged",
			"(Landroid/telecom/RemoteConnection;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConnection_Callback::onPostDialChar(android::telecom::RemoteConnection arg0, jchar arg1)
	{
		__thiz.callMethod<void>(
			"onPostDialChar",
			"(Landroid/telecom/RemoteConnection;C)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RemoteConnection_Callback::onPostDialWait(android::telecom::RemoteConnection arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onPostDialWait",
			"(Landroid/telecom/RemoteConnection;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RemoteConnection_Callback::onRingbackRequested(android::telecom::RemoteConnection arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onRingbackRequested",
			"(Landroid/telecom/RemoteConnection;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RemoteConnection_Callback::onStateChanged(android::telecom::RemoteConnection arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onStateChanged",
			"(Landroid/telecom/RemoteConnection;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RemoteConnection_Callback::onStatusHintsChanged(android::telecom::RemoteConnection arg0, android::telecom::StatusHints arg1)
	{
		__thiz.callMethod<void>(
			"onStatusHintsChanged",
			"(Landroid/telecom/RemoteConnection;Landroid/telecom/StatusHints;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConnection_Callback::onVideoProviderChanged(android::telecom::RemoteConnection arg0, android::telecom::RemoteConnection_VideoProvider arg1)
	{
		__thiz.callMethod<void>(
			"onVideoProviderChanged",
			"(Landroid/telecom/RemoteConnection;Landroid/telecom/RemoteConnection$VideoProvider;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConnection_Callback::onVideoStateChanged(android::telecom::RemoteConnection arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onVideoStateChanged",
			"(Landroid/telecom/RemoteConnection;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RemoteConnection_Callback::onVoipAudioChanged(android::telecom::RemoteConnection arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onVoipAudioChanged",
			"(Landroid/telecom/RemoteConnection;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telecom

