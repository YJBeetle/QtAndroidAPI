#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaSyncEvent : public JObject
	{
	public:
		// Fields
		static jint SYNC_EVENT_NONE();
		static jint SYNC_EVENT_PRESENTATION_COMPLETE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaSyncEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaSyncEvent(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::media::MediaSyncEvent createEvent(jint arg0);
		jint getAudioSessionId() const;
		jint getType() const;
		android::media::MediaSyncEvent setAudioSessionId(jint arg0) const;
	};
} // namespace android::media

