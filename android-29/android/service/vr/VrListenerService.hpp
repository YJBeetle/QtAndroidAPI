#pragma once

#ifndef ANDROID_SERVICE_VR_VRLISTENERSERVICE
#define ANDROID_SERVICE_VR_VRLISTENERSERVICE

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::service::vr
{
	class VrListenerService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static QAndroidJniObject SERVICE_INTERFACE();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onCurrentVrActivityChanged(__jni_impl::android::content::ComponentName arg0);
		static jboolean isVrModePackageEnabled(__jni_impl::android::content::Context arg0, __jni_impl::android::content::ComponentName arg1);
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
	};
} // namespace __jni_impl::android::service::vr

#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"

namespace __jni_impl::android::service::vr
{
	// Fields
	QAndroidJniObject VrListenerService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.vr.VrListenerService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void VrListenerService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.vr.VrListenerService",
			"()V");
	}
	
	// Methods
	void VrListenerService::onCurrentVrActivityChanged(__jni_impl::android::content::ComponentName arg0)
	{
		__thiz.callMethod<void>(
			"onCurrentVrActivityChanged",
			"(Landroid/content/ComponentName;)V",
			arg0.__jniObject().object());
	}
	jboolean VrListenerService::isVrModePackageEnabled(__jni_impl::android::content::Context arg0, __jni_impl::android::content::ComponentName arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.service.vr.VrListenerService",
			"isVrModePackageEnabled",
			"(Landroid/content/Context;Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject VrListenerService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::service::vr

namespace android::service::vr
{
	class VrListenerService : public __jni_impl::android::service::vr::VrListenerService
	{
	public:
		VrListenerService(QAndroidJniObject obj) { __thiz = obj; }
		VrListenerService()
		{
			__constructor();
		}
	};
} // namespace android::service::vr

#endif // ANDROID_SERVICE_VR_VRLISTENERSERVICE

