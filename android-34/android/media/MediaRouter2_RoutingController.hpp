#pragma once

#include "./MediaRoute2Info.def.hpp"
#include "./MediaRouter2.def.hpp"
#include "./RoutingSessionInfo.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JString.hpp"
#include "./MediaRouter2_RoutingController.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void MediaRouter2_RoutingController::deselectRoute(android::media::MediaRoute2Info arg0) const
	{
		callMethod<void>(
			"deselectRoute",
			"(Landroid/media/MediaRoute2Info;)V",
			arg0.object()
		);
	}
	inline android::os::Bundle MediaRouter2_RoutingController::getControlHints() const
	{
		return callObjectMethod(
			"getControlHints",
			"()Landroid/os/Bundle;"
		);
	}
	inline JObject MediaRouter2_RoutingController::getDeselectableRoutes() const
	{
		return callObjectMethod(
			"getDeselectableRoutes",
			"()Ljava/util/List;"
		);
	}
	inline JString MediaRouter2_RoutingController::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline android::media::RoutingSessionInfo MediaRouter2_RoutingController::getRoutingSessionInfo() const
	{
		return callObjectMethod(
			"getRoutingSessionInfo",
			"()Landroid/media/RoutingSessionInfo;"
		);
	}
	inline JObject MediaRouter2_RoutingController::getSelectableRoutes() const
	{
		return callObjectMethod(
			"getSelectableRoutes",
			"()Ljava/util/List;"
		);
	}
	inline JObject MediaRouter2_RoutingController::getSelectedRoutes() const
	{
		return callObjectMethod(
			"getSelectedRoutes",
			"()Ljava/util/List;"
		);
	}
	inline jint MediaRouter2_RoutingController::getVolume() const
	{
		return callMethod<jint>(
			"getVolume",
			"()I"
		);
	}
	inline jint MediaRouter2_RoutingController::getVolumeHandling() const
	{
		return callMethod<jint>(
			"getVolumeHandling",
			"()I"
		);
	}
	inline jint MediaRouter2_RoutingController::getVolumeMax() const
	{
		return callMethod<jint>(
			"getVolumeMax",
			"()I"
		);
	}
	inline jboolean MediaRouter2_RoutingController::isReleased() const
	{
		return callMethod<jboolean>(
			"isReleased",
			"()Z"
		);
	}
	inline void MediaRouter2_RoutingController::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void MediaRouter2_RoutingController::selectRoute(android::media::MediaRoute2Info arg0) const
	{
		callMethod<void>(
			"selectRoute",
			"(Landroid/media/MediaRoute2Info;)V",
			arg0.object()
		);
	}
	inline void MediaRouter2_RoutingController::setVolume(jint arg0) const
	{
		callMethod<void>(
			"setVolume",
			"(I)V",
			arg0
		);
	}
	inline JString MediaRouter2_RoutingController::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
