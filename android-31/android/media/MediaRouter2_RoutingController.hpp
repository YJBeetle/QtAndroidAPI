#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaRoute2Info;
}
namespace android::media
{
	class MediaRouter2;
}
namespace android::os
{
	class Bundle;
}

namespace android::media
{
	class MediaRouter2_RoutingController : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRouter2_RoutingController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter2_RoutingController(QJniObject obj);
		
		// Constructors
		
		// Methods
		void deselectRoute(android::media::MediaRoute2Info arg0);
		android::os::Bundle getControlHints();
		JObject getDeselectableRoutes();
		jstring getId();
		JObject getSelectableRoutes();
		JObject getSelectedRoutes();
		jint getVolume();
		jint getVolumeHandling();
		jint getVolumeMax();
		jboolean isReleased();
		void release();
		void selectRoute(android::media::MediaRoute2Info arg0);
		void setVolume(jint arg0);
		jstring toString();
	};
} // namespace android::media

