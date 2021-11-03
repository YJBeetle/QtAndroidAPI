#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaRouter_Callback;
}
namespace android::media
{
	class MediaRouter_RouteCategory;
}
namespace android::media
{
	class MediaRouter_RouteInfo;
}
namespace android::media
{
	class MediaRouter_UserRouteInfo;
}
class JString;

namespace android::media
{
	class MediaRouter : public JObject
	{
	public:
		// Fields
		static jint CALLBACK_FLAG_PERFORM_ACTIVE_SCAN();
		static jint CALLBACK_FLAG_UNFILTERED_EVENTS();
		static jint ROUTE_TYPE_LIVE_AUDIO();
		static jint ROUTE_TYPE_LIVE_VIDEO();
		static jint ROUTE_TYPE_USER();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRouter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter(QJniObject obj);
		
		// Constructors
		
		// Methods
		void addCallback(jint arg0, android::media::MediaRouter_Callback arg1) const;
		void addCallback(jint arg0, android::media::MediaRouter_Callback arg1, jint arg2) const;
		void addUserRoute(android::media::MediaRouter_UserRouteInfo arg0) const;
		void clearUserRoutes() const;
		android::media::MediaRouter_RouteCategory createRouteCategory(jint arg0, jboolean arg1) const;
		android::media::MediaRouter_RouteCategory createRouteCategory(JString arg0, jboolean arg1) const;
		android::media::MediaRouter_UserRouteInfo createUserRoute(android::media::MediaRouter_RouteCategory arg0) const;
		android::media::MediaRouter_RouteCategory getCategoryAt(jint arg0) const;
		jint getCategoryCount() const;
		android::media::MediaRouter_RouteInfo getDefaultRoute() const;
		android::media::MediaRouter_RouteInfo getRouteAt(jint arg0) const;
		jint getRouteCount() const;
		android::media::MediaRouter_RouteInfo getSelectedRoute(jint arg0) const;
		void removeCallback(android::media::MediaRouter_Callback arg0) const;
		void removeUserRoute(android::media::MediaRouter_UserRouteInfo arg0) const;
		void selectRoute(jint arg0, android::media::MediaRouter_RouteInfo arg1) const;
	};
} // namespace android::media

