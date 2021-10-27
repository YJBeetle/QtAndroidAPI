#pragma once

#ifndef ANDROID_SERVICE_TEXTSERVICE_SPELLCHECKERSERVICE
#define ANDROID_SERVICE_TEXTSERVICE_SPELLCHECKERSERVICE

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::service::textservice
{
	class SpellCheckerService_Session;
}

namespace __jni_impl::android::service::textservice
{
	class SpellCheckerService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject createSession();
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
	};
} // namespace __jni_impl::android::service::textservice

#include "../../content/Intent.hpp"
#include "SpellCheckerService_Session.hpp"

namespace __jni_impl::android::service::textservice
{
	// Fields
	jstring SpellCheckerService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.textservice.SpellCheckerService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void SpellCheckerService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.textservice.SpellCheckerService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject SpellCheckerService::createSession()
	{
		return __thiz.callObjectMethod(
			"createSession",
			"()Landroid/service/textservice/SpellCheckerService$Session;"
		);
	}
	QAndroidJniObject SpellCheckerService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::service::textservice

namespace android::service::textservice
{
	class SpellCheckerService : public __jni_impl::android::service::textservice::SpellCheckerService
	{
	public:
		SpellCheckerService(QAndroidJniObject obj) { __thiz = obj; }
		SpellCheckerService()
		{
			__constructor();
		}
	};
} // namespace android::service::textservice

#endif // ANDROID_SERVICE_TEXTSERVICE_SPELLCHECKERSERVICE

