#pragma once

#ifndef ANDROID_PROVIDER_MEDIASTORE_VIDEO_THUMBNAILS
#define ANDROID_PROVIDER_MEDIASTORE_VIDEO_THUMBNAILS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ContentResolver;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics
{
	class BitmapFactory_Options;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class MediaStore_Video_Thumbnails : public __JniBaseClass
	{
	public:
		// Fields
		static jstring DATA();
		static jstring DEFAULT_SORT_ORDER();
		static QAndroidJniObject EXTERNAL_CONTENT_URI();
		static jint FULL_SCREEN_KIND();
		static jstring HEIGHT();
		static QAndroidJniObject INTERNAL_CONTENT_URI();
		static jstring KIND();
		static jint MICRO_KIND();
		static jint MINI_KIND();
		static jstring VIDEO_ID();
		static jstring WIDTH();
		
		// Constructors
		void __constructor();
		
		// Methods
		static void cancelThumbnailRequest(__jni_impl::android::content::ContentResolver arg0, jlong arg1);
		static void cancelThumbnailRequest(__jni_impl::android::content::ContentResolver arg0, jlong arg1, jlong arg2);
		static QAndroidJniObject getContentUri(jstring arg0);
		static QAndroidJniObject getContentUri(const QString &arg0);
		static QAndroidJniObject getThumbnail(__jni_impl::android::content::ContentResolver arg0, jlong arg1, jint arg2, __jni_impl::android::graphics::BitmapFactory_Options arg3);
		static QAndroidJniObject getThumbnail(__jni_impl::android::content::ContentResolver arg0, jlong arg1, jlong arg2, jint arg3, __jni_impl::android::graphics::BitmapFactory_Options arg4);
	};
} // namespace __jni_impl::android::provider

#include "../content/ContentResolver.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/BitmapFactory_Options.hpp"
#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring MediaStore_Video_Thumbnails::DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Video$Thumbnails",
			"DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Video_Thumbnails::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Video$Thumbnails",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaStore_Video_Thumbnails::EXTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Video$Thumbnails",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jint MediaStore_Video_Thumbnails::FULL_SCREEN_KIND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.MediaStore$Video$Thumbnails",
			"FULL_SCREEN_KIND"
		);
	}
	jstring MediaStore_Video_Thumbnails::HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Video$Thumbnails",
			"HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaStore_Video_Thumbnails::INTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Video$Thumbnails",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring MediaStore_Video_Thumbnails::KIND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Video$Thumbnails",
			"KIND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaStore_Video_Thumbnails::MICRO_KIND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.MediaStore$Video$Thumbnails",
			"MICRO_KIND"
		);
	}
	jint MediaStore_Video_Thumbnails::MINI_KIND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.MediaStore$Video$Thumbnails",
			"MINI_KIND"
		);
	}
	jstring MediaStore_Video_Thumbnails::VIDEO_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Video$Thumbnails",
			"VIDEO_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Video_Thumbnails::WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Video$Thumbnails",
			"WIDTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void MediaStore_Video_Thumbnails::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Video$Thumbnails",
			"()V"
		);
	}
	
	// Methods
	void MediaStore_Video_Thumbnails::cancelThumbnailRequest(__jni_impl::android::content::ContentResolver arg0, jlong arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.MediaStore$Video$Thumbnails",
			"cancelThumbnailRequest",
			"(Landroid/content/ContentResolver;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void MediaStore_Video_Thumbnails::cancelThumbnailRequest(__jni_impl::android::content::ContentResolver arg0, jlong arg1, jlong arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.MediaStore$Video$Thumbnails",
			"cancelThumbnailRequest",
			"(Landroid/content/ContentResolver;JJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject MediaStore_Video_Thumbnails::getContentUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Video$Thumbnails",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject MediaStore_Video_Thumbnails::getContentUri(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Video$Thumbnails",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject MediaStore_Video_Thumbnails::getThumbnail(__jni_impl::android::content::ContentResolver arg0, jlong arg1, jint arg2, __jni_impl::android::graphics::BitmapFactory_Options arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Video$Thumbnails",
			"getThumbnail",
			"(Landroid/content/ContentResolver;JILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject MediaStore_Video_Thumbnails::getThumbnail(__jni_impl::android::content::ContentResolver arg0, jlong arg1, jlong arg2, jint arg3, __jni_impl::android::graphics::BitmapFactory_Options arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Video$Thumbnails",
			"getThumbnail",
			"(Landroid/content/ContentResolver;JJILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class MediaStore_Video_Thumbnails : public __jni_impl::android::provider::MediaStore_Video_Thumbnails
	{
	public:
		MediaStore_Video_Thumbnails(QAndroidJniObject obj) { __thiz = obj; }
		MediaStore_Video_Thumbnails()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_MEDIASTORE_VIDEO_THUMBNAILS

