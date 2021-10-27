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
		
		MediaSyncEvent(QAndroidJniObject obj);
		// Constructors
		MediaSyncEvent() = default;
		
		// Methods
		static QAndroidJniObject createEvent(jint arg0);
		jint getAudioSessionId();
		jint getType();
		QAndroidJniObject setAudioSessionId(jint arg0);
	};
} // namespace android::media

