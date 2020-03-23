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
		static QAndroidJniObject CONTENT_TYPE();
		static QAndroidJniObject DEFAULT_SORT_ORDER();
		static QAndroidJniObject ENTRY_CONTENT_TYPE();
		static QAndroidJniObject EXTERNAL_CONTENT_URI();
		static QAndroidJniObject EXTRA_MAX_BYTES();
		static QAndroidJniObject INTERNAL_CONTENT_URI();
		static QAndroidJniObject RECORD_SOUND_ACTION();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getContentUri(jstring arg0);
		static QAndroidJniObject getContentUriForPath(jstring arg0);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject MediaStore_Audio_Media::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"CONTENT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore_Audio_Media::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore_Audio_Media::ENTRY_CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"ENTRY_CONTENT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore_Audio_Media::EXTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject MediaStore_Audio_Media::EXTRA_MAX_BYTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"EXTRA_MAX_BYTES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore_Audio_Media::INTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject MediaStore_Audio_Media::RECORD_SOUND_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Media",
			"RECORD_SOUND_ACTION",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void MediaStore_Audio_Media::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Audio$Media",
			"()V");
	}
	
	// Methods
	QAndroidJniObject MediaStore_Audio_Media::getContentUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Media",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0);
	}
	QAndroidJniObject MediaStore_Audio_Media::getContentUriForPath(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Media",
			"getContentUriForPath",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0);
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

