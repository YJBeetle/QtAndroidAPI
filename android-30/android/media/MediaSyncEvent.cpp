#include "./MediaSyncEvent.hpp"

namespace android::media
{
	// Fields
	jint MediaSyncEvent::SYNC_EVENT_NONE()
	{
		return getStaticField<jint>(
			"android.media.MediaSyncEvent",
			"SYNC_EVENT_NONE"
		);
	}
	jint MediaSyncEvent::SYNC_EVENT_PRESENTATION_COMPLETE()
	{
		return getStaticField<jint>(
			"android.media.MediaSyncEvent",
			"SYNC_EVENT_PRESENTATION_COMPLETE"
		);
	}
	
	// Constructors
	
	// Methods
	android::media::MediaSyncEvent MediaSyncEvent::createEvent(jint arg0)
	{
		return callStaticObjectMethod(
			"android.media.MediaSyncEvent",
			"createEvent",
			"(I)Landroid/media/MediaSyncEvent;",
			arg0
		);
	}
	jint MediaSyncEvent::getAudioSessionId() const
	{
		return callMethod<jint>(
			"getAudioSessionId",
			"()I"
		);
	}
	jint MediaSyncEvent::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	android::media::MediaSyncEvent MediaSyncEvent::setAudioSessionId(jint arg0) const
	{
		return callObjectMethod(
			"setAudioSessionId",
			"(I)Landroid/media/MediaSyncEvent;",
			arg0
		);
	}
} // namespace android::media

