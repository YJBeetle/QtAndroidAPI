#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaRouter2_RoutingController;
}

namespace android::media
{
	class MediaRouter2_ControllerCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRouter2_ControllerCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter2_ControllerCallback(QAndroidJniObject obj);
		
		// Constructors
		MediaRouter2_ControllerCallback();
		
		// Methods
		void onControllerUpdated(android::media::MediaRouter2_RoutingController arg0);
	};
} // namespace android::media

