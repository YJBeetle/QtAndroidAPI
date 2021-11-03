#pragma once

#include "../../JObject.hpp"
#include "./MediaRouter_RouteInfo.hpp"

namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::media
{
	class MediaRouter_RouteInfo;
}

namespace android::media
{
	class MediaRouter_RouteGroup : public android::media::MediaRouter_RouteInfo
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRouter_RouteGroup(const char *className, const char *sig, Ts...agv) : android::media::MediaRouter_RouteInfo(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter_RouteGroup(QJniObject obj);
		
		// Constructors
		
		// Methods
		void addRoute(android::media::MediaRouter_RouteInfo arg0);
		void addRoute(android::media::MediaRouter_RouteInfo arg0, jint arg1);
		android::media::MediaRouter_RouteInfo getRouteAt(jint arg0);
		jint getRouteCount();
		void removeRoute(android::media::MediaRouter_RouteInfo arg0);
		void removeRoute(jint arg0);
		void requestSetVolume(jint arg0);
		void requestUpdateVolume(jint arg0);
		void setIconDrawable(android::graphics::drawable::Drawable arg0);
		void setIconResource(jint arg0);
		jstring toString();
	};
} // namespace android::media

