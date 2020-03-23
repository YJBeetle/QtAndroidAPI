#pragma once

#ifndef ANDROID_MEDIA_MEDIADESCRIPTION
#define ANDROID_MEDIA_MEDIADESCRIPTION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::media
{
	class MediaDescription : public __JniBaseClass
	{
	public:
		// Fields
		static jlong BT_FOLDER_TYPE_ALBUMS();
		static jlong BT_FOLDER_TYPE_ARTISTS();
		static jlong BT_FOLDER_TYPE_GENRES();
		static jlong BT_FOLDER_TYPE_MIXED();
		static jlong BT_FOLDER_TYPE_PLAYLISTS();
		static jlong BT_FOLDER_TYPE_TITLES();
		static jlong BT_FOLDER_TYPE_YEARS();
		static QAndroidJniObject CREATOR();
		static QAndroidJniObject EXTRA_BT_FOLDER_TYPE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		QAndroidJniObject getDescription();
		QAndroidJniObject getExtras();
		QAndroidJniObject getSubtitle();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getTitle();
		QAndroidJniObject getMediaId();
		QAndroidJniObject getIconBitmap();
		QAndroidJniObject getIconUri();
		QAndroidJniObject getMediaUri();
	};
} // namespace __jni_impl::android::media

#include "../os/Parcel.hpp"
#include "../os/Bundle.hpp"
#include "../graphics/Bitmap.hpp"
#include "../net/Uri.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jlong MediaDescription::BT_FOLDER_TYPE_ALBUMS()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_ALBUMS");
	}
	jlong MediaDescription::BT_FOLDER_TYPE_ARTISTS()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_ARTISTS");
	}
	jlong MediaDescription::BT_FOLDER_TYPE_GENRES()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_GENRES");
	}
	jlong MediaDescription::BT_FOLDER_TYPE_MIXED()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_MIXED");
	}
	jlong MediaDescription::BT_FOLDER_TYPE_PLAYLISTS()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_PLAYLISTS");
	}
	jlong MediaDescription::BT_FOLDER_TYPE_TITLES()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_TITLES");
	}
	jlong MediaDescription::BT_FOLDER_TYPE_YEARS()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.MediaDescription",
			"BT_FOLDER_TYPE_YEARS");
	}
	QAndroidJniObject MediaDescription::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	QAndroidJniObject MediaDescription::EXTRA_BT_FOLDER_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaDescription",
			"EXTRA_BT_FOLDER_TYPE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void MediaDescription::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDescription",
			"(V)V");
	}
	
	// Methods
	jboolean MediaDescription::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject MediaDescription::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject MediaDescription::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject MediaDescription::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;");
	}
	QAndroidJniObject MediaDescription::getSubtitle()
	{
		return __thiz.callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;");
	}
	jint MediaDescription::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void MediaDescription::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject MediaDescription::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject MediaDescription::getMediaId()
	{
		return __thiz.callObjectMethod(
			"getMediaId",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject MediaDescription::getIconBitmap()
	{
		return __thiz.callObjectMethod(
			"getIconBitmap",
			"()Landroid/graphics/Bitmap;");
	}
	QAndroidJniObject MediaDescription::getIconUri()
	{
		return __thiz.callObjectMethod(
			"getIconUri",
			"()Landroid/net/Uri;");
	}
	QAndroidJniObject MediaDescription::getMediaUri()
	{
		return __thiz.callObjectMethod(
			"getMediaUri",
			"()Landroid/net/Uri;");
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaDescription : public __jni_impl::android::media::MediaDescription
	{
	public:
		MediaDescription(QAndroidJniObject obj) { __thiz = obj; }
		MediaDescription()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIADESCRIPTION

