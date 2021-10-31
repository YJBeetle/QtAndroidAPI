#pragma once

#include "../../__JniBaseClass.hpp"
#include "./MediaRouter_RouteInfo.hpp"

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
	class MediaRouter_VolumeCallback;
}
namespace android::media
{
	class RemoteControlClient;
}

namespace android::media
{
	class MediaRouter_UserRouteInfo : public android::media::MediaRouter_RouteInfo
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRouter_UserRouteInfo(const char *className, const char *sig, Ts...agv) : android::media::MediaRouter_RouteInfo(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter_UserRouteInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::media::RemoteControlClient getRemoteControlClient();
		void requestSetVolume(jint arg0);
		void requestUpdateVolume(jint arg0);
		void setDescription(jstring arg0);
		void setIconDrawable(android::graphics::drawable::Drawable arg0);
		void setIconResource(jint arg0);
		void setName(jint arg0);
		void setName(jstring arg0);
		void setPlaybackStream(jint arg0);
		void setPlaybackType(jint arg0);
		void setRemoteControlClient(android::media::RemoteControlClient arg0);
		void setStatus(jstring arg0);
		void setVolume(jint arg0);
		void setVolumeCallback(android::media::MediaRouter_VolumeCallback arg0);
		void setVolumeHandling(jint arg0);
		void setVolumeMax(jint arg0);
	};
} // namespace android::media

