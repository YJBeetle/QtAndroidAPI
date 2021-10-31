#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaSyncEvent : public __JniBaseClass
	{
	public:
		// Fields
		static jint SYNC_EVENT_NONE();
		static jint SYNC_EVENT_PRESENTATION_COMPLETE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaSyncEvent(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaSyncEvent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::MediaSyncEvent createEvent(jint arg0);
		jint getAudioSessionId();
		jint getType();
		android::media::MediaSyncEvent setAudioSessionId(jint arg0);
	};
} // namespace android::media
