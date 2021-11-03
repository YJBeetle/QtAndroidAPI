#include "../MediaDescription.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./MediaSession_QueueItem.hpp"

namespace android::media::session
{
	// Fields
	JObject MediaSession_QueueItem::CREATOR()
	{
		return getStaticObjectField(
			"android.media.session.MediaSession$QueueItem",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint MediaSession_QueueItem::UNKNOWN_ID()
	{
		return getStaticField<jint>(
			"android.media.session.MediaSession$QueueItem",
			"UNKNOWN_ID"
		);
	}
	
	// QAndroidJniObject forward
	MediaSession_QueueItem::MediaSession_QueueItem(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaSession_QueueItem::MediaSession_QueueItem(android::media::MediaDescription arg0, jlong arg1)
		: JObject(
			"android.media.session.MediaSession$QueueItem",
			"(Landroid/media/MediaDescription;J)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint MediaSession_QueueItem::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean MediaSession_QueueItem::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::media::MediaDescription MediaSession_QueueItem::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Landroid/media/MediaDescription;"
		);
	}
	jlong MediaSession_QueueItem::getQueueId() const
	{
		return callMethod<jlong>(
			"getQueueId",
			"()J"
		);
	}
	JString MediaSession_QueueItem::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void MediaSession_QueueItem::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::session

