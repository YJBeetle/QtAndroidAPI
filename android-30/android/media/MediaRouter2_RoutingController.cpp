#include "./MediaRoute2Info.hpp"
#include "./MediaRouter2.hpp"
#include "../os/Bundle.hpp"
#include "./MediaRouter2_RoutingController.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaRouter2_RoutingController::MediaRouter2_RoutingController(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void MediaRouter2_RoutingController::deselectRoute(android::media::MediaRoute2Info arg0)
	{
		callMethod<void>(
			"deselectRoute",
			"(Landroid/media/MediaRoute2Info;)V",
			arg0.object()
		);
	}
	android::os::Bundle MediaRouter2_RoutingController::getControlHints()
	{
		return callObjectMethod(
			"getControlHints",
			"()Landroid/os/Bundle;"
		);
	}
	JObject MediaRouter2_RoutingController::getDeselectableRoutes()
	{
		return callObjectMethod(
			"getDeselectableRoutes",
			"()Ljava/util/List;"
		);
	}
	jstring MediaRouter2_RoutingController::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	JObject MediaRouter2_RoutingController::getSelectableRoutes()
	{
		return callObjectMethod(
			"getSelectableRoutes",
			"()Ljava/util/List;"
		);
	}
	JObject MediaRouter2_RoutingController::getSelectedRoutes()
	{
		return callObjectMethod(
			"getSelectedRoutes",
			"()Ljava/util/List;"
		);
	}
	jint MediaRouter2_RoutingController::getVolume()
	{
		return callMethod<jint>(
			"getVolume",
			"()I"
		);
	}
	jint MediaRouter2_RoutingController::getVolumeHandling()
	{
		return callMethod<jint>(
			"getVolumeHandling",
			"()I"
		);
	}
	jint MediaRouter2_RoutingController::getVolumeMax()
	{
		return callMethod<jint>(
			"getVolumeMax",
			"()I"
		);
	}
	jboolean MediaRouter2_RoutingController::isReleased()
	{
		return callMethod<jboolean>(
			"isReleased",
			"()Z"
		);
	}
	void MediaRouter2_RoutingController::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void MediaRouter2_RoutingController::selectRoute(android::media::MediaRoute2Info arg0)
	{
		callMethod<void>(
			"selectRoute",
			"(Landroid/media/MediaRoute2Info;)V",
			arg0.object()
		);
	}
	void MediaRouter2_RoutingController::setVolume(jint arg0)
	{
		callMethod<void>(
			"setVolume",
			"(I)V",
			arg0
		);
	}
	jstring MediaRouter2_RoutingController::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media

