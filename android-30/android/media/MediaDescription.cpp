#include "../graphics/Bitmap.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MediaDescription.hpp"

namespace android::media
{
	// Fields
	jlong MediaDescription::BT_FOLDER_TYPE_ALBUMS()
	{
		return getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_ALBUMS"
		);
	}
	jlong MediaDescription::BT_FOLDER_TYPE_ARTISTS()
	{
		return getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_ARTISTS"
		);
	}
	jlong MediaDescription::BT_FOLDER_TYPE_GENRES()
	{
		return getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_GENRES"
		);
	}
	jlong MediaDescription::BT_FOLDER_TYPE_MIXED()
	{
		return getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_MIXED"
		);
	}
	jlong MediaDescription::BT_FOLDER_TYPE_PLAYLISTS()
	{
		return getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_PLAYLISTS"
		);
	}
	jlong MediaDescription::BT_FOLDER_TYPE_TITLES()
	{
		return getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_TITLES"
		);
	}
	jlong MediaDescription::BT_FOLDER_TYPE_YEARS()
	{
		return getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_YEARS"
		);
	}
	JObject MediaDescription::CREATOR()
	{
		return getStaticObjectField(
			"android.media.MediaDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	JString MediaDescription::EXTRA_BT_FOLDER_TYPE()
	{
		return getStaticObjectField(
			"android.media.MediaDescription",
			"EXTRA_BT_FOLDER_TYPE",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	MediaDescription::MediaDescription(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint MediaDescription::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean MediaDescription::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString MediaDescription::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::os::Bundle MediaDescription::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	android::graphics::Bitmap MediaDescription::getIconBitmap()
	{
		return callObjectMethod(
			"getIconBitmap",
			"()Landroid/graphics/Bitmap;"
		);
	}
	android::net::Uri MediaDescription::getIconUri()
	{
		return callObjectMethod(
			"getIconUri",
			"()Landroid/net/Uri;"
		);
	}
	JString MediaDescription::getMediaId()
	{
		return callObjectMethod(
			"getMediaId",
			"()Ljava/lang/String;"
		);
	}
	android::net::Uri MediaDescription::getMediaUri()
	{
		return callObjectMethod(
			"getMediaUri",
			"()Landroid/net/Uri;"
		);
	}
	JString MediaDescription::getSubtitle()
	{
		return callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString MediaDescription::getTitle()
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString MediaDescription::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void MediaDescription::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

