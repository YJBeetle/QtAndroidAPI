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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRouter_RouteInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter_RouteInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::media::MediaRouter_RouteCategory getCategory();
		jstring getDescription();
		jint getDeviceType();
		android::media::MediaRouter_RouteGroup getGroup();
		android::graphics::drawable::Drawable getIconDrawable();
		jstring getName();
		jstring getName(android::content::Context arg0);
		jint getPlaybackStream();
		jint getPlaybackType();
		android::view::Display getPresentationDisplay();
		jstring getStatus();
		jint getSupportedTypes();
		jobject getTag();
		jint getVolume();
		jint getVolumeHandling();
		jint getVolumeMax();
		jboolean isConnecting();
		jboolean isEnabled();
		void requestSetVolume(jint arg0);
		void requestUpdateVolume(jint arg0);
		void setTag(jobject arg0);
		jstring toString();
	};
} // namespace android::media

