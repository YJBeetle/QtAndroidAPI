#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JObject;
class JString;

namespace android::media
{
	class MediaRoute2Info : public JObject
	{
	public:
		// Fields
		static jint CONNECTION_STATE_CONNECTED();
		static jint CONNECTION_STATE_CONNECTING();
		static jint CONNECTION_STATE_DISCONNECTED();
		static JObject CREATOR();
		static JString FEATURE_LIVE_AUDIO();
		static JString FEATURE_LIVE_VIDEO();
		static JString FEATURE_REMOTE_AUDIO_PLAYBACK();
		static JString FEATURE_REMOTE_PLAYBACK();
		static JString FEATURE_REMOTE_VIDEO_PLAYBACK();
		static jint PLAYBACK_VOLUME_FIXED();
		static jint PLAYBACK_VOLUME_VARIABLE();
		static jint TYPE_BLE_HEADSET();
		static jint TYPE_BLUETOOTH_A2DP();
		static jint TYPE_BUILTIN_SPEAKER();
		static jint TYPE_DOCK();
		static jint TYPE_GROUP();
		static jint TYPE_HDMI();
		static jint TYPE_HEARING_AID();
		static jint TYPE_REMOTE_AUDIO_VIDEO_RECEIVER();
		static jint TYPE_REMOTE_SPEAKER();
		static jint TYPE_REMOTE_TV();
		static jint TYPE_UNKNOWN();
		static jint TYPE_USB_ACCESSORY();
		static jint TYPE_USB_DEVICE();
		static jint TYPE_USB_HEADSET();
		static jint TYPE_WIRED_HEADPHONES();
		static jint TYPE_WIRED_HEADSET();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRoute2Info(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRoute2Info(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getClientPackageName() const;
		jint getConnectionState() const;
		JObject getDeduplicationIds() const;
		JString getDescription() const;
		android::os::Bundle getExtras() const;
		JObject getFeatures() const;
		android::net::Uri getIconUri() const;
		JString getId() const;
		JString getName() const;
		jint getType() const;
		jint getVolume() const;
		jint getVolumeHandling() const;
		jint getVolumeMax() const;
		jint hashCode() const;
		jboolean isSystemRoute() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media

