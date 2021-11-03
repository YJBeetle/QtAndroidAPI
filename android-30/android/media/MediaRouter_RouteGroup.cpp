#include "../graphics/drawable/Drawable.hpp"
#include "./MediaRouter_RouteInfo.hpp"
#include "../../JString.hpp"
#include "./MediaRouter_RouteGroup.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaRouter_RouteGroup::MediaRouter_RouteGroup(QJniObject obj) : android::media::MediaRouter_RouteInfo(obj) {}
	
	// Constructors
	
	// Methods
	void MediaRouter_RouteGroup::addRoute(android::media::MediaRouter_RouteInfo arg0)
	{
		callMethod<void>(
			"addRoute",
			"(Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.object()
		);
	}
	void MediaRouter_RouteGroup::addRoute(android::media::MediaRouter_RouteInfo arg0, jint arg1)
	{
		callMethod<void>(
			"addRoute",
			"(Landroid/media/MediaRouter$RouteInfo;I)V",
			arg0.object(),
			arg1
		);
	}
	android::media::MediaRouter_RouteInfo MediaRouter_RouteGroup::getRouteAt(jint arg0)
	{
		return callObjectMethod(
			"getRouteAt",
			"(I)Landroid/media/MediaRouter$RouteInfo;",
			arg0
		);
	}
	jint MediaRouter_RouteGroup::getRouteCount()
	{
		return callMethod<jint>(
			"getRouteCount",
			"()I"
		);
	}
	void MediaRouter_RouteGroup::removeRoute(android::media::MediaRouter_RouteInfo arg0)
	{
		callMethod<void>(
			"removeRoute",
			"(Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.object()
		);
	}
	void MediaRouter_RouteGroup::removeRoute(jint arg0)
	{
		callMethod<void>(
			"removeRoute",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_RouteGroup::requestSetVolume(jint arg0)
	{
		callMethod<void>(
			"requestSetVolume",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_RouteGroup::requestUpdateVolume(jint arg0)
	{
		callMethod<void>(
			"requestUpdateVolume",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_RouteGroup::setIconDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setIconDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void MediaRouter_RouteGroup::setIconResource(jint arg0)
	{
		callMethod<void>(
			"setIconResource",
			"(I)V",
			arg0
		);
	}
	JString MediaRouter_RouteGroup::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

