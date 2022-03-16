#pragma once

#include "./MediaRouter_Callback.hpp"

namespace android::media
{
	class MediaRouter;
}
namespace android::media
{
	class MediaRouter_RouteGroup;
}
namespace android::media
{
	class MediaRouter_RouteInfo;
}

namespace android::media
{
	class MediaRouter_SimpleCallback : public android::media::MediaRouter_Callback
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRouter_SimpleCallback(const char *className, const char *sig, Ts...agv) : android::media::MediaRouter_Callback(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter_SimpleCallback(QAndroidJniObject obj) : android::media::MediaRouter_Callback(obj) {}
		
		// Constructors
		MediaRouter_SimpleCallback();
		
		// Methods
		void onRouteAdded(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1) const;
		void onRouteChanged(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1) const;
		void onRouteGrouped(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1, android::media::MediaRouter_RouteGroup arg2, jint arg3) const;
		void onRouteRemoved(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1) const;
		void onRouteSelected(android::media::MediaRouter arg0, jint arg1, android::media::MediaRouter_RouteInfo arg2) const;
		void onRouteUngrouped(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1, android::media::MediaRouter_RouteGroup arg2) const;
		void onRouteUnselected(android::media::MediaRouter arg0, jint arg1, android::media::MediaRouter_RouteInfo arg2) const;
		void onRouteVolumeChanged(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1) const;
	};
} // namespace android::media

