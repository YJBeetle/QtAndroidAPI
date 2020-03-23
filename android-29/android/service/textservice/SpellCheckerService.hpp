#pragma once

#ifndef ANDROID_SERVICE_TEXTSERVICE_SPELLCHECKERSERVICE
#define ANDROID_SERVICE_TEXTSERVICE_SPELLCHECKERSERVICE

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
		static QAndroidJniObject SERVICE_INTERFACE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject createSession();
	};
} // namespace __jni_impl::android::service::textservice

#include "../../content/Intent.hpp"
#include "SpellCheckerService_Session.hpp"

namespace __jni_impl::android::service::textservice
{
	// Fields
	QAndroidJniObject SpellCheckerService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.textservice.SpellCheckerService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void SpellCheckerService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.textservice.SpellCheckerService",
			"()V");
	}
	
	// Methods
	QAndroidJniObject SpellCheckerService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SpellCheckerService::createSession()
	{
		return __thiz.callObjectMethod(
			"createSession",
			"()Landroid/service/textservice/SpellCheckerService$Session;");
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

