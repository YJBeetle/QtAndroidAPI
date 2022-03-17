#pragma once

#include "./MediaRouter_RouteInfo.def.hpp"

namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::media
{
	class MediaRouter_RouteCategory;
}
namespace android::media
{
	class MediaRouter_RouteInfo;
}
class JString;

namespace android::media
{
	class MediaRouter_RouteGroup : public android::media::MediaRouter_RouteInfo
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRouter_RouteGroup(const char *className, const char *sig, Ts...agv) : android::media::MediaRouter_RouteInfo(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter_RouteGroup(QAndroidJniObject obj) : android::media::MediaRouter_RouteInfo(obj) {}
		
		// Constructors
		
		// Methods
		void addRoute(android::media::MediaRouter_RouteInfo arg0) const;
		void addRoute(android::media::MediaRouter_RouteInfo arg0, jint arg1) const;
		android::media::MediaRouter_RouteInfo getRouteAt(jint arg0) const;
		jint getRouteCount() const;
		void removeRoute(android::media::MediaRouter_RouteInfo arg0) const;
		void removeRoute(jint arg0) const;
		void requestSetVolume(jint arg0) const;
		void requestUpdateVolume(jint arg0) const;
		void setIconDrawable(android::graphics::drawable::Drawable arg0) const;
		void setIconResource(jint arg0) const;
		JString toString() const;
	};
} // namespace android::media

