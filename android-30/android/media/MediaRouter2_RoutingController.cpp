#include "./MediaRoute2Info.hpp"
#include "./MediaRouter2.hpp"
#include "../os/Bundle.hpp"
#include "../../JString.hpp"
#include "./MediaRouter2_RoutingController.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaRouter2_RoutingController::MediaRouter2_RoutingController(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void MediaRouter2_RoutingController::deselectRoute(android::media::MediaRoute2Info arg0) const
	{
		callMethod<void>(
			"deselectRoute",
			"(Landroid/media/MediaRoute2Info;)V",
			arg0.object()
		);
	}
	android::os::Bundle MediaRouter2_RoutingController::getControlHints() const
	{
		return callObjectMethod(
			"getControlHints",
			"()Landroid/os/Bundle;"
		);
	}
	JObject MediaRouter2_RoutingController::getDeselectableRoutes() const
	{
		return callObjectMethod(
			"getDeselectableRoutes",
			"()Ljava/util/List;"
		);
	}
	JString MediaRouter2_RoutingController::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	JObject MediaRouter2_RoutingController::getSelectableRoutes() const
	{
		return callObjectMethod(
			"getSelectableRoutes",
			"()Ljava/util/List;"
		);
	}
	JObject MediaRouter2_RoutingController::getSelectedRoutes() const
	{
		return callObjectMethod(
			"getSelectedRoutes",
			"()Ljava/util/List;"
		);
	}
	jint MediaRouter2_RoutingController::getVolume() const
	{
		return callMethod<jint>(
			"getVolume",
			"()I"
		);
	}
	jint MediaRouter2_RoutingController::getVolumeHandling() const
	{
		return callMethod<jint>(
			"getVolumeHandling",
			"()I"
		);
	}
	jint MediaRouter2_RoutingController::getVolumeMax() const
	{
		return callMethod<jint>(
			"getVolumeMax",
			"()I"
		);
	}
	jboolean MediaRouter2_RoutingController::isReleased() const
	{
		return callMethod<jboolean>(
			"isReleased",
			"()Z"
		);
	}
	void MediaRouter2_RoutingController::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void MediaRouter2_RoutingController::selectRoute(android::media::MediaRoute2Info arg0) const
	{
		callMethod<void>(
			"selectRoute",
			"(Landroid/media/MediaRoute2Info;)V",
			arg0.object()
		);
	}
	void MediaRouter2_RoutingController::setVolume(jint arg0) const
	{
		callMethod<void>(
			"setVolume",
			"(I)V",
			arg0
		);
	}
	JString MediaRouter2_RoutingController::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

