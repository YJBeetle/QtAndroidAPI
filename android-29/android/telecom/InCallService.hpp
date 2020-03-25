#pragma once

#ifndef ANDROID_TELECOM_INCALLSERVICE
#define ANDROID_TELECOM_INCALLSERVICE

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::telecom
{
	class Call;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::telecom
{
	class CallAudioState;
}
namespace __jni_impl::android::bluetooth
{
	class BluetoothDevice;
}

namespace __jni_impl::android::telecom
{
	class InCallService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static QAndroidJniObject SERVICE_INTERFACE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		jboolean onUnbind(__jni_impl::android::content::Intent arg0);
		void onConnectionEvent(__jni_impl::android::telecom::Call arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject getCallAudioState();
		void onCallAudioStateChanged(__jni_impl::android::telecom::CallAudioState arg0);
		void setAudioRoute(jint arg0);
		void requestBluetoothAudio(__jni_impl::android::bluetooth::BluetoothDevice arg0);
		jboolean canAddCall();
		void setMuted(jboolean arg0);
		void onCallAdded(__jni_impl::android::telecom::Call arg0);
		void onCallRemoved(__jni_impl::android::telecom::Call arg0);
		void onCanAddCallChanged(jboolean arg0);
		void onSilenceRinger();
		QAndroidJniObject getCalls();
		void onBringToForeground(jboolean arg0);
	};
} // namespace __jni_impl::android::telecom

#include "../content/Intent.hpp"
#include "Call.hpp"
#include "../os/Bundle.hpp"
#include "CallAudioState.hpp"
#include "../bluetooth/BluetoothDevice.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	QAndroidJniObject InCallService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.InCallService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void InCallService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.InCallService",
			"()V");
	}
	
	// Methods
	QAndroidJniObject InCallService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object());
	}
	jboolean InCallService::onUnbind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object());
	}
	void InCallService::onConnectionEvent(__jni_impl::android::telecom::Call arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onConnectionEvent",
			"(Landroid/telecom/Call;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject InCallService::getCallAudioState()
	{
		return __thiz.callObjectMethod(
			"getCallAudioState",
			"()Landroid/telecom/CallAudioState;");
	}
	void InCallService::onCallAudioStateChanged(__jni_impl::android::telecom::CallAudioState arg0)
	{
		__thiz.callMethod<void>(
			"onCallAudioStateChanged",
			"(Landroid/telecom/CallAudioState;)V",
			arg0.__jniObject().object());
	}
	void InCallService::setAudioRoute(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAudioRoute",
			"(I)V",
			arg0);
	}
	void InCallService::requestBluetoothAudio(__jni_impl::android::bluetooth::BluetoothDevice arg0)
	{
		__thiz.callMethod<void>(
			"requestBluetoothAudio",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.__jniObject().object());
	}
	jboolean InCallService::canAddCall()
	{
		return __thiz.callMethod<jboolean>(
			"canAddCall",
			"()Z");
	}
	void InCallService::setMuted(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setMuted",
			"(Z)V",
			arg0);
	}
	void InCallService::onCallAdded(__jni_impl::android::telecom::Call arg0)
	{
		__thiz.callMethod<void>(
			"onCallAdded",
			"(Landroid/telecom/Call;)V",
			arg0.__jniObject().object());
	}
	void InCallService::onCallRemoved(__jni_impl::android::telecom::Call arg0)
	{
		__thiz.callMethod<void>(
			"onCallRemoved",
			"(Landroid/telecom/Call;)V",
			arg0.__jniObject().object());
	}
	void InCallService::onCanAddCallChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onCanAddCallChanged",
			"(Z)V",
			arg0);
	}
	void InCallService::onSilenceRinger()
	{
		__thiz.callMethod<void>(
			"onSilenceRinger",
			"()V");
	}
	QAndroidJniObject InCallService::getCalls()
	{
		return __thiz.callObjectMethod(
			"getCalls",
			"()Ljava/util/List;");
	}
	void InCallService::onBringToForeground(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onBringToForeground",
			"(Z)V",
			arg0);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class InCallService : public __jni_impl::android::telecom::InCallService
	{
	public:
		InCallService(QAndroidJniObject obj) { __thiz = obj; }
		InCallService()
		{
			__constructor();
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_INCALLSERVICE

