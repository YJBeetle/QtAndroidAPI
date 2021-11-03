#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MediaSyncEvent.hpp"

namespace android::media
{
	// Fields
	JObject MediaSyncEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.media.MediaSyncEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
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
	
	// QAndroidJniObject forward
	MediaSyncEvent::MediaSyncEvent(QAndroidJniObject obj) : JObject(obj) {}
	
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
	jint MediaSyncEvent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean MediaSyncEvent::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
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
	jint MediaSyncEvent::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	android::media::MediaSyncEvent MediaSyncEvent::setAudioSessionId(jint arg0)
	{
		return callObjectMethod(
			"setAudioSessionId",
			"(I)Landroid/media/MediaSyncEvent;",
			arg0
		);
	}
	JString MediaSyncEvent::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void MediaSyncEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

