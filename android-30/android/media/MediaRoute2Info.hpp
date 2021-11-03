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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRoute2Info(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRoute2Info(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		JString getClientPackageName();
		jint getConnectionState();
		JString getDescription();
		android::os::Bundle getExtras();
		JObject getFeatures();
		android::net::Uri getIconUri();
		JString getId();
		JString getName();
		jint getVolume();
		jint getVolumeHandling();
		jint getVolumeMax();
		jint hashCode();
		jboolean isSystemRoute();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

