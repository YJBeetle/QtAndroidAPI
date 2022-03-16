#pragma once

#include "../../content/ComponentName.def.hpp"
#include "../../content/Intent.def.hpp"
#include "../../content/IntentFilter.def.hpp"
#include "../../../JString.hpp"
#include "./ChooserTargetService.def.hpp"

namespace android::service::chooser
{
	// Fields
	inline JString ChooserTargetService::BIND_PERMISSION()
	{
		return getStaticObjectField(
			"android.service.chooser.ChooserTargetService",
			"BIND_PERMISSION",
			"Ljava/lang/String;"
		);
	}
	inline JString ChooserTargetService::META_DATA_NAME()
	{
		return getStaticObjectField(
			"android.service.chooser.ChooserTargetService",
			"META_DATA_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString ChooserTargetService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.chooser.ChooserTargetService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline ChooserTargetService::ChooserTargetService()
		: android::app::Service(
			"android.service.chooser.ChooserTargetService",
			"()V"
		) {}
	
	// Methods
	inline JObject ChooserTargetService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline JObject ChooserTargetService::onGetChooserTargets(android::content::ComponentName arg0, android::content::IntentFilter arg1) const
	{
		return callObjectMethod(
			"onGetChooserTargets",
			"(Landroid/content/ComponentName;Landroid/content/IntentFilter;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::service::chooser

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

