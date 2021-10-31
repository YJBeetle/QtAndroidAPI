#include "../graphics/Bitmap.hpp"
#include "./MediaDescription.hpp"
#include "./Rating.hpp"
#include "../os/Parcel.hpp"
#include "./MediaMetadata.hpp"

namespace android::media
{
	// Fields
	__JniBaseClass MediaMetadata::CREATOR()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring MediaMetadata::METADATA_KEY_ALBUM()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ALBUM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_ALBUM_ART()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ALBUM_ART",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_ALBUM_ARTIST()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ALBUM_ARTIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_ALBUM_ART_URI()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ALBUM_ART_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_ART()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ART",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_ARTIST()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ARTIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_ART_URI()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ART_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_AUTHOR()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_AUTHOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_BT_FOLDER_TYPE()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_BT_FOLDER_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_COMPILATION()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_COMPILATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_COMPOSER()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_COMPOSER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DATE()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DISC_NUMBER()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISC_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DISPLAY_DESCRIPTION()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISPLAY_DESCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DISPLAY_ICON()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISPLAY_ICON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DISPLAY_ICON_URI()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISPLAY_ICON_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DISPLAY_SUBTITLE()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISPLAY_SUBTITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DISPLAY_TITLE()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISPLAY_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DURATION()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DURATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_GENRE()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_GENRE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_MEDIA_ID()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_MEDIA_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_MEDIA_URI()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_MEDIA_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_NUM_TRACKS()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_NUM_TRACKS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_RATING()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_RATING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_TITLE()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_TRACK_NUMBER()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_TRACK_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_USER_RATING()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_USER_RATING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_WRITER()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_WRITER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_YEAR()
	{
		return getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_YEAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	MediaMetadata::MediaMetadata(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MediaMetadata::containsKey(jstring arg0)
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jint MediaMetadata::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean MediaMetadata::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::graphics::Bitmap MediaMetadata::getBitmap(jstring arg0)
	{
		return callObjectMethod(
			"getBitmap",
			"(Ljava/lang/String;)Landroid/graphics/Bitmap;",
			arg0
		);
	}
	android::media::MediaDescription MediaMetadata::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Landroid/media/MediaDescription;"
		);
	}
	jlong MediaMetadata::getLong(jstring arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	android::media::Rating MediaMetadata::getRating(jstring arg0)
	{
		return callObjectMethod(
			"getRating",
			"(Ljava/lang/String;)Landroid/media/Rating;",
			arg0
		);
	}
	jstring MediaMetadata::getString(jstring arg0)
	{
		return callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring MediaMetadata::getText(jstring arg0)
	{
		return callObjectMethod(
			"getText",
			"(Ljava/lang/String;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jint MediaMetadata::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	__JniBaseClass MediaMetadata::keySet()
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	jint MediaMetadata::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	void MediaMetadata::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

