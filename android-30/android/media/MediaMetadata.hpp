#pragma once

#include "../graphics/Bitmap.def.hpp"
#include "./MediaDescription.def.hpp"
#include "./Rating.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MediaMetadata.def.hpp"

namespace android::media
{
	// Fields
	inline JObject MediaMetadata::CREATOR()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_ALBUM()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ALBUM",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_ALBUM_ART()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ALBUM_ART",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_ALBUM_ARTIST()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ALBUM_ARTIST",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_ALBUM_ART_URI()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ALBUM_ART_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_ART()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ART",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_ARTIST()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ARTIST",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_ART_URI()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ART_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_AUTHOR()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_AUTHOR",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_BT_FOLDER_TYPE()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_BT_FOLDER_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_COMPILATION()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_COMPILATION",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_COMPOSER()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_COMPOSER",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_DATE()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DATE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_DISC_NUMBER()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISC_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_DISPLAY_DESCRIPTION()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISPLAY_DESCRIPTION",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_DISPLAY_ICON()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISPLAY_ICON",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_DISPLAY_ICON_URI()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISPLAY_ICON_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_DISPLAY_SUBTITLE()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISPLAY_SUBTITLE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_DISPLAY_TITLE()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISPLAY_TITLE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_DURATION()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DURATION",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_GENRE()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_GENRE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_MEDIA_ID()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_MEDIA_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_MEDIA_URI()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_MEDIA_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_NUM_TRACKS()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_NUM_TRACKS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_RATING()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_RATING",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_TITLE()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_TITLE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_TRACK_NUMBER()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_TRACK_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_USER_RATING()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_USER_RATING",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_WRITER()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_WRITER",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaMetadata::METADATA_KEY_YEAR()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_YEAR",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean MediaMetadata::containsKey(JString arg0) const
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jint MediaMetadata::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean MediaMetadata::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::graphics::Bitmap MediaMetadata::getBitmap(JString arg0) const
	{
		return callObjectMethod(
			"getBitmap",
			"(Ljava/lang/String;)Landroid/graphics/Bitmap;",
			arg0.object<jstring>()
		);
	}
	inline android::media::MediaDescription MediaMetadata::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Landroid/media/MediaDescription;"
		);
	}
	inline jlong MediaMetadata::getLong(JString arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;)J",
			arg0.object<jstring>()
		);
	}
	inline android::media::Rating MediaMetadata::getRating(JString arg0) const
	{
		return callObjectMethod(
			"getRating",
			"(Ljava/lang/String;)Landroid/media/Rating;",
			arg0.object<jstring>()
		);
	}
	inline JString MediaMetadata::getString(JString arg0) const
	{
		return callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString MediaMetadata::getText(JString arg0) const
	{
		return callObjectMethod(
			"getText",
			"(Ljava/lang/String;)Ljava/lang/CharSequence;",
			arg0.object<jstring>()
		);
	}
	inline jint MediaMetadata::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JObject MediaMetadata::keySet() const
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	inline jint MediaMetadata::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline void MediaMetadata::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
