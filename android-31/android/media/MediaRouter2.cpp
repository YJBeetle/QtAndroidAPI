#include "../content/Context.hpp"
#include "./MediaRoute2Info.hpp"
#include "./MediaRouter2_ControllerCallback.hpp"
#include "./MediaRouter2_RouteCallback.hpp"
#include "./MediaRouter2_RoutingController.hpp"
#include "./MediaRouter2_TransferCallback.hpp"
#include "./RouteDiscoveryPreference.hpp"
#include "../../JString.hpp"
#include "./MediaRouter2.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaRouter2::MediaRouter2(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::media::MediaRouter2 MediaRouter2::getInstance(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.media.MediaRouter2",
			"getInstance",
			"(Landroid/content/Context;)Landroid/media/MediaRouter2;",
			arg0.object()
		);
	}
	android::media::MediaRouter2_RoutingController MediaRouter2::getController(JString arg0) const
	{
		return callObjectMethod(
			"getController",
			"(Ljava/lang/String;)Landroid/media/MediaRouter2$RoutingController;",
			arg0.object<jstring>()
		);
	}
	JObject MediaRouter2::getControllers() const
	{
		return callObjectMethod(
			"getControllers",
			"()Ljava/util/List;"
		);
	}
	JObject MediaRouter2::getRoutes() const
	{
		return callObjectMethod(
			"getRoutes",
			"()Ljava/util/List;"
		);
	}
	android::media::MediaRouter2_RoutingController MediaRouter2::getSystemController() const
	{
		return callObjectMethod(
			"getSystemController",
			"()Landroid/media/MediaRouter2$RoutingController;"
		);
	}
	void MediaRouter2::registerControllerCallback(JObject arg0, android::media::MediaRouter2_ControllerCallback arg1) const
	{
		callMethod<void>(
			"registerControllerCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaRouter2$ControllerCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaRouter2::registerRouteCallback(JObject arg0, android::media::MediaRouter2_RouteCallback arg1, android::media::RouteDiscoveryPreference arg2) const
	{
		callMethod<void>(
			"registerRouteCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaRouter2$RouteCallback;Landroid/media/RouteDiscoveryPreference;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void MediaRouter2::registerTransferCallback(JObject arg0, android::media::MediaRouter2_TransferCallback arg1) const
	{
		callMethod<void>(
			"registerTransferCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaRouter2$TransferCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaRouter2::setOnGetControllerHintsListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnGetControllerHintsListener",
			"(Landroid/media/MediaRouter2$OnGetControllerHintsListener;)V",
			arg0.object()
		);
	}
	void MediaRouter2::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	void MediaRouter2::transferTo(android::media::MediaRoute2Info arg0) const
	{
		callMethod<void>(
			"transferTo",
			"(Landroid/media/MediaRoute2Info;)V",
			arg0.object()
		);
	}
	void MediaRouter2::unregisterControllerCallback(android::media::MediaRouter2_ControllerCallback arg0) const
	{
		callMethod<void>(
			"unregisterControllerCallback",
			"(Landroid/media/MediaRouter2$ControllerCallback;)V",
			arg0.object()
		);
	}
	void MediaRouter2::unregisterRouteCallback(android::media::MediaRouter2_RouteCallback arg0) const
	{
		callMethod<void>(
			"unregisterRouteCallback",
			"(Landroid/media/MediaRouter2$RouteCallback;)V",
			arg0.object()
		);
	}
	void MediaRouter2::unregisterTransferCallback(android::media::MediaRouter2_TransferCallback arg0) const
	{
		callMethod<void>(
			"unregisterTransferCallback",
			"(Landroid/media/MediaRouter2$TransferCallback;)V",
			arg0.object()
		);
	}
} // namespace android::media

