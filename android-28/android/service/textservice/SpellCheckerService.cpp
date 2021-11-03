#include "../../content/Intent.hpp"
#include "./SpellCheckerService_Session.hpp"
#include "../../../JString.hpp"
#include "./SpellCheckerService.hpp"

namespace android::service::textservice
{
	// Fields
	JString SpellCheckerService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.textservice.SpellCheckerService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
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
	JObject SpellCheckerService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
} // namespace android::service::textservice

