#pragma once

#include "../../__JniBaseClass.hpp"

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
	class MediaRouter_RouteInfo : public __JniBaseClass
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
		template<typename ...Ts> explicit MediaRouter_RouteInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter_RouteInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject getCategory();
		jstring getDescription();
		jint getDeviceType();
		QAndroidJniObject getGroup();
		QAndroidJniObject getIconDrawable();
		jstring getName();
		jstring getName(android::content::Context arg0);
		jint getPlaybackStream();
		jint getPlaybackType();
		QAndroidJniObject getPresentationDisplay();
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

