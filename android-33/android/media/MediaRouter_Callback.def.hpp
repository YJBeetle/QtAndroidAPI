#pragma once

#include "../../JObject.hpp"

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
	class MediaRouter_Callback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRouter_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter_Callback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaRouter_Callback();
		
		// Methods
		void onRouteAdded(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1) const;
		void onRouteChanged(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1) const;
		void onRouteGrouped(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1, android::media::MediaRouter_RouteGroup arg2, jint arg3) const;
		void onRoutePresentationDisplayChanged(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1) const;
		void onRouteRemoved(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1) const;
		void onRouteSelected(android::media::MediaRouter arg0, jint arg1, android::media::MediaRouter_RouteInfo arg2) const;
		void onRouteUngrouped(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1, android::media::MediaRouter_RouteGroup arg2) const;
		void onRouteUnselected(android::media::MediaRouter arg0, jint arg1, android::media::MediaRouter_RouteInfo arg2) const;
		void onRouteVolumeChanged(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1) const;
	};
} // namespace android::media

