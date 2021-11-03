#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
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
	class MediaRouter_RouteGroup;
}
namespace android::view
{
	class Display;
}
class JString;
class JObject;
class JString;

namespace android::media
{
	class MediaRouter_RouteInfo : public JObject
	{
	public:
		// Fields
		static jint DEVICE_TYPE_BLUETOOTH();
		static jint DEVICE_TYPE_SPEAKER();
		static jint DEVICE_TYPE_TV();
		static jint DEVICE_TYPE_UNKNOWN();
		static jint PLAYBACK_TYPE_LOCAL();
		static jint PLAYBACK_TYPE_REMOTE();
		static jint PLAYBACK_VOLUME_FIXED();
		static jint PLAYBACK_VOLUME_VARIABLE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRouter_RouteInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter_RouteInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::media::MediaRouter_RouteCategory getCategory();
		JString getDescription();
		jint getDeviceType();
		android::media::MediaRouter_RouteGroup getGroup();
		android::graphics::drawable::Drawable getIconDrawable();
		JString getName();
		JString getName(android::content::Context arg0);
		jint getPlaybackStream();
		jint getPlaybackType();
		android::view::Display getPresentationDisplay();
		JString getStatus();
		jint getSupportedTypes();
		JObject getTag();
		jint getVolume();
		jint getVolumeHandling();
		jint getVolumeMax();
		jboolean isConnecting();
		jboolean isEnabled();
		void requestSetVolume(jint arg0);
		void requestUpdateVolume(jint arg0);
		void setTag(JObject arg0);
		JString toString();
	};
} // namespace android::media

