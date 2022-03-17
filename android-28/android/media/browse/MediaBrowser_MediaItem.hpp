#pragma once

#include "../MediaDescription.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./MediaBrowser_MediaItem.def.hpp"

namespace android::media::browse
{
	// Fields
	inline JObject MediaBrowser_MediaItem::CREATOR()
	{
		return getStaticObjectField(
			"android.media.browse.MediaBrowser$MediaItem",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint MediaBrowser_MediaItem::FLAG_BROWSABLE()
	{
		return getStaticField<jint>(
			"android.media.browse.MediaBrowser$MediaItem",
			"FLAG_BROWSABLE"
		);
	}
	inline jint MediaBrowser_MediaItem::FLAG_PLAYABLE()
	{
		return getStaticField<jint>(
			"android.media.browse.MediaBrowser$MediaItem",
			"FLAG_PLAYABLE"
		);
	}
	
	// Constructors
	inline MediaBrowser_MediaItem::MediaBrowser_MediaItem(android::media::MediaDescription arg0, jint arg1)
		: JObject(
			"android.media.browse.MediaBrowser$MediaItem",
			"(Landroid/media/MediaDescription;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jint MediaBrowser_MediaItem::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::media::MediaDescription MediaBrowser_MediaItem::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Landroid/media/MediaDescription;"
		);
	}
	inline jint MediaBrowser_MediaItem::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	inline JString MediaBrowser_MediaItem::getMediaId() const
	{
		return callObjectMethod(
			"getMediaId",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean MediaBrowser_MediaItem::isBrowsable() const
	{
		return callMethod<jboolean>(
			"isBrowsable",
			"()Z"
		);
	}
	inline jboolean MediaBrowser_MediaItem::isPlayable() const
	{
		return callMethod<jboolean>(
			"isPlayable",
			"()Z"
		);
	}
	inline JString MediaBrowser_MediaItem::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void MediaBrowser_MediaItem::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::browse

// Base class headers

