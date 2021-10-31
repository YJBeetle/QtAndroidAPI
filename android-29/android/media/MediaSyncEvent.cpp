#include "./MediaSyncEvent.hpp"

namespace android::media
{
	// Fields
	jint MediaSyncEvent::SYNC_EVENT_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaSyncEvent",
			"SYNC_EVENT_NONE"
		);
	}
	jint MediaSyncEvent::SYNC_EVENT_PRESENTATION_COMPLETE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaSyncEvent",
			"SYNC_EVENT_PRESENTATION_COMPLETE"
		);
	}
	
	// QAndroidJniObject forward
	MediaSyncEvent::MediaSyncEvent(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject MediaSyncEvent::createEvent(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaSyncEvent",
			"createEvent",
			"(I)Landroid/media/MediaSyncEvent;",
			arg0
		);
	}
	jint MediaSyncEvent::getAudioSessionId()
	{
		return callMethod<jint>(
			"getAudioSessionId",
			"()I"
		);
	}
	jint MediaSyncEvent::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	QAndroidJniObject MediaSyncEvent::setAudioSessionId(jint arg0)
	{
		return callObjectMethod(
			"setAudioSessionId",
			"(I)Landroid/media/MediaSyncEvent;",
			arg0
		);
	}
} // namespace android::media

