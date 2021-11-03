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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRouter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addCallback(jint arg0, android::media::MediaRouter_Callback arg1);
		void addCallback(jint arg0, android::media::MediaRouter_Callback arg1, jint arg2);
		void addUserRoute(android::media::MediaRouter_UserRouteInfo arg0);
		void clearUserRoutes();
		android::media::MediaRouter_RouteCategory createRouteCategory(jint arg0, jboolean arg1);
		android::media::MediaRouter_RouteCategory createRouteCategory(jstring arg0, jboolean arg1);
		android::media::MediaRouter_UserRouteInfo createUserRoute(android::media::MediaRouter_RouteCategory arg0);
		android::media::MediaRouter_RouteCategory getCategoryAt(jint arg0);
		jint getCategoryCount();
		android::media::MediaRouter_RouteInfo getDefaultRoute();
		android::media::MediaRouter_RouteInfo getRouteAt(jint arg0);
		jint getRouteCount();
		android::media::MediaRouter_RouteInfo getSelectedRoute(jint arg0);
		void removeCallback(android::media::MediaRouter_Callback arg0);
		void removeUserRoute(android::media::MediaRouter_UserRouteInfo arg0);
		void selectRoute(jint arg0, android::media::MediaRouter_RouteInfo arg1);
	};
} // namespace android::media

