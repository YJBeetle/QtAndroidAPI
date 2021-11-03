#include "../content/Context.hpp"
#include "./MediaRouter_Callback.hpp"
#include "./MediaRouter_RouteCategory.hpp"
#include "./MediaRouter_RouteInfo.hpp"
#include "./MediaRouter_UserRouteInfo.hpp"
#include "../../JString.hpp"
#include "./MediaRouter.hpp"

namespace android::media
{
	// Fields
	jint MediaRouter::CALLBACK_FLAG_PERFORM_ACTIVE_SCAN()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter",
			"CALLBACK_FLAG_PERFORM_ACTIVE_SCAN"
		);
	}
	jint MediaRouter::CALLBACK_FLAG_UNFILTERED_EVENTS()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter",
			"CALLBACK_FLAG_UNFILTERED_EVENTS"
		);
	}
	jint MediaRouter::ROUTE_TYPE_LIVE_AUDIO()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter",
			"ROUTE_TYPE_LIVE_AUDIO"
		);
	}
	jint MediaRouter::ROUTE_TYPE_LIVE_VIDEO()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter",
			"ROUTE_TYPE_LIVE_VIDEO"
		);
	}
	jint MediaRouter::ROUTE_TYPE_USER()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter",
			"ROUTE_TYPE_USER"
		);
	}
	
	// QAndroidJniObject forward
	MediaRouter::MediaRouter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void MediaRouter::addCallback(jint arg0, android::media::MediaRouter_Callback arg1) const
	{
		callMethod<void>(
			"addCallback",
			"(ILandroid/media/MediaRouter$Callback;)V",
			arg0,
			arg1.object()
		);
	}
	void MediaRouter::addCallback(jint arg0, android::media::MediaRouter_Callback arg1, jint arg2) const
	{
		callMethod<void>(
			"addCallback",
			"(ILandroid/media/MediaRouter$Callback;I)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
	void MediaRouter::addUserRoute(android::media::MediaRouter_UserRouteInfo arg0) const
	{
		callMethod<void>(
			"addUserRoute",
			"(Landroid/media/MediaRouter$UserRouteInfo;)V",
			arg0.object()
		);
	}
	void MediaRouter::clearUserRoutes() const
	{
		callMethod<void>(
			"clearUserRoutes",
			"()V"
		);
	}
	android::media::MediaRouter_RouteCategory MediaRouter::createRouteCategory(jint arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"createRouteCategory",
			"(IZ)Landroid/media/MediaRouter$RouteCategory;",
			arg0,
			arg1
		);
	}
	android::media::MediaRouter_RouteCategory MediaRouter::createRouteCategory(JString arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"createRouteCategory",
			"(Ljava/lang/CharSequence;Z)Landroid/media/MediaRouter$RouteCategory;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::media::MediaRouter_UserRouteInfo MediaRouter::createUserRoute(android::media::MediaRouter_RouteCategory arg0) const
	{
		return callObjectMethod(
			"createUserRoute",
			"(Landroid/media/MediaRouter$RouteCategory;)Landroid/media/MediaRouter$UserRouteInfo;",
			arg0.object()
		);
	}
	android::media::MediaRouter_RouteCategory MediaRouter::getCategoryAt(jint arg0) const
	{
		return callObjectMethod(
			"getCategoryAt",
			"(I)Landroid/media/MediaRouter$RouteCategory;",
			arg0
		);
	}
	jint MediaRouter::getCategoryCount() const
	{
		return callMethod<jint>(
			"getCategoryCount",
			"()I"
		);
	}
	android::media::MediaRouter_RouteInfo MediaRouter::getDefaultRoute() const
	{
		return callObjectMethod(
			"getDefaultRoute",
			"()Landroid/media/MediaRouter$RouteInfo;"
		);
	}
	android::media::MediaRouter_RouteInfo MediaRouter::getRouteAt(jint arg0) const
	{
		return callObjectMethod(
			"getRouteAt",
			"(I)Landroid/media/MediaRouter$RouteInfo;",
			arg0
		);
	}
	jint MediaRouter::getRouteCount() const
	{
		return callMethod<jint>(
			"getRouteCount",
			"()I"
		);
	}
	android::media::MediaRouter_RouteInfo MediaRouter::getSelectedRoute(jint arg0) const
	{
		return callObjectMethod(
			"getSelectedRoute",
			"(I)Landroid/media/MediaRouter$RouteInfo;",
			arg0
		);
	}
	void MediaRouter::removeCallback(android::media::MediaRouter_Callback arg0) const
	{
		callMethod<void>(
			"removeCallback",
			"(Landroid/media/MediaRouter$Callback;)V",
			arg0.object()
		);
	}
	void MediaRouter::removeUserRoute(android::media::MediaRouter_UserRouteInfo arg0) const
	{
		callMethod<void>(
			"removeUserRoute",
			"(Landroid/media/MediaRouter$UserRouteInfo;)V",
			arg0.object()
		);
	}
	void MediaRouter::selectRoute(jint arg0, android::media::MediaRouter_RouteInfo arg1) const
	{
		callMethod<void>(
			"selectRoute",
			"(ILandroid/media/MediaRouter$RouteInfo;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::media

