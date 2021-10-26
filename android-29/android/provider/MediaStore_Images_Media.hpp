#pragma once

#ifndef ANDROID_PROVIDER_MEDIASTORE_IMAGES_MEDIA
#define ANDROID_PROVIDER_MEDIASTORE_IMAGES_MEDIA

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class ContentResolver;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}

namespace __jni_impl::android::provider
{
	class MediaStore_Images_Media : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_TYPE();
		static jstring DEFAULT_SORT_ORDER();
		static QAndroidJniObject EXTERNAL_CONTENT_URI();
		static QAndroidJniObject INTERNAL_CONTENT_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject query(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, jarray arg2);
		static QAndroidJniObject query(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, jarray arg2, jstring arg3, jarray arg4, jstring arg5);
		static QAndroidJniObject query(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, jarray arg2, const QString &arg3, jarray arg4, const QString &arg5);
		static QAndroidJniObject query(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, jarray arg2, jstring arg3, jstring arg4);
		static QAndroidJniObject query(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, jarray arg2, const QString &arg3, const QString &arg4);
		static QAndroidJniObject getContentUri(jstring arg0);
		static QAndroidJniObject getContentUri(const QString &arg0);
		static jstring insertImage(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::graphics::Bitmap arg1, jstring arg2, jstring arg3);
		static jstring insertImage(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::graphics::Bitmap arg1, const QString &arg2, const QString &arg3);
		static jstring insertImage(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jstring arg2, jstring arg3);
		static jstring insertImage(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, const QString &arg2, const QString &arg3);
		static QAndroidJniObject getBitmap(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/ContentResolver.hpp"
#include "../graphics/Bitmap.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring MediaStore_Images_Media::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Images$Media",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Images_Media::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Images$Media",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaStore_Images_Media::EXTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Images$Media",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject MediaStore_Images_Media::INTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Images$Media",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	void MediaStore_Images_Media::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Images$Media",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MediaStore_Images_Media::query(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"query",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject MediaStore_Images_Media::query(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, jarray arg2, jstring arg3, jarray arg4, jstring arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"query",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	QAndroidJniObject MediaStore_Images_Media::query(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, jarray arg2, const QString &arg3, jarray arg4, const QString &arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"query",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			arg4,
			QAndroidJniObject::fromString(arg5).object<jstring>()
		);
	}
	QAndroidJniObject MediaStore_Images_Media::query(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, jarray arg2, jstring arg3, jstring arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"query",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject MediaStore_Images_Media::query(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, jarray arg2, const QString &arg3, const QString &arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"query",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			QAndroidJniObject::fromString(arg4).object<jstring>()
		);
	}
	QAndroidJniObject MediaStore_Images_Media::getContentUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject MediaStore_Images_Media::getContentUri(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring MediaStore_Images_Media::insertImage(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::graphics::Bitmap arg1, jstring arg2, jstring arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"insertImage",
			"(Landroid/content/ContentResolver;Landroid/graphics/Bitmap;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		).object<jstring>();
	}
	jstring MediaStore_Images_Media::insertImage(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::graphics::Bitmap arg1, const QString &arg2, const QString &arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"insertImage",
			"(Landroid/content/ContentResolver;Landroid/graphics/Bitmap;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		).object<jstring>();
	}
	jstring MediaStore_Images_Media::insertImage(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"insertImage",
			"(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		).object<jstring>();
	}
	jstring MediaStore_Images_Media::insertImage(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, const QString &arg2, const QString &arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"insertImage",
			"(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject MediaStore_Images_Media::getBitmap(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"getBitmap",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class MediaStore_Images_Media : public __jni_impl::android::provider::MediaStore_Images_Media
	{
	public:
		MediaStore_Images_Media(QAndroidJniObject obj) { __thiz = obj; }
		MediaStore_Images_Media()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_MEDIASTORE_IMAGES_MEDIA

