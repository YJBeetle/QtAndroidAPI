#pragma once

#ifndef ANDROID_NFC_CARDEMULATION_OFFHOSTAPDUSERVICE
#define ANDROID_NFC_CARDEMULATION_OFFHOSTAPDUSERVICE

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::nfc::cardemulation
{
	class OffHostApduService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static QAndroidJniObject SERVICE_INTERFACE();
		static QAndroidJniObject SERVICE_META_DATA();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
	};
} // namespace __jni_impl::android::nfc::cardemulation

#include "../../content/Intent.hpp"

namespace __jni_impl::android::nfc::cardemulation
{
	// Fields
	QAndroidJniObject OffHostApduService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.cardemulation.OffHostApduService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject OffHostApduService::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.cardemulation.OffHostApduService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void OffHostApduService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.cardemulation.OffHostApduService",
			"()V");
	}
	
	// Methods
	QAndroidJniObject OffHostApduService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::nfc::cardemulation

namespace android::nfc::cardemulation
{
	class OffHostApduService : public __jni_impl::android::nfc::cardemulation::OffHostApduService
	{
	public:
		OffHostApduService(QAndroidJniObject obj) { __thiz = obj; }
		OffHostApduService()
		{
			__constructor();
		}
	};
} // namespace android::nfc::cardemulation

#endif // ANDROID_NFC_CARDEMULATION_OFFHOSTAPDUSERVICE

