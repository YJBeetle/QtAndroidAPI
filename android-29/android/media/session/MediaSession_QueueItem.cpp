#include "../MediaDescription.hpp"
#include "../../os/Parcel.hpp"
#include "./MediaSession_QueueItem.hpp"

namespace android::media::session
{
	// Fields
	QAndroidJniObject MediaSession_QueueItem::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.session.MediaSession$QueueItem",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint MediaSession_QueueItem::UNKNOWN_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.session.MediaSession$QueueItem",
			"UNKNOWN_ID"
		);
	}
	
	MediaSession_QueueItem::MediaSession_QueueItem(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaSession_QueueItem::MediaSession_QueueItem(android::media::MediaDescription &arg0, jlong &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.session.MediaSession$QueueItem",
			"(Landroid/media/MediaDescription;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jint MediaSession_QueueItem::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean MediaSession_QueueItem::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject MediaSession_QueueItem::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Landroid/media/MediaDescription;"
		);
	}
	jlong MediaSession_QueueItem::getQueueId()
	{
		return __thiz.callMethod<jlong>(
			"getQueueId",
			"()J"
		);
	}
	jstring MediaSession_QueueItem::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void MediaSession_QueueItem::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::media::session

