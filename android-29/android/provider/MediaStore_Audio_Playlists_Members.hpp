#pragma once

#ifndef ANDROID_PROVIDER_MEDIASTORE_AUDIO_PLAYLISTS_MEMBERS
#define ANDROID_PROVIDER_MEDIASTORE_AUDIO_PLAYLISTS_MEMBERS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class ContentResolver;
}

namespace __jni_impl::android::provider
{
	class MediaStore_Audio_Playlists_Members : public __JniBaseClass
	{
	public:
		// Fields
		static jstring AUDIO_ID();
		static jstring CONTENT_DIRECTORY();
		static jstring DEFAULT_SORT_ORDER();
		static jstring PLAYLIST_ID();
		static jstring PLAY_ORDER();
		static jstring _ID();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getContentUri(jstring arg0, jlong arg1);
		static jboolean moveItem(__jni_impl::android::content::ContentResolver arg0, jlong arg1, jint arg2, jint arg3);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/ContentResolver.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring MediaStore_Audio_Playlists_Members::AUDIO_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"AUDIO_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Playlists_Members::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Playlists_Members::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Playlists_Members::PLAYLIST_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"PLAYLIST_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Playlists_Members::PLAY_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"PLAY_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Playlists_Members::_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void MediaStore_Audio_Playlists_Members::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"()V");
	}
	
	// Methods
	QAndroidJniObject MediaStore_Audio_Playlists_Members::getContentUri(jstring arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			arg0,
			arg1
		);
	}
	jboolean MediaStore_Audio_Playlists_Members::moveItem(__jni_impl::android::content::ContentResolver arg0, jlong arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"moveItem",
			"(Landroid/content/ContentResolver;JII)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class MediaStore_Audio_Playlists_Members : public __jni_impl::android::provider::MediaStore_Audio_Playlists_Members
	{
	public:
		MediaStore_Audio_Playlists_Members(QAndroidJniObject obj) { __thiz = obj; }
		MediaStore_Audio_Playlists_Members()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_MEDIASTORE_AUDIO_PLAYLISTS_MEMBERS

