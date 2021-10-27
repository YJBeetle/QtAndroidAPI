#include "../os/Bundle.hpp"
#include "./DisconnectCause.hpp"
#include "./RemoteConference.hpp"
#include "./RemoteConnection.hpp"
#include "./RemoteConference_Callback.hpp"

namespace android::telecom
{
	// Fields
	
	RemoteConference_Callback::RemoteConference_Callback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RemoteConference_Callback::RemoteConference_Callback()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.RemoteConference$Callback",
			"()V"
		);
	}
	
	// Methods
	void RemoteConference_Callback::onConferenceableConnectionsChanged(android::telecom::RemoteConference arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onConferenceableConnectionsChanged",
			"(Landroid/telecom/RemoteConference;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConference_Callback::onConnectionAdded(android::telecom::RemoteConference arg0, android::telecom::RemoteConnection arg1)
	{
		__thiz.callMethod<void>(
			"onConnectionAdded",
			"(Landroid/telecom/RemoteConference;Landroid/telecom/RemoteConnection;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConference_Callback::onConnectionCapabilitiesChanged(android::telecom::RemoteConference arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onConnectionCapabilitiesChanged",
			"(Landroid/telecom/RemoteConference;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RemoteConference_Callback::onConnectionPropertiesChanged(android::telecom::RemoteConference arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onConnectionPropertiesChanged",
			"(Landroid/telecom/RemoteConference;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RemoteConference_Callback::onConnectionRemoved(android::telecom::RemoteConference arg0, android::telecom::RemoteConnection arg1)
	{
		__thiz.callMethod<void>(
			"onConnectionRemoved",
			"(Landroid/telecom/RemoteConference;Landroid/telecom/RemoteConnection;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConference_Callback::onDestroyed(android::telecom::RemoteConference arg0)
	{
		__thiz.callMethod<void>(
			"onDestroyed",
			"(Landroid/telecom/RemoteConference;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteConference_Callback::onDisconnected(android::telecom::RemoteConference arg0, android::telecom::DisconnectCause arg1)
	{
		__thiz.callMethod<void>(
			"onDisconnected",
			"(Landroid/telecom/RemoteConference;Landroid/telecom/DisconnectCause;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConference_Callback::onExtrasChanged(android::telecom::RemoteConference arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onExtrasChanged",
			"(Landroid/telecom/RemoteConference;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConference_Callback::onStateChanged(android::telecom::RemoteConference arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onStateChanged",
			"(Landroid/telecom/RemoteConference;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace android::telecom

