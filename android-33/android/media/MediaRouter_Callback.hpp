#pragma once

#include "./MediaRouter.def.hpp"
#include "./MediaRouter_RouteGroup.def.hpp"
#include "./MediaRouter_RouteInfo.def.hpp"
#include "./MediaRouter_Callback.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaRouter_Callback::MediaRouter_Callback()
		: JObject(
			"android.media.MediaRouter$Callback",
			"()V"
		) {}
	
	// Methods
	inline void MediaRouter_Callback::onRouteAdded(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1) const
	{
		callMethod<void>(
			"onRouteAdded",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaRouter_Callback::onRouteChanged(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1) const
	{
		callMethod<void>(
			"onRouteChanged",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaRouter_Callback::onRouteGrouped(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1, android::media::MediaRouter_RouteGroup arg2, jint arg3) const
	{
		callMethod<void>(
			"onRouteGrouped",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;Landroid/media/MediaRouter$RouteGroup;I)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	inline void MediaRouter_Callback::onRoutePresentationDisplayChanged(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1) const
	{
		callMethod<void>(
			"onRoutePresentationDisplayChanged",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaRouter_Callback::onRouteRemoved(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1) const
	{
		callMethod<void>(
			"onRouteRemoved",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaRouter_Callback::onRouteSelected(android::media::MediaRouter arg0, jint arg1, android::media::MediaRouter_RouteInfo arg2) const
	{
		callMethod<void>(
			"onRouteSelected",
			"(Landroid/media/MediaRouter;ILandroid/media/MediaRouter$RouteInfo;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void MediaRouter_Callback::onRouteUngrouped(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1, android::media::MediaRouter_RouteGroup arg2) const
	{
		callMethod<void>(
			"onRouteUngrouped",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;Landroid/media/MediaRouter$RouteGroup;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void MediaRouter_Callback::onRouteUnselected(android::media::MediaRouter arg0, jint arg1, android::media::MediaRouter_RouteInfo arg2) const
	{
		callMethod<void>(
			"onRouteUnselected",
			"(Landroid/media/MediaRouter;ILandroid/media/MediaRouter$RouteInfo;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void MediaRouter_Callback::onRouteVolumeChanged(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1) const
	{
		callMethod<void>(
			"onRouteVolumeChanged",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
