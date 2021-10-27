#include "../graphics/Bitmap.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "./MediaDescription.hpp"

namespace android::media
{
	// Fields
	jlong MediaDescription::BT_FOLDER_TYPE_ALBUMS()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_ALBUMS"
		);
	}
	jlong MediaDescription::BT_FOLDER_TYPE_ARTISTS()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_ARTISTS"
		);
	}
	jlong MediaDescription::BT_FOLDER_TYPE_GENRES()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_GENRES"
		);
	}
	jlong MediaDescription::BT_FOLDER_TYPE_MIXED()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_MIXED"
		);
	}
	jlong MediaDescription::BT_FOLDER_TYPE_PLAYLISTS()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_PLAYLISTS"
		);
	}
	jlong MediaDescription::BT_FOLDER_TYPE_TITLES()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_TITLES"
		);
	}
	jlong MediaDescription::BT_FOLDER_TYPE_YEARS()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_YEARS"
		);
	}
	QAndroidJniObject MediaDescription::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring MediaDescription::EXTRA_BT_FOLDER_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDescription",
			"EXTRA_BT_FOLDER_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	MediaDescription::MediaDescription(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint MediaDescription::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean MediaDescription::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring MediaDescription::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject MediaDescription::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject MediaDescription::getIconBitmap()
	{
		return __thiz.callObjectMethod(
			"getIconBitmap",
			"()Landroid/graphics/Bitmap;"
		);
	}
	QAndroidJniObject MediaDescription::getIconUri()
	{
		return __thiz.callObjectMethod(
			"getIconUri",
			"()Landroid/net/Uri;"
		);
	}
	jstring MediaDescription::getMediaId()
	{
		return __thiz.callObjectMethod(
			"getMediaId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaDescription::getMediaUri()
	{
		return __thiz.callObjectMethod(
			"getMediaUri",
			"()Landroid/net/Uri;"
		);
	}
	jstring MediaDescription::getSubtitle()
	{
		return __thiz.callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring MediaDescription::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring MediaDescription::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void MediaDescription::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::media

