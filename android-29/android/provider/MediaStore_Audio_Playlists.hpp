#pragma once

#ifndef ANDROID_PROVIDER_MEDIASTORE_AUDIO_PLAYLISTS
#define ANDROID_PROVIDER_MEDIASTORE_AUDIO_PLAYLISTS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class MediaStore_Audio_Playlists : public __JniBaseClass
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
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring MediaStore_Audio_Playlists::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Playlists::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Playlists::ENTRY_CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists",
			"ENTRY_CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaStore_Audio_Playlists::EXTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject MediaStore_Audio_Playlists::INTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	void MediaStore_Audio_Playlists::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Audio$Playlists",
			"()V");
	}
	
	// Methods
	QAndroidJniObject MediaStore_Audio_Playlists::getContentUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Playlists",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class MediaStore_Audio_Playlists : public __jni_impl::android::provider::MediaStore_Audio_Playlists
	{
	public:
		MediaStore_Audio_Playlists(QAndroidJniObject obj) { __thiz = obj; }
		MediaStore_Audio_Playlists()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_MEDIASTORE_AUDIO_PLAYLISTS

