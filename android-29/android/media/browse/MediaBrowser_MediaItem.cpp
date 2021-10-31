#include "../MediaDescription.hpp"
#include "../../os/Parcel.hpp"
#include "./MediaBrowser_MediaItem.hpp"

namespace android::media::browse
{
	// Fields
	QAndroidJniObject MediaBrowser_MediaItem::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.browse.MediaBrowser$MediaItem",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint MediaBrowser_MediaItem::FLAG_BROWSABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.browse.MediaBrowser$MediaItem",
			"FLAG_BROWSABLE"
		);
	}
	jint MediaBrowser_MediaItem::FLAG_PLAYABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.browse.MediaBrowser$MediaItem",
			"FLAG_PLAYABLE"
		);
	}
	
	// QAndroidJniObject forward
	MediaBrowser_MediaItem::MediaBrowser_MediaItem(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaBrowser_MediaItem::MediaBrowser_MediaItem(android::media::MediaDescription arg0, jint arg1)
		: __JniBaseClass(
			"android.media.browse.MediaBrowser$MediaItem",
			"(Landroid/media/MediaDescription;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint MediaBrowser_MediaItem::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject MediaBrowser_MediaItem::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Landroid/media/MediaDescription;"
		);
	}
	jint MediaBrowser_MediaItem::getFlags()
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	jstring MediaBrowser_MediaItem::getMediaId()
	{
		return callObjectMethod(
			"getMediaId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean MediaBrowser_MediaItem::isBrowsable()
	{
		return callMethod<jboolean>(
			"isBrowsable",
			"()Z"
		);
	}
	jboolean MediaBrowser_MediaItem::isPlayable()
	{
		return callMethod<jboolean>(
			"isPlayable",
			"()Z"
		);
	}
	jstring MediaBrowser_MediaItem::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void MediaBrowser_MediaItem::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::browse

