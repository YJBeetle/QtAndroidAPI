#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
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
	class DisconnectCause;
}
namespace __jni_impl::android::telecom
{
	class RemoteConference_Callback;
}
namespace __jni_impl::android::telecom
{
	class RemoteConnection;
}

namespace __jni_impl::android::telecom
{
	class RemoteConference : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void disconnect();
		QAndroidJniObject getConferenceableConnections();
		jint getConnectionCapabilities();
		jint getConnectionProperties();
		QAndroidJniObject getConnections();
		QAndroidJniObject getDisconnectCause();
		QAndroidJniObject getExtras();
		jint getState();
		void hold();
		void merge();
		void playDtmfTone(jchar arg0);
		void registerCallback(__jni_impl::android::telecom::RemoteConference_Callback arg0);
		void registerCallback(__jni_impl::android::telecom::RemoteConference_Callback arg0, __jni_impl::android::os::Handler arg1);
		void separate(__jni_impl::android::telecom::RemoteConnection arg0);
		void setCallAudioState(__jni_impl::android::telecom::CallAudioState arg0);
		void stopDtmfTone();
		void swap();
		void unhold();
		void unregisterCallback(__jni_impl::android::telecom::RemoteConference_Callback arg0);
	};
} // namespace __jni_impl::android::telecom

#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "./CallAudioState.hpp"
#include "./DisconnectCause.hpp"
#include "./RemoteConference_Callback.hpp"
#include "./RemoteConnection.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	
	// Constructors
	void RemoteConference::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.RemoteConference",
			"(V)V");
	}
	
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
	void RemoteConference::registerCallback(__jni_impl::android::telecom::RemoteConference_Callback arg0)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConference$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteConference::registerCallback(__jni_impl::android::telecom::RemoteConference_Callback arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConference$Callback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConference::separate(__jni_impl::android::telecom::RemoteConnection arg0)
	{
		__thiz.callMethod<void>(
			"separate",
			"(Landroid/telecom/RemoteConnection;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteConference::setCallAudioState(__jni_impl::android::telecom::CallAudioState arg0)
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
	void RemoteConference::unregisterCallback(__jni_impl::android::telecom::RemoteConference_Callback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/RemoteConference$Callback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class RemoteConference : public __jni_impl::android::telecom::RemoteConference
	{
	public:
		RemoteConference(QAndroidJniObject obj) { __thiz = obj; }
		RemoteConference()
		{
			__constructor();
		}
	};
} // namespace android::telecom

