#include "../../content/Intent.hpp"
#include "./SpellCheckerService_Session.hpp"
#include "./SpellCheckerService.hpp"

namespace android::service::textservice
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
	
	SpellCheckerService::SpellCheckerService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SpellCheckerService::SpellCheckerService()
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
	QAndroidJniObject SpellCheckerService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::service::textservice

