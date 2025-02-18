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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRouter_RouteInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter_RouteInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::media::MediaRouter_RouteCategory getCategory() const;
		JString getDescription() const;
		jint getDeviceType() const;
		android::media::MediaRouter_RouteGroup getGroup() const;
		android::graphics::drawable::Drawable getIconDrawable() const;
		JString getName() const;
		JString getName(android::content::Context arg0) const;
		jint getPlaybackStream() const;
		jint getPlaybackType() const;
		android::view::Display getPresentationDisplay() const;
		JString getStatus() const;
		jint getSupportedTypes() const;
		JObject getTag() const;
		jint getVolume() const;
		jint getVolumeHandling() const;
		jint getVolumeMax() const;
		jboolean isConnecting() const;
		jboolean isEnabled() const;
		void requestSetVolume(jint arg0) const;
		void requestUpdateVolume(jint arg0) const;
		void setTag(JObject arg0) const;
		JString toString() const;
	};
} // namespace android::media

