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
		
		MediaRouter_UserRouteInfo(QAndroidJniObject obj);
		// Constructors
		MediaRouter_UserRouteInfo() = default;
		
		// Methods
		QAndroidJniObject getRemoteControlClient();
		void requestSetVolume(jint arg0);
		void requestUpdateVolume(jint arg0);
		void setDescription(jstring arg0);
		void setDescription(const QString &arg0);
		void setIconDrawable(android::graphics::drawable::Drawable arg0);
		void setIconResource(jint arg0);
		void setName(jint arg0);
		void setName(jstring arg0);
		void setName(const QString &arg0);
		void setPlaybackStream(jint arg0);
		void setPlaybackType(jint arg0);
		void setRemoteControlClient(android::media::RemoteControlClient arg0);
		void setStatus(jstring arg0);
		void setStatus(const QString &arg0);
		void setVolume(jint arg0);
		void setVolumeCallback(android::media::MediaRouter_VolumeCallback arg0);
		void setVolumeHandling(jint arg0);
		void setVolumeMax(jint arg0);
	};
} // namespace android::media

