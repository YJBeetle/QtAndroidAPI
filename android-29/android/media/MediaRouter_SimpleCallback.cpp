#include "./MediaRouter.hpp"
#include "./MediaRouter_RouteGroup.hpp"
#include "./MediaRouter_RouteInfo.hpp"
#include "./MediaRouter_SimpleCallback.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaRouter_SimpleCallback::MediaRouter_SimpleCallback(QJniObject obj) : android::media::MediaRouter_Callback(obj) {}
	
	// Constructors
	MediaRouter_SimpleCallback::MediaRouter_SimpleCallback()
		: android::media::MediaRouter_Callback(
			"android.media.MediaRouter$SimpleCallback",
			"()V"
		) {}
	
	// Methods
	void MediaRouter_SimpleCallback::onRouteAdded(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1) const
	{
		callMethod<void>(
			"onRouteAdded",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaRouter_SimpleCallback::onRouteChanged(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1) const
	{
		callMethod<void>(
			"onRouteChanged",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaRouter_SimpleCallback::onRouteGrouped(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1, android::media::MediaRouter_RouteGroup arg2, jint arg3) const
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
	void MediaRouter_SimpleCallback::onRouteRemoved(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1) const
	{
		callMethod<void>(
			"onRouteRemoved",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaRouter_SimpleCallback::onRouteSelected(android::media::MediaRouter arg0, jint arg1, android::media::MediaRouter_RouteInfo arg2) const
	{
		callMethod<void>(
			"onRouteSelected",
			"(Landroid/media/MediaRouter;ILandroid/media/MediaRouter$RouteInfo;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void MediaRouter_SimpleCallback::onRouteUngrouped(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1, android::media::MediaRouter_RouteGroup arg2) const
	{
		callMethod<void>(
			"onRouteUngrouped",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;Landroid/media/MediaRouter$RouteGroup;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void MediaRouter_SimpleCallback::onRouteUnselected(android::media::MediaRouter arg0, jint arg1, android::media::MediaRouter_RouteInfo arg2) const
	{
		callMethod<void>(
			"onRouteUnselected",
			"(Landroid/media/MediaRouter;ILandroid/media/MediaRouter$RouteInfo;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void MediaRouter_SimpleCallback::onRouteVolumeChanged(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1) const
	{
		callMethod<void>(
			"onRouteVolumeChanged",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::media

