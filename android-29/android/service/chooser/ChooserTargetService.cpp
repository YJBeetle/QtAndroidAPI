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
	
	ChooserTargetService::ChooserTargetService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ChooserTargetService::ChooserTargetService()
	{
		__thiz = QAndroidJniObject(
			"android.service.chooser.ChooserTargetService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ChooserTargetService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ChooserTargetService::onGetChooserTargets(android::content::ComponentName arg0, android::content::IntentFilter arg1)
	{
		return __thiz.callObjectMethod(
			"onGetChooserTargets",
			"(Landroid/content/ComponentName;Landroid/content/IntentFilter;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::service::chooser

