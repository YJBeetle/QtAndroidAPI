#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MediaSyncEvent.def.hpp"

namespace android::media
{
	// Fields
	inline JObject MediaSyncEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.media.MediaSyncEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint MediaSyncEvent::SYNC_EVENT_NONE()
	{
		return getStaticField<jint>(
			"android.media.MediaSyncEvent",
			"SYNC_EVENT_NONE"
		);
	}
	inline jint MediaSyncEvent::SYNC_EVENT_PRESENTATION_COMPLETE()
	{
		return getStaticField<jint>(
			"android.media.MediaSyncEvent",
			"SYNC_EVENT_PRESENTATION_COMPLETE"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::media::MediaSyncEvent MediaSyncEvent::createEvent(jint arg0)
	{
		return callStaticObjectMethod(
			"android.media.MediaSyncEvent",
			"createEvent",
			"(I)Landroid/media/MediaSyncEvent;",
			arg0
		);
	}
	inline jint MediaSyncEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean MediaSyncEvent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint MediaSyncEvent::getAudioSessionId() const
	{
		return callMethod<jint>(
			"getAudioSessionId",
			"()I"
		);
	}
	inline jint MediaSyncEvent::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jint MediaSyncEvent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline android::media::MediaSyncEvent MediaSyncEvent::setAudioSessionId(jint arg0) const
	{
		return callObjectMethod(
			"setAudioSessionId",
			"(I)Landroid/media/MediaSyncEvent;",
			arg0
		);
	}
	inline JString MediaSyncEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void MediaSyncEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
