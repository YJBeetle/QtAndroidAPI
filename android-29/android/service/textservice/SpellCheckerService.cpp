#include "../../content/Intent.hpp"
#include "./SpellCheckerService_Session.hpp"
#include "./SpellCheckerService.hpp"

namespace android::service::textservice
{
	// Fields
	jstring SpellCheckerService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.textservice.SpellCheckerService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	SpellCheckerService::SpellCheckerService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	SpellCheckerService::SpellCheckerService()
		: android::app::Service(
			"android.service.textservice.SpellCheckerService",
			"()V"
		) {}
	
	// Methods
	android::service::textservice::SpellCheckerService_Session SpellCheckerService::createSession()
	{
		return callObjectMethod(
			"createSession",
			"()Landroid/service/textservice/SpellCheckerService$Session;"
		);
	}
	__JniBaseClass SpellCheckerService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
} // namespace android::service::textservice

