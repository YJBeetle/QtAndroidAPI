#pragma once

#include "../MediaDescription.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./MediaSession_QueueItem.def.hpp"

namespace android::media::session
{
	// Fields
	inline JObject MediaSession_QueueItem::CREATOR()
	{
		return getStaticObjectField(
			"android.media.session.MediaSession$QueueItem",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint MediaSession_QueueItem::UNKNOWN_ID()
	{
		return getStaticField<jint>(
			"android.media.session.MediaSession$QueueItem",
			"UNKNOWN_ID"
		);
	}
	
	// Constructors
	inline MediaSession_QueueItem::MediaSession_QueueItem(android::media::MediaDescription arg0, jlong arg1)
		: JObject(
			"android.media.session.MediaSession$QueueItem",
			"(Landroid/media/MediaDescription;J)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jint MediaSession_QueueItem::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean MediaSession_QueueItem::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::media::MediaDescription MediaSession_QueueItem::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Landroid/media/MediaDescription;"
		);
	}
	inline jlong MediaSession_QueueItem::getQueueId() const
	{
		return callMethod<jlong>(
			"getQueueId",
			"()J"
		);
	}
	inline JString MediaSession_QueueItem::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void MediaSession_QueueItem::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::session

// Base class headers

