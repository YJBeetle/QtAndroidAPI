#pragma once

#ifndef ANDROID_PROVIDER_MEDIASTORE_AUDIO_ALBUMS
#define ANDROID_PROVIDER_MEDIASTORE_AUDIO_ALBUMS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class MediaStore_Audio_Albums : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_TYPE();
		static QAndroidJniObject DEFAULT_SORT_ORDER();
		static QAndroidJniObject ENTRY_CONTENT_TYPE();
		static QAndroidJniObject EXTERNAL_CONTENT_URI();
		static QAndroidJniObject INTERNAL_CONTENT_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getContentUri(jstring arg0);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject MediaStore_Audio_Albums::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Albums",
			"CONTENT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore_Audio_Albums::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Albums",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore_Audio_Albums::ENTRY_CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Albums",
			"ENTRY_CONTENT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore_Audio_Albums::EXTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Albums",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject MediaStore_Audio_Albums::INTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Albums",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;");
	}
	
	// Constructors
	void MediaStore_Audio_Albums::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Audio$Albums",
			"()V");
	}
	
	// Methods
	QAndroidJniObject MediaStore_Audio_Albums::getContentUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Albums",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class MediaStore_Audio_Albums : public __jni_impl::android::provider::MediaStore_Audio_Albums
	{
	public:
		MediaStore_Audio_Albums(QAndroidJniObject obj) { __thiz = obj; }
		MediaStore_Audio_Albums()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_MEDIASTORE_AUDIO_ALBUMS

