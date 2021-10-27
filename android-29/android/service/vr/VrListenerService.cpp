#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "./VrListenerService.hpp"

namespace android::service::vr
{
	// Fields
	jstring VrListenerService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.vr.VrListenerService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	VrListenerService::VrListenerService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VrListenerService::VrListenerService()
	{
		__thiz = QAndroidJniObject(
			"android.service.vr.VrListenerService",
			"()V"
		);
	}
	
	// Methods
	jboolean VrListenerService::isVrModePackageEnabled(android::content::Context arg0, android::content::ComponentName arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.service.vr.VrListenerService",
			"isVrModePackageEnabled",
			"(Landroid/content/Context;Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject VrListenerService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void VrListenerService::onCurrentVrActivityChanged(android::content::ComponentName arg0)
	{
		__thiz.callMethod<void>(
			"onCurrentVrActivityChanged",
			"(Landroid/content/ComponentName;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::service::vr

