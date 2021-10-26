#pragma once

#ifndef ANDROID_PROVIDER_MEDIASTORE_AUDIO_MEDIA
#define ANDROID_PROVIDER_MEDIASTORE_AUDIO_MEDIA

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class MediaStore_Audio_Media : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_TYPE();
		static jstring DEFAULT_SORT_ORDER();
		static jstring ENTRY_CONTENT_TYPE();
		static QAndroidJniObject EXTERNAL_CONTENT_URI();
		static jstring EXTRA_MAX_BYTES();
		static QAndroidJniObject INTERNAL_CONTENT_URI();
		static jstring RECORD_SOUND_ACTION();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getContentUriForPath(jstring arg0);
		static QAndroidJniObject getContentUriForPath(const QString &arg0);
		static QAndroidJniObject getContentUri(jstring arg0);
		static QAndroidJniObject getContentUri(const QString &arg0);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring MediaStore_Audio_Media::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Media::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Media::ENTRY_CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"ENTRY_CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaStore_Audio_Media::EXTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring MediaStore_Audio_Media::EXTRA_MAX_BYTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"EXTRA_MAX_BYTES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaStore_Audio_Media::INTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring MediaStore_Audio_Media::RECORD_SOUND_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"RECORD_SOUND_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void MediaStore_Audio_Media::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Audio$Media",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MediaStore_Audio_Media::getContentUriForPath(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Media",
			"getContentUriForPath",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject MediaStore_Audio_Media::getContentUriForPath(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Media",
			"getContentUriForPath",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject MediaStore_Audio_Media::getContentUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Media",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject MediaStore_Audio_Media::getContentUri(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Media",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class MediaStore_Audio_Media : public __jni_impl::android::provider::MediaStore_Audio_Media
	{
	public:
		MediaStore_Audio_Media(QAndroidJniObject obj) { __thiz = obj; }
		MediaStore_Audio_Media()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_MEDIASTORE_AUDIO_MEDIA

