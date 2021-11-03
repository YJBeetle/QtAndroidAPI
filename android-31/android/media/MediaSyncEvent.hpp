#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::media
{
	class MediaSyncEvent : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint SYNC_EVENT_NONE();
		static jint SYNC_EVENT_PRESENTATION_COMPLETE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaSyncEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaSyncEvent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::MediaSyncEvent createEvent(jint arg0);
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getAudioSessionId();
		jint getType();
		jint hashCode();
		android::media::MediaSyncEvent setAudioSessionId(jint arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

