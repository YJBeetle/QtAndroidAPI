#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaRouter_RouteInfo;
}

namespace android::media
{
	class MediaRouter_VolumeCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRouter_VolumeCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter_VolumeCallback(QAndroidJniObject obj);
		
		// Constructors
		MediaRouter_VolumeCallback();
		
		// Methods
		void onVolumeSetRequest(android::media::MediaRouter_RouteInfo arg0, jint arg1);
		void onVolumeUpdateRequest(android::media::MediaRouter_RouteInfo arg0, jint arg1);
	};
} // namespace android::media

