#pragma once

#include "../../content/Intent.def.hpp"
#include "../../../JString.hpp"
#include "./OffHostApduService.def.hpp"

namespace android::nfc::cardemulation
{
	// Fields
	inline JString OffHostApduService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.OffHostApduService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	inline JString OffHostApduService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.OffHostApduService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline OffHostApduService::OffHostApduService()
		: android::app::Service(
			"android.nfc.cardemulation.OffHostApduService",
			"()V"
		) {}
	
	// Methods
	inline JObject OffHostApduService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
} // namespace android::nfc::cardemulation

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

