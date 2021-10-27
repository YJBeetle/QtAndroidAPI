#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class MediaStore_Video_Media : public __JniBaseClass
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
		static QAndroidJniObject getContentUri(jstring arg0);
		static QAndroidJniObject getContentUri(const QString &arg0);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring MediaStore_Video_Media::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Video$Media",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Video_Media::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Video$Media",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaStore_Video_Media::EXTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Video$Media",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject MediaStore_Video_Media::INTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Video$Media",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	void MediaStore_Video_Media::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Video$Media",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MediaStore_Video_Media::getContentUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Video$Media",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject MediaStore_Video_Media::getContentUri(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Video$Media",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class MediaStore_Video_Media : public __jni_impl::android::provider::MediaStore_Video_Media
	{
	public:
		MediaStore_Video_Media(QAndroidJniObject obj) { __thiz = obj; }
		MediaStore_Video_Media()
		{
			__constructor();
		}
	};
} // namespace android::provider

