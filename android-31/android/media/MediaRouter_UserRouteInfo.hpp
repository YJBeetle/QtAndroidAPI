#pragma once

#include "./MediaRouter_RouteInfo.hpp"

namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::media
{
	class MediaRouter_VolumeCallback;
}
namespace android::media
{
	class RemoteControlClient;
}
class JString;

namespace android::media
{
	class MediaRouter_UserRouteInfo : public android::media::MediaRouter_RouteInfo
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRouter_UserRouteInfo(const char *className, const char *sig, Ts...agv) : android::media::MediaRouter_RouteInfo(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter_UserRouteInfo(QAndroidJniObject obj) : android::media::MediaRouter_RouteInfo(obj) {}
		
		// Constructors
		
		// Methods
		android::media::RemoteControlClient getRemoteControlClient() const;
		void requestSetVolume(jint arg0) const;
		void requestUpdateVolume(jint arg0) const;
		void setDescription(JString arg0) const;
		void setIconDrawable(android::graphics::drawable::Drawable arg0) const;
		void setIconResource(jint arg0) const;
		void setName(jint arg0) const;
		void setName(JString arg0) const;
		void setPlaybackStream(jint arg0) const;
		void setPlaybackType(jint arg0) const;
		void setRemoteControlClient(android::media::RemoteControlClient arg0) const;
		void setStatus(JString arg0) const;
		void setVolume(jint arg0) const;
		void setVolumeCallback(android::media::MediaRouter_VolumeCallback arg0) const;
		void setVolumeHandling(jint arg0) const;
		void setVolumeMax(jint arg0) const;
	};
} // namespace android::media

