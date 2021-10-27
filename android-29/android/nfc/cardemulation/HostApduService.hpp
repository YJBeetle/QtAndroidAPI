#pragma once

#ifndef ANDROID_NFC_CARDEMULATION_HOSTAPDUSERVICE
#define ANDROID_NFC_CARDEMULATION_HOSTAPDUSERVICE

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::nfc::cardemulation
{
	class HostApduService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static jint DEACTIVATION_DESELECTED();
		static jint DEACTIVATION_LINK_LOSS();
		static jstring SERVICE_INTERFACE();
		static jstring SERVICE_META_DATA();
		
		// Constructors
		void __constructor();
		
		// Methods
		void notifyUnhandled();
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void onDeactivated(jint arg0);
		jbyteArray processCommandApdu(jbyteArray arg0, __jni_impl::android::os::Bundle arg1);
		void sendResponseApdu(jbyteArray arg0);
	};
} // namespace __jni_impl::android::nfc::cardemulation

#include "../../content/Intent.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::nfc::cardemulation
{
	// Fields
	jint HostApduService::DEACTIVATION_DESELECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.cardemulation.HostApduService",
			"DEACTIVATION_DESELECTED"
		);
	}
	jint HostApduService::DEACTIVATION_LINK_LOSS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.cardemulation.HostApduService",
			"DEACTIVATION_LINK_LOSS"
		);
	}
	jstring HostApduService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.cardemulation.HostApduService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring HostApduService::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.cardemulation.HostApduService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void HostApduService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.cardemulation.HostApduService",
			"()V"
		);
	}
	
	// Methods
	void HostApduService::notifyUnhandled()
	{
		__thiz.callMethod<void>(
			"notifyUnhandled",
			"()V"
		);
	}
	QAndroidJniObject HostApduService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void HostApduService::onDeactivated(jint arg0)
	{
		__thiz.callMethod<void>(
			"onDeactivated",
			"(I)V",
			arg0
		);
	}
	jbyteArray HostApduService::processCommandApdu(jbyteArray arg0, __jni_impl::android::os::Bundle arg1)
	{
		return __thiz.callObjectMethod(
			"processCommandApdu",
			"([BLandroid/os/Bundle;)[B",
			arg0,
			arg1.__jniObject().object()
		).object<jbyteArray>();
	}
	void HostApduService::sendResponseApdu(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"sendResponseApdu",
			"([B)V",
			arg0
		);
	}
} // namespace __jni_impl::android::nfc::cardemulation

namespace android::nfc::cardemulation
{
	class HostApduService : public __jni_impl::android::nfc::cardemulation::HostApduService
	{
	public:
		HostApduService(QAndroidJniObject obj) { __thiz = obj; }
		HostApduService()
		{
			__constructor();
		}
	};
} // namespace android::nfc::cardemulation

#endif // ANDROID_NFC_CARDEMULATION_HOSTAPDUSERVICE

