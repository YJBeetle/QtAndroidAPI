#pragma once

#ifndef ANDROID_TELECOM_REMOTECONFERENCE_CALLBACK
#define ANDROID_TELECOM_REMOTECONFERENCE_CALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::telecom
{
	class DisconnectCause;
}
namespace __jni_impl::android::telecom
{
	class RemoteConference;
}
namespace __jni_impl::android::telecom
{
	class RemoteConnection;
}

namespace __jni_impl::android::telecom
{
	class RemoteConference_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onConferenceableConnectionsChanged(__jni_impl::android::telecom::RemoteConference arg0, __jni_impl::__JniBaseClass arg1);
		void onConnectionAdded(__jni_impl::android::telecom::RemoteConference arg0, __jni_impl::android::telecom::RemoteConnection arg1);
		void onConnectionCapabilitiesChanged(__jni_impl::android::telecom::RemoteConference arg0, jint arg1);
		void onConnectionPropertiesChanged(__jni_impl::android::telecom::RemoteConference arg0, jint arg1);
		void onConnectionRemoved(__jni_impl::android::telecom::RemoteConference arg0, __jni_impl::android::telecom::RemoteConnection arg1);
		void onDestroyed(__jni_impl::android::telecom::RemoteConference arg0);
		void onDisconnected(__jni_impl::android::telecom::RemoteConference arg0, __jni_impl::android::telecom::DisconnectCause arg1);
		void onExtrasChanged(__jni_impl::android::telecom::RemoteConference arg0, __jni_impl::android::os::Bundle arg1);
		void onStateChanged(__jni_impl::android::telecom::RemoteConference arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::android::telecom

#include "../os/Bundle.hpp"
#include "DisconnectCause.hpp"
#include "RemoteConference.hpp"
#include "RemoteConnection.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	
	// Constructors
	void RemoteConference_Callback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.RemoteConference$Callback",
			"()V"
		);
	}
	
	// Methods
	void RemoteConference_Callback::onConferenceableConnectionsChanged(__jni_impl::android::telecom::RemoteConference arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onConferenceableConnectionsChanged",
			"(Landroid/telecom/RemoteConference;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConference_Callback::onConnectionAdded(__jni_impl::android::telecom::RemoteConference arg0, __jni_impl::android::telecom::RemoteConnection arg1)
	{
		__thiz.callMethod<void>(
			"onConnectionAdded",
			"(Landroid/telecom/RemoteConference;Landroid/telecom/RemoteConnection;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConference_Callback::onConnectionCapabilitiesChanged(__jni_impl::android::telecom::RemoteConference arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onConnectionCapabilitiesChanged",
			"(Landroid/telecom/RemoteConference;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RemoteConference_Callback::onConnectionPropertiesChanged(__jni_impl::android::telecom::RemoteConference arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onConnectionPropertiesChanged",
			"(Landroid/telecom/RemoteConference;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RemoteConference_Callback::onConnectionRemoved(__jni_impl::android::telecom::RemoteConference arg0, __jni_impl::android::telecom::RemoteConnection arg1)
	{
		__thiz.callMethod<void>(
			"onConnectionRemoved",
			"(Landroid/telecom/RemoteConference;Landroid/telecom/RemoteConnection;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConference_Callback::onDestroyed(__jni_impl::android::telecom::RemoteConference arg0)
	{
		__thiz.callMethod<void>(
			"onDestroyed",
			"(Landroid/telecom/RemoteConference;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteConference_Callback::onDisconnected(__jni_impl::android::telecom::RemoteConference arg0, __jni_impl::android::telecom::DisconnectCause arg1)
	{
		__thiz.callMethod<void>(
			"onDisconnected",
			"(Landroid/telecom/RemoteConference;Landroid/telecom/DisconnectCause;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConference_Callback::onExtrasChanged(__jni_impl::android::telecom::RemoteConference arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onExtrasChanged",
			"(Landroid/telecom/RemoteConference;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConference_Callback::onStateChanged(__jni_impl::android::telecom::RemoteConference arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onStateChanged",
			"(Landroid/telecom/RemoteConference;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class RemoteConference_Callback : public __jni_impl::android::telecom::RemoteConference_Callback
	{
	public:
		RemoteConference_Callback(QAndroidJniObject obj) { __thiz = obj; }
		RemoteConference_Callback()
		{
			__constructor();
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_REMOTECONFERENCE_CALLBACK

