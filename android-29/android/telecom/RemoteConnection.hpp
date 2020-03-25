#pragma once

#ifndef ANDROID_TELECOM_REMOTECONNECTION
#define ANDROID_TELECOM_REMOTECONNECTION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::telecom
{
	class DisconnectCause;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::telecom
{
	class RemoteConnection_Callback;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::telecom
{
	class CallAudioState;
}
namespace __jni_impl::android::telecom
{
	class RemoteConnection_VideoProvider;
}
namespace __jni_impl::android::telecom
{
	class StatusHints;
}
namespace __jni_impl::android::telecom
{
	class RemoteConference;
}

namespace __jni_impl::android::telecom
{
	class RemoteConnection : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getState();
		QAndroidJniObject getAddress();
		void answer();
		void abort();
		QAndroidJniObject getExtras();
		void registerCallback(__jni_impl::android::telecom::RemoteConnection_Callback arg0);
		void registerCallback(__jni_impl::android::telecom::RemoteConnection_Callback arg0, __jni_impl::android::os::Handler arg1);
		void unregisterCallback(__jni_impl::android::telecom::RemoteConnection_Callback arg0);
		jboolean isVoipAudioMode();
		void reject();
		void hold();
		void unhold();
		void disconnect();
		void playDtmfTone(jchar arg0);
		void stopDtmfTone();
		void postDialContinue(jboolean arg0);
		void pullExternalCall();
		void setCallAudioState(__jni_impl::android::telecom::CallAudioState arg0);
		jint getConnectionCapabilities();
		jint getConnectionProperties();
		QAndroidJniObject getVideoProvider();
		jint getVideoState();
		QAndroidJniObject getDisconnectCause();
		QAndroidJniObject getConferenceableConnections();
		QAndroidJniObject getStatusHints();
		jint getAddressPresentation();
		QAndroidJniObject getCallerDisplayName();
		jint getCallerDisplayNamePresentation();
		QAndroidJniObject getConference();
		jboolean isRingbackRequested();
	};
} // namespace __jni_impl::android::telecom

#include "DisconnectCause.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "RemoteConnection_Callback.hpp"
#include "../os/Handler.hpp"
#include "CallAudioState.hpp"
#include "RemoteConnection_VideoProvider.hpp"
#include "StatusHints.hpp"
#include "RemoteConference.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	
	// Constructors
	void RemoteConnection::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.RemoteConnection",
			"(V)V");
	}
	
	// Methods
	jint RemoteConnection::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I");
	}
	QAndroidJniObject RemoteConnection::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()Landroid/net/Uri;");
	}
	void RemoteConnection::answer()
	{
		__thiz.callMethod<void>(
			"answer",
			"()V");
	}
	void RemoteConnection::abort()
	{
		__thiz.callMethod<void>(
			"abort",
			"()V");
	}
	QAndroidJniObject RemoteConnection::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;");
	}
	void RemoteConnection::registerCallback(__jni_impl::android::telecom::RemoteConnection_Callback arg0)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConnection$Callback;)V",
			arg0.__jniObject().object());
	}
	void RemoteConnection::registerCallback(__jni_impl::android::telecom::RemoteConnection_Callback arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConnection$Callback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void RemoteConnection::unregisterCallback(__jni_impl::android::telecom::RemoteConnection_Callback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/RemoteConnection$Callback;)V",
			arg0.__jniObject().object());
	}
	jboolean RemoteConnection::isVoipAudioMode()
	{
		return __thiz.callMethod<jboolean>(
			"isVoipAudioMode",
			"()Z");
	}
	void RemoteConnection::reject()
	{
		__thiz.callMethod<void>(
			"reject",
			"()V");
	}
	void RemoteConnection::hold()
	{
		__thiz.callMethod<void>(
			"hold",
			"()V");
	}
	void RemoteConnection::unhold()
	{
		__thiz.callMethod<void>(
			"unhold",
			"()V");
	}
	void RemoteConnection::disconnect()
	{
		__thiz.callMethod<void>(
			"disconnect",
			"()V");
	}
	void RemoteConnection::playDtmfTone(jchar arg0)
	{
		__thiz.callMethod<void>(
			"playDtmfTone",
			"(C)V",
			arg0);
	}
	void RemoteConnection::stopDtmfTone()
	{
		__thiz.callMethod<void>(
			"stopDtmfTone",
			"()V");
	}
	void RemoteConnection::postDialContinue(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"postDialContinue",
			"(Z)V",
			arg0);
	}
	void RemoteConnection::pullExternalCall()
	{
		__thiz.callMethod<void>(
			"pullExternalCall",
			"()V");
	}
	void RemoteConnection::setCallAudioState(__jni_impl::android::telecom::CallAudioState arg0)
	{
		__thiz.callMethod<void>(
			"setCallAudioState",
			"(Landroid/telecom/CallAudioState;)V",
			arg0.__jniObject().object());
	}
	jint RemoteConnection::getConnectionCapabilities()
	{
		return __thiz.callMethod<jint>(
			"getConnectionCapabilities",
			"()I");
	}
	jint RemoteConnection::getConnectionProperties()
	{
		return __thiz.callMethod<jint>(
			"getConnectionProperties",
			"()I");
	}
	QAndroidJniObject RemoteConnection::getVideoProvider()
	{
		return __thiz.callObjectMethod(
			"getVideoProvider",
			"()Landroid/telecom/RemoteConnection$VideoProvider;");
	}
	jint RemoteConnection::getVideoState()
	{
		return __thiz.callMethod<jint>(
			"getVideoState",
			"()I");
	}
	QAndroidJniObject RemoteConnection::getDisconnectCause()
	{
		return __thiz.callObjectMethod(
			"getDisconnectCause",
			"()Landroid/telecom/DisconnectCause;");
	}
	QAndroidJniObject RemoteConnection::getConferenceableConnections()
	{
		return __thiz.callObjectMethod(
			"getConferenceableConnections",
			"()Ljava/util/List;");
	}
	QAndroidJniObject RemoteConnection::getStatusHints()
	{
		return __thiz.callObjectMethod(
			"getStatusHints",
			"()Landroid/telecom/StatusHints;");
	}
	jint RemoteConnection::getAddressPresentation()
	{
		return __thiz.callMethod<jint>(
			"getAddressPresentation",
			"()I");
	}
	QAndroidJniObject RemoteConnection::getCallerDisplayName()
	{
		return __thiz.callObjectMethod(
			"getCallerDisplayName",
			"()Ljava/lang/CharSequence;");
	}
	jint RemoteConnection::getCallerDisplayNamePresentation()
	{
		return __thiz.callMethod<jint>(
			"getCallerDisplayNamePresentation",
			"()I");
	}
	QAndroidJniObject RemoteConnection::getConference()
	{
		return __thiz.callObjectMethod(
			"getConference",
			"()Landroid/telecom/RemoteConference;");
	}
	jboolean RemoteConnection::isRingbackRequested()
	{
		return __thiz.callMethod<jboolean>(
			"isRingbackRequested",
			"()Z");
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class RemoteConnection : public __jni_impl::android::telecom::RemoteConnection
	{
	public:
		RemoteConnection(QAndroidJniObject obj) { __thiz = obj; }
		RemoteConnection()
		{
			__constructor();
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_REMOTECONNECTION

