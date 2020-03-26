#pragma once

#ifndef ANDROID_TELECOM_REMOTECONNECTION_CALLBACK
#define ANDROID_TELECOM_REMOTECONNECTION_CALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::telecom
{
	class RemoteConnection;
}
namespace __jni_impl::android::telecom
{
	class DisconnectCause;
}
namespace __jni_impl::android::telecom
{
	class StatusHints;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::telecom
{
	class RemoteConnection_VideoProvider;
}
namespace __jni_impl::android::telecom
{
	class RemoteConference;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::telecom
{
	class RemoteConnection_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onRingbackRequested(__jni_impl::android::telecom::RemoteConnection arg0, jboolean arg1);
		void onDisconnected(__jni_impl::android::telecom::RemoteConnection arg0, __jni_impl::android::telecom::DisconnectCause arg1);
		void onConnectionCapabilitiesChanged(__jni_impl::android::telecom::RemoteConnection arg0, jint arg1);
		void onConnectionPropertiesChanged(__jni_impl::android::telecom::RemoteConnection arg0, jint arg1);
		void onPostDialWait(__jni_impl::android::telecom::RemoteConnection arg0, jstring arg1);
		void onPostDialChar(__jni_impl::android::telecom::RemoteConnection arg0, jchar arg1);
		void onVoipAudioChanged(__jni_impl::android::telecom::RemoteConnection arg0, jboolean arg1);
		void onStatusHintsChanged(__jni_impl::android::telecom::RemoteConnection arg0, __jni_impl::android::telecom::StatusHints arg1);
		void onAddressChanged(__jni_impl::android::telecom::RemoteConnection arg0, __jni_impl::android::net::Uri arg1, jint arg2);
		void onCallerDisplayNameChanged(__jni_impl::android::telecom::RemoteConnection arg0, jstring arg1, jint arg2);
		void onVideoStateChanged(__jni_impl::android::telecom::RemoteConnection arg0, jint arg1);
		void onDestroyed(__jni_impl::android::telecom::RemoteConnection arg0);
		void onConferenceableConnectionsChanged(__jni_impl::android::telecom::RemoteConnection arg0, __jni_impl::__JniBaseClass arg1);
		void onVideoProviderChanged(__jni_impl::android::telecom::RemoteConnection arg0, __jni_impl::android::telecom::RemoteConnection_VideoProvider arg1);
		void onConferenceChanged(__jni_impl::android::telecom::RemoteConnection arg0, __jni_impl::android::telecom::RemoteConference arg1);
		void onConnectionEvent(__jni_impl::android::telecom::RemoteConnection arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		void onExtrasChanged(__jni_impl::android::telecom::RemoteConnection arg0, __jni_impl::android::os::Bundle arg1);
		void onStateChanged(__jni_impl::android::telecom::RemoteConnection arg0, jint arg1);
	};
} // namespace __jni_impl::android::telecom

#include "RemoteConnection.hpp"
#include "DisconnectCause.hpp"
#include "StatusHints.hpp"
#include "../net/Uri.hpp"
#include "RemoteConnection_VideoProvider.hpp"
#include "RemoteConference.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	
	// Constructors
	void RemoteConnection_Callback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.RemoteConnection$Callback",
			"()V");
	}
	
	// Methods
	void RemoteConnection_Callback::onRingbackRequested(__jni_impl::android::telecom::RemoteConnection arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onRingbackRequested",
			"(Landroid/telecom/RemoteConnection;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RemoteConnection_Callback::onDisconnected(__jni_impl::android::telecom::RemoteConnection arg0, __jni_impl::android::telecom::DisconnectCause arg1)
	{
		__thiz.callMethod<void>(
			"onDisconnected",
			"(Landroid/telecom/RemoteConnection;Landroid/telecom/DisconnectCause;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConnection_Callback::onConnectionCapabilitiesChanged(__jni_impl::android::telecom::RemoteConnection arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onConnectionCapabilitiesChanged",
			"(Landroid/telecom/RemoteConnection;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RemoteConnection_Callback::onConnectionPropertiesChanged(__jni_impl::android::telecom::RemoteConnection arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onConnectionPropertiesChanged",
			"(Landroid/telecom/RemoteConnection;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RemoteConnection_Callback::onPostDialWait(__jni_impl::android::telecom::RemoteConnection arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onPostDialWait",
			"(Landroid/telecom/RemoteConnection;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RemoteConnection_Callback::onPostDialChar(__jni_impl::android::telecom::RemoteConnection arg0, jchar arg1)
	{
		__thiz.callMethod<void>(
			"onPostDialChar",
			"(Landroid/telecom/RemoteConnection;C)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RemoteConnection_Callback::onVoipAudioChanged(__jni_impl::android::telecom::RemoteConnection arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onVoipAudioChanged",
			"(Landroid/telecom/RemoteConnection;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RemoteConnection_Callback::onStatusHintsChanged(__jni_impl::android::telecom::RemoteConnection arg0, __jni_impl::android::telecom::StatusHints arg1)
	{
		__thiz.callMethod<void>(
			"onStatusHintsChanged",
			"(Landroid/telecom/RemoteConnection;Landroid/telecom/StatusHints;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConnection_Callback::onAddressChanged(__jni_impl::android::telecom::RemoteConnection arg0, __jni_impl::android::net::Uri arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onAddressChanged",
			"(Landroid/telecom/RemoteConnection;Landroid/net/Uri;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void RemoteConnection_Callback::onCallerDisplayNameChanged(__jni_impl::android::telecom::RemoteConnection arg0, jstring arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onCallerDisplayNameChanged",
			"(Landroid/telecom/RemoteConnection;Ljava/lang/String;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void RemoteConnection_Callback::onVideoStateChanged(__jni_impl::android::telecom::RemoteConnection arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onVideoStateChanged",
			"(Landroid/telecom/RemoteConnection;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RemoteConnection_Callback::onDestroyed(__jni_impl::android::telecom::RemoteConnection arg0)
	{
		__thiz.callMethod<void>(
			"onDestroyed",
			"(Landroid/telecom/RemoteConnection;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteConnection_Callback::onConferenceableConnectionsChanged(__jni_impl::android::telecom::RemoteConnection arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onConferenceableConnectionsChanged",
			"(Landroid/telecom/RemoteConnection;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConnection_Callback::onVideoProviderChanged(__jni_impl::android::telecom::RemoteConnection arg0, __jni_impl::android::telecom::RemoteConnection_VideoProvider arg1)
	{
		__thiz.callMethod<void>(
			"onVideoProviderChanged",
			"(Landroid/telecom/RemoteConnection;Landroid/telecom/RemoteConnection$VideoProvider;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConnection_Callback::onConferenceChanged(__jni_impl::android::telecom::RemoteConnection arg0, __jni_impl::android::telecom::RemoteConference arg1)
	{
		__thiz.callMethod<void>(
			"onConferenceChanged",
			"(Landroid/telecom/RemoteConnection;Landroid/telecom/RemoteConference;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConnection_Callback::onConnectionEvent(__jni_impl::android::telecom::RemoteConnection arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onConnectionEvent",
			"(Landroid/telecom/RemoteConnection;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void RemoteConnection_Callback::onExtrasChanged(__jni_impl::android::telecom::RemoteConnection arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onExtrasChanged",
			"(Landroid/telecom/RemoteConnection;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConnection_Callback::onStateChanged(__jni_impl::android::telecom::RemoteConnection arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onStateChanged",
			"(Landroid/telecom/RemoteConnection;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class RemoteConnection_Callback : public __jni_impl::android::telecom::RemoteConnection_Callback
	{
	public:
		RemoteConnection_Callback(QAndroidJniObject obj) { __thiz = obj; }
		RemoteConnection_Callback()
		{
			__constructor();
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_REMOTECONNECTION_CALLBACK

