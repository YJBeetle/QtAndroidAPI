#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaRouter2_RoutingController;
}

namespace android::media
{
	class MediaRouter2_ControllerCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRouter2_ControllerCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter2_ControllerCallback(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaRouter2_ControllerCallback();
		
		// Methods
		void onControllerUpdated(android::media::MediaRouter2_RoutingController arg0) const;
	};
} // namespace android::media

