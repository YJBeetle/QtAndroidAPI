#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
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
		static jstring EXTRA_BT_FOLDER_TYPE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getDescription();
		QAndroidJniObject getExtras();
		QAndroidJniObject getIconBitmap();
		QAndroidJniObject getIconUri();
		jstring getMediaId();
		QAndroidJniObject getMediaUri();
		jstring getSubtitle();
		jstring getTitle();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::media

#include "../graphics/Bitmap.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::media
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
	
	// Constructors
	void MediaDescription::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDescription",
			"(V)V");
	}
	
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
	void MediaDescription::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
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

