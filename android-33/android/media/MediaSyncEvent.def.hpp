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
		MediaSyncEvent(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::media::MediaSyncEvent createEvent(jint arg0);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getAudioSessionId() const;
		jint getType() const;
		jint hashCode() const;
		android::media::MediaSyncEvent setAudioSessionId(jint arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media

