#pragma once

#ifndef ANDROID_SERVICE_CHOOSER_CHOOSERTARGETSERVICE
#define ANDROID_SERVICE_CHOOSER_CHOOSERTARGETSERVICE

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
	class IntentFilter;
}
namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::service::chooser
{
	class ChooserTargetService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static jstring BIND_PERMISSION();
		static jstring META_DATA_NAME();
		static jstring SERVICE_INTERFACE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onGetChooserTargets(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::content::IntentFilter arg1);
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
	};
} // namespace __jni_impl::android::service::chooser

#include "../../content/ComponentName.hpp"
#include "../../content/IntentFilter.hpp"
#include "../../content/Intent.hpp"

namespace __jni_impl::android::service::chooser
{
	// Fields
	jstring ChooserTargetService::BIND_PERMISSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.chooser.ChooserTargetService",
			"BIND_PERMISSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ChooserTargetService::META_DATA_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.chooser.ChooserTargetService",
			"META_DATA_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ChooserTargetService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.chooser.ChooserTargetService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ChooserTargetService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.chooser.ChooserTargetService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ChooserTargetService::onGetChooserTargets(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::content::IntentFilter arg1)
	{
		return __thiz.callObjectMethod(
			"onGetChooserTargets",
			"(Landroid/content/ComponentName;Landroid/content/IntentFilter;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ChooserTargetService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::service::chooser

namespace android::service::chooser
{
	class ChooserTargetService : public __jni_impl::android::service::chooser::ChooserTargetService
	{
	public:
		ChooserTargetService(QAndroidJniObject obj) { __thiz = obj; }
		ChooserTargetService()
		{
			__constructor();
		}
	};
} // namespace android::service::chooser

#endif // ANDROID_SERVICE_CHOOSER_CHOOSERTARGETSERVICE

