#pragma once

#ifndef ANDROID_NFC_CARDEMULATION_HOSTNFCFSERVICE
#define ANDROID_NFC_CARDEMULATION_HOSTNFCFSERVICE

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
	class HostNfcFService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static jint DEACTIVATION_LINK_LOSS();
		static jstring SERVICE_INTERFACE();
		static jstring SERVICE_META_DATA();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void onDeactivated(jint arg0);
		jbyteArray processNfcFPacket(jbyteArray arg0, __jni_impl::android::os::Bundle arg1);
		void sendResponsePacket(jbyteArray arg0);
	};
} // namespace __jni_impl::android::nfc::cardemulation

#include "../../content/Intent.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::nfc::cardemulation
{
	// Fields
	jint HostNfcFService::DEACTIVATION_LINK_LOSS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.nfc.cardemulation.HostNfcFService",
			"DEACTIVATION_LINK_LOSS"
		);
	}
	jstring HostNfcFService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.cardemulation.HostNfcFService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring HostNfcFService::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.cardemulation.HostNfcFService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void HostNfcFService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.cardemulation.HostNfcFService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject HostNfcFService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void HostNfcFService::onDeactivated(jint arg0)
	{
		__thiz.callMethod<void>(
			"onDeactivated",
			"(I)V",
			arg0
		);
	}
	jbyteArray HostNfcFService::processNfcFPacket(jbyteArray arg0, __jni_impl::android::os::Bundle arg1)
	{
		return __thiz.callObjectMethod(
			"processNfcFPacket",
			"([BLandroid/os/Bundle;)[B",
			arg0,
			arg1.__jniObject().object()
		).object<jbyteArray>();
	}
	void HostNfcFService::sendResponsePacket(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"sendResponsePacket",
			"([B)V",
			arg0
		);
	}
} // namespace __jni_impl::android::nfc::cardemulation

namespace android::nfc::cardemulation
{
	class HostNfcFService : public __jni_impl::android::nfc::cardemulation::HostNfcFService
	{
	public:
		HostNfcFService(QAndroidJniObject obj) { __thiz = obj; }
		HostNfcFService()
		{
			__constructor();
		}
	};
} // namespace android::nfc::cardemulation

#endif // ANDROID_NFC_CARDEMULATION_HOSTNFCFSERVICE

