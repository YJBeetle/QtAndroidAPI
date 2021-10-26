#pragma once

#ifndef ANDROID_PROVIDER_MEDIASTORE_AUDIO_ARTISTS
#define ANDROID_PROVIDER_MEDIASTORE_AUDIO_ARTISTS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class MediaStore_Audio_Artists : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_TYPE();
		static jstring DEFAULT_SORT_ORDER();
		static jstring ENTRY_CONTENT_TYPE();
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
	jstring MediaStore_Audio_Artists::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Artists",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Artists::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Artists",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Artists::ENTRY_CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Artists",
			"ENTRY_CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaStore_Audio_Artists::EXTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Artists",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject MediaStore_Audio_Artists::INTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Artists",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	void MediaStore_Audio_Artists::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Audio$Artists",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MediaStore_Audio_Artists::getContentUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Artists",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject MediaStore_Audio_Artists::getContentUri(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Artists",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class MediaStore_Audio_Artists : public __jni_impl::android::provider::MediaStore_Audio_Artists
	{
	public:
		MediaStore_Audio_Artists(QAndroidJniObject obj) { __thiz = obj; }
		MediaStore_Audio_Artists()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_MEDIASTORE_AUDIO_ARTISTS

