#include "../MediaDescription.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./MediaBrowser_MediaItem.hpp"

namespace android::media::browse
{
	// Fields
	JObject MediaBrowser_MediaItem::CREATOR()
	{
		return getStaticObjectField(
			"android.media.browse.MediaBrowser$MediaItem",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint MediaBrowser_MediaItem::FLAG_BROWSABLE()
	{
		return getStaticField<jint>(
			"android.media.browse.MediaBrowser$MediaItem",
			"FLAG_BROWSABLE"
		);
	}
	jint MediaBrowser_MediaItem::FLAG_PLAYABLE()
	{
		return getStaticField<jint>(
			"android.media.browse.MediaBrowser$MediaItem",
			"FLAG_PLAYABLE"
		);
	}
	
	// QJniObject forward
	MediaBrowser_MediaItem::MediaBrowser_MediaItem(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaBrowser_MediaItem::MediaBrowser_MediaItem(android::media::MediaDescription arg0, jint arg1)
		: JObject(
			"android.media.browse.MediaBrowser$MediaItem",
			"(Landroid/media/MediaDescription;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint MediaBrowser_MediaItem::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::media::MediaDescription MediaBrowser_MediaItem::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Landroid/media/MediaDescription;"
		);
	}
	jint MediaBrowser_MediaItem::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	JString MediaBrowser_MediaItem::getMediaId() const
	{
		return callObjectMethod(
			"getMediaId",
			"()Ljava/lang/String;"
		);
	}
	jboolean MediaBrowser_MediaItem::isBrowsable() const
	{
		return callMethod<jboolean>(
			"isBrowsable",
			"()Z"
		);
	}
	jboolean MediaBrowser_MediaItem::isPlayable() const
	{
		return callMethod<jboolean>(
			"isPlayable",
			"()Z"
		);
	}
	JString MediaBrowser_MediaItem::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void MediaBrowser_MediaItem::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::browse

