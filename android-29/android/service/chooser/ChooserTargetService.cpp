#include "../../content/ComponentName.hpp"
#include "../../content/Intent.hpp"
#include "../../content/IntentFilter.hpp"
#include "./ChooserTargetService.hpp"

namespace android::service::chooser
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
	
	// QAndroidJniObject forward
	ChooserTargetService::ChooserTargetService(QAndroidJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	ChooserTargetService::ChooserTargetService()
		: android::app::Service(
			"android.service.chooser.ChooserTargetService",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject ChooserTargetService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	QAndroidJniObject ChooserTargetService::onGetChooserTargets(android::content::ComponentName arg0, android::content::IntentFilter arg1)
	{
		return callObjectMethod(
			"onGetChooserTargets",
			"(Landroid/content/ComponentName;Landroid/content/IntentFilter;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::service::chooser

