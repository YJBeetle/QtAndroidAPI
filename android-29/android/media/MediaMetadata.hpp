#pragma once

#ifndef ANDROID_MEDIA_MEDIAMETADATA
#define ANDROID_MEDIA_MEDIAMETADATA

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::media
{
	class MediaDescription;
}
namespace __jni_impl::android::media
{
	class Rating;
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
	class MediaMetadata : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jstring METADATA_KEY_ALBUM();
		static jstring METADATA_KEY_ALBUM_ART();
		static jstring METADATA_KEY_ALBUM_ARTIST();
		static jstring METADATA_KEY_ALBUM_ART_URI();
		static jstring METADATA_KEY_ART();
		static jstring METADATA_KEY_ARTIST();
		static jstring METADATA_KEY_ART_URI();
		static jstring METADATA_KEY_AUTHOR();
		static jstring METADATA_KEY_BT_FOLDER_TYPE();
		static jstring METADATA_KEY_COMPILATION();
		static jstring METADATA_KEY_COMPOSER();
		static jstring METADATA_KEY_DATE();
		static jstring METADATA_KEY_DISC_NUMBER();
		static jstring METADATA_KEY_DISPLAY_DESCRIPTION();
		static jstring METADATA_KEY_DISPLAY_ICON();
		static jstring METADATA_KEY_DISPLAY_ICON_URI();
		static jstring METADATA_KEY_DISPLAY_SUBTITLE();
		static jstring METADATA_KEY_DISPLAY_TITLE();
		static jstring METADATA_KEY_DURATION();
		static jstring METADATA_KEY_GENRE();
		static jstring METADATA_KEY_MEDIA_ID();
		static jstring METADATA_KEY_MEDIA_URI();
		static jstring METADATA_KEY_NUM_TRACKS();
		static jstring METADATA_KEY_RATING();
		static jstring METADATA_KEY_TITLE();
		static jstring METADATA_KEY_TRACK_NUMBER();
		static jstring METADATA_KEY_USER_RATING();
		static jstring METADATA_KEY_WRITER();
		static jstring METADATA_KEY_YEAR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean containsKey(jstring arg0);
		jboolean containsKey(const QString &arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getBitmap(jstring arg0);
		QAndroidJniObject getBitmap(const QString &arg0);
		QAndroidJniObject getDescription();
		jlong getLong(jstring arg0);
		jlong getLong(const QString &arg0);
		QAndroidJniObject getRating(jstring arg0);
		QAndroidJniObject getRating(const QString &arg0);
		jstring getString(jstring arg0);
		jstring getString(const QString &arg0);
		jstring getText(jstring arg0);
		jstring getText(const QString &arg0);
		jint hashCode();
		QAndroidJniObject keySet();
		jint size();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::media

#include "../graphics/Bitmap.hpp"
#include "MediaDescription.hpp"
#include "Rating.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::media
{
	// Fields
	QAndroidJniObject MediaMetadata::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring MediaMetadata::METADATA_KEY_ALBUM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ALBUM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_ALBUM_ART()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ALBUM_ART",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_ALBUM_ARTIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ALBUM_ARTIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_ALBUM_ART_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ALBUM_ART_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_ART()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ART",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_ARTIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ARTIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_ART_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ART_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_AUTHOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_AUTHOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_BT_FOLDER_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_BT_FOLDER_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_COMPILATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_COMPILATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_COMPOSER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_COMPOSER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DISC_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISC_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DISPLAY_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISPLAY_DESCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DISPLAY_ICON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISPLAY_ICON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DISPLAY_ICON_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISPLAY_ICON_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DISPLAY_SUBTITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISPLAY_SUBTITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DISPLAY_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISPLAY_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DURATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_GENRE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_GENRE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_MEDIA_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_MEDIA_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_MEDIA_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_MEDIA_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_NUM_TRACKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_NUM_TRACKS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_RATING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_RATING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_TRACK_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_TRACK_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_USER_RATING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_USER_RATING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_WRITER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_WRITER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_YEAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void MediaMetadata::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaMetadata",
			"(V)V");
	}
	
	// Methods
	jboolean MediaMetadata::containsKey(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean MediaMetadata::containsKey(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint MediaMetadata::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean MediaMetadata::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject MediaMetadata::getBitmap(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getBitmap",
			"(Ljava/lang/String;)Landroid/graphics/Bitmap;",
			arg0
		);
	}
	QAndroidJniObject MediaMetadata::getBitmap(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getBitmap",
			"(Ljava/lang/String;)Landroid/graphics/Bitmap;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject MediaMetadata::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Landroid/media/MediaDescription;"
		);
	}
	jlong MediaMetadata::getLong(jstring arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	jlong MediaMetadata::getLong(const QString &arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;)J",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject MediaMetadata::getRating(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getRating",
			"(Ljava/lang/String;)Landroid/media/Rating;",
			arg0
		);
	}
	QAndroidJniObject MediaMetadata::getRating(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getRating",
			"(Ljava/lang/String;)Landroid/media/Rating;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring MediaMetadata::getString(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring MediaMetadata::getString(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring MediaMetadata::getText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getText",
			"(Ljava/lang/String;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring MediaMetadata::getText(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getText",
			"(Ljava/lang/String;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jint MediaMetadata::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject MediaMetadata::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	jint MediaMetadata::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	void MediaMetadata::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class MediaMetadata : public __jni_impl::android::media::MediaMetadata
	{
	public:
		MediaMetadata(QAndroidJniObject obj) { __thiz = obj; }
		MediaMetadata()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIAMETADATA

