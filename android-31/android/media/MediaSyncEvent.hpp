#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class MediaSyncEvent : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint SYNC_EVENT_NONE();
		static jint SYNC_EVENT_PRESENTATION_COMPLETE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaSyncEvent(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaSyncEvent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::MediaSyncEvent createEvent(jint arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getAudioSessionId();
		jint getType();
		jint hashCode();
		android::media::MediaSyncEvent setAudioSessionId(jint arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media
