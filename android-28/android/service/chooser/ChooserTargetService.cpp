#include "../../content/ComponentName.hpp"
#include "../../content/Intent.hpp"
#include "../../content/IntentFilter.hpp"
#include "../../../JString.hpp"
#include "./ChooserTargetService.hpp"

namespace android::service::chooser
{
	// Fields
	JString ChooserTargetService::BIND_PERMISSION()
	{
		return getStaticObjectField(
			"android.service.chooser.ChooserTargetService",
			"BIND_PERMISSION",
			"Ljava/lang/String;"
		);
	}
	JString ChooserTargetService::META_DATA_NAME()
	{
		return getStaticObjectField(
			"android.service.chooser.ChooserTargetService",
			"META_DATA_NAME",
			"Ljava/lang/String;"
		);
	}
	JString ChooserTargetService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.chooser.ChooserTargetService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	ChooserTargetService::ChooserTargetService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	ChooserTargetService::ChooserTargetService()
		: android::app::Service(
			"android.service.chooser.ChooserTargetService",
			"()V"
		) {}
	
	// Methods
	JObject ChooserTargetService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	JObject ChooserTargetService::onGetChooserTargets(android::content::ComponentName arg0, android::content::IntentFilter arg1) const
	{
		return callObjectMethod(
			"onGetChooserTargets",
			"(Landroid/content/ComponentName;Landroid/content/IntentFilter;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::service::chooser

