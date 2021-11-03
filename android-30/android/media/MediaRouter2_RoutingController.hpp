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
class JString;

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
		void deselectRoute(android::media::MediaRoute2Info arg0) const;
		android::os::Bundle getControlHints() const;
		JObject getDeselectableRoutes() const;
		JString getId() const;
		JObject getSelectableRoutes() const;
		JObject getSelectedRoutes() const;
		jint getVolume() const;
		jint getVolumeHandling() const;
		jint getVolumeMax() const;
		jboolean isReleased() const;
		void release() const;
		void selectRoute(android::media::MediaRoute2Info arg0) const;
		void setVolume(jint arg0) const;
		JString toString() const;
	};
} // namespace android::media

