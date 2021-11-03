#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "./Control.hpp"
#include "./actions/ControlAction.hpp"
#include "./ControlsProviderService.hpp"

namespace android::service::controls
{
	// Fields
	jstring ControlsProviderService::SERVICE_CONTROLS()
	{
		return getStaticObjectField(
			"android.service.controls.ControlsProviderService",
			"SERVICE_CONTROLS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ControlsProviderService::TAG()
	{
		return getStaticObjectField(
			"android.service.controls.ControlsProviderService",
			"TAG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	ControlsProviderService::ControlsProviderService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	ControlsProviderService::ControlsProviderService()
		: android::app::Service(
			"android.service.controls.ControlsProviderService",
			"()V"
		) {}
	
	// Methods
	void ControlsProviderService::requestAddControl(android::content::Context arg0, android::content::ComponentName arg1, android::service::controls::Control arg2)
	{
		callStaticMethod<void>(
			"android.service.controls.ControlsProviderService",
			"requestAddControl",
			"(Landroid/content/Context;Landroid/content/ComponentName;Landroid/service/controls/Control;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	JObject ControlsProviderService::createPublisherFor(JObject arg0)
	{
		return callObjectMethod(
			"createPublisherFor",
			"(Ljava/util/List;)Ljava/util/concurrent/Flow$Publisher;",
			arg0.object()
		);
	}
	JObject ControlsProviderService::createPublisherForAllAvailable()
	{
		return callObjectMethod(
			"createPublisherForAllAvailable",
			"()Ljava/util/concurrent/Flow$Publisher;"
		);
	}
	JObject ControlsProviderService::createPublisherForSuggested()
	{
		return callObjectMethod(
			"createPublisherForSuggested",
			"()Ljava/util/concurrent/Flow$Publisher;"
		);
	}
	JObject ControlsProviderService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	jboolean ControlsProviderService::onUnbind(android::content::Intent arg0)
	{
		return callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	void ControlsProviderService::performControlAction(jstring arg0, android::service::controls::actions::ControlAction arg1, JObject arg2)
	{
		callMethod<void>(
			"performControlAction",
			"(Ljava/lang/String;Landroid/service/controls/actions/ControlAction;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::service::controls

