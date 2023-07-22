#pragma once

#include "../../content/Intent.def.hpp"
#include "./SpellCheckerService_Session.def.hpp"
#include "../../../JString.hpp"
#include "./SpellCheckerService.def.hpp"

namespace android::service::textservice
{
	// Fields
	inline JString SpellCheckerService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.textservice.SpellCheckerService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline SpellCheckerService::SpellCheckerService()
		: android::app::Service(
			"android.service.textservice.SpellCheckerService",
			"()V"
		) {}
	
	// Methods
	inline android::service::textservice::SpellCheckerService_Session SpellCheckerService::createSession() const
	{
		return callObjectMethod(
			"createSession",
			"()Landroid/service/textservice/SpellCheckerService$Session;"
		);
	}
	inline JObject SpellCheckerService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
} // namespace android::service::textservice

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::textservice;
#endif
