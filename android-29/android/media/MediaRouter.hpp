#pragma once

#include "../content/Context.def.hpp"
#include "./MediaRouter_Callback.def.hpp"
#include "./MediaRouter_RouteCategory.def.hpp"
#include "./MediaRouter_RouteInfo.def.hpp"
#include "./MediaRouter_UserRouteInfo.def.hpp"
#include "../../JString.hpp"
#include "./MediaRouter.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaRouter::CALLBACK_FLAG_PERFORM_ACTIVE_SCAN()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter",
			"CALLBACK_FLAG_PERFORM_ACTIVE_SCAN"
		);
	}
	inline jint MediaRouter::CALLBACK_FLAG_UNFILTERED_EVENTS()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter",
			"CALLBACK_FLAG_UNFILTERED_EVENTS"
		);
	}
	inline jint MediaRouter::ROUTE_TYPE_LIVE_AUDIO()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter",
			"ROUTE_TYPE_LIVE_AUDIO"
		);
	}
	inline jint MediaRouter::ROUTE_TYPE_LIVE_VIDEO()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter",
			"ROUTE_TYPE_LIVE_VIDEO"
		);
	}
	inline jint MediaRouter::ROUTE_TYPE_USER()
	{
		return getStaticField<jint>(
			"android.media.MediaRouter",
			"ROUTE_TYPE_USER"
		);
	}
	
	// Constructors
	
	// Methods
	inline void MediaRouter::addCallback(jint arg0, android::media::MediaRouter_Callback arg1) const
	{
		callMethod<void>(
			"addCallback",
			"(ILandroid/media/MediaRouter$Callback;)V",
			arg0,
			arg1.object()
		);
	}
	inline void MediaRouter::addCallback(jint arg0, android::media::MediaRouter_Callback arg1, jint arg2) const
	{
		callMethod<void>(
			"addCallback",
			"(ILandroid/media/MediaRouter$Callback;I)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
	inline void MediaRouter::addUserRoute(android::media::MediaRouter_UserRouteInfo arg0) const
	{
		callMethod<void>(
			"addUserRoute",
			"(Landroid/media/MediaRouter$UserRouteInfo;)V",
			arg0.object()
		);
	}
	inline void MediaRouter::clearUserRoutes() const
	{
		callMethod<void>(
			"clearUserRoutes",
			"()V"
		);
	}
	inline android::media::MediaRouter_RouteCategory MediaRouter::createRouteCategory(jint arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"createRouteCategory",
			"(IZ)Landroid/media/MediaRouter$RouteCategory;",
			arg0,
			arg1
		);
	}
	inline android::media::MediaRouter_RouteCategory MediaRouter::createRouteCategory(JString arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"createRouteCategory",
			"(Ljava/lang/CharSequence;Z)Landroid/media/MediaRouter$RouteCategory;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::media::MediaRouter_UserRouteInfo MediaRouter::createUserRoute(android::media::MediaRouter_RouteCategory arg0) const
	{
		return callObjectMethod(
			"createUserRoute",
			"(Landroid/media/MediaRouter$RouteCategory;)Landroid/media/MediaRouter$UserRouteInfo;",
			arg0.object()
		);
	}
	inline android::media::MediaRouter_RouteCategory MediaRouter::getCategoryAt(jint arg0) const
	{
		return callObjectMethod(
			"getCategoryAt",
			"(I)Landroid/media/MediaRouter$RouteCategory;",
			arg0
		);
	}
	inline jint MediaRouter::getCategoryCount() const
	{
		return callMethod<jint>(
			"getCategoryCount",
			"()I"
		);
	}
	inline android::media::MediaRouter_RouteInfo MediaRouter::getDefaultRoute() const
	{
		return callObjectMethod(
			"getDefaultRoute",
			"()Landroid/media/MediaRouter$RouteInfo;"
		);
	}
	inline android::media::MediaRouter_RouteInfo MediaRouter::getRouteAt(jint arg0) const
	{
		return callObjectMethod(
			"getRouteAt",
			"(I)Landroid/media/MediaRouter$RouteInfo;",
			arg0
		);
	}
	inline jint MediaRouter::getRouteCount() const
	{
		return callMethod<jint>(
			"getRouteCount",
			"()I"
		);
	}
	inline android::media::MediaRouter_RouteInfo MediaRouter::getSelectedRoute(jint arg0) const
	{
		return callObjectMethod(
			"getSelectedRoute",
			"(I)Landroid/media/MediaRouter$RouteInfo;",
			arg0
		);
	}
	inline void MediaRouter::removeCallback(android::media::MediaRouter_Callback arg0) const
	{
		callMethod<void>(
			"removeCallback",
			"(Landroid/media/MediaRouter$Callback;)V",
			arg0.object()
		);
	}
	inline void MediaRouter::removeUserRoute(android::media::MediaRouter_UserRouteInfo arg0) const
	{
		callMethod<void>(
			"removeUserRoute",
			"(Landroid/media/MediaRouter$UserRouteInfo;)V",
			arg0.object()
		);
	}
	inline void MediaRouter::selectRoute(jint arg0, android::media::MediaRouter_RouteInfo arg1) const
	{
		callMethod<void>(
			"selectRoute",
			"(ILandroid/media/MediaRouter$RouteInfo;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
