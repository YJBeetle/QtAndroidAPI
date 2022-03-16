#pragma once

#include "../graphics/drawable/Drawable.def.hpp"
#include "./MediaRouter_RouteInfo.def.hpp"
#include "../../JString.hpp"
#include "./MediaRouter_RouteGroup.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void MediaRouter_RouteGroup::addRoute(android::media::MediaRouter_RouteInfo arg0) const
	{
		callMethod<void>(
			"addRoute",
			"(Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.object()
		);
	}
	inline void MediaRouter_RouteGroup::addRoute(android::media::MediaRouter_RouteInfo arg0, jint arg1) const
	{
		callMethod<void>(
			"addRoute",
			"(Landroid/media/MediaRouter$RouteInfo;I)V",
			arg0.object(),
			arg1
		);
	}
	inline android::media::MediaRouter_RouteInfo MediaRouter_RouteGroup::getRouteAt(jint arg0) const
	{
		return callObjectMethod(
			"getRouteAt",
			"(I)Landroid/media/MediaRouter$RouteInfo;",
			arg0
		);
	}
	inline jint MediaRouter_RouteGroup::getRouteCount() const
	{
		return callMethod<jint>(
			"getRouteCount",
			"()I"
		);
	}
	inline void MediaRouter_RouteGroup::removeRoute(android::media::MediaRouter_RouteInfo arg0) const
	{
		callMethod<void>(
			"removeRoute",
			"(Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.object()
		);
	}
	inline void MediaRouter_RouteGroup::removeRoute(jint arg0) const
	{
		callMethod<void>(
			"removeRoute",
			"(I)V",
			arg0
		);
	}
	inline void MediaRouter_RouteGroup::requestSetVolume(jint arg0) const
	{
		callMethod<void>(
			"requestSetVolume",
			"(I)V",
			arg0
		);
	}
	inline void MediaRouter_RouteGroup::requestUpdateVolume(jint arg0) const
	{
		callMethod<void>(
			"requestUpdateVolume",
			"(I)V",
			arg0
		);
	}
	inline void MediaRouter_RouteGroup::setIconDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setIconDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void MediaRouter_RouteGroup::setIconResource(jint arg0) const
	{
		callMethod<void>(
			"setIconResource",
			"(I)V",
			arg0
		);
	}
	inline JString MediaRouter_RouteGroup::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

// Base class headers
#include "./MediaRouter_RouteInfo.hpp"

