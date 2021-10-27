#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class MediaStore_Audio_Genres_Members : public __JniBaseClass
	{
	public:
		// Fields
		static jstring AUDIO_ID();
		static jstring CONTENT_DIRECTORY();
		static jstring DEFAULT_SORT_ORDER();
		static jstring GENRE_ID();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getContentUri(jstring arg0, jlong arg1);
		static QAndroidJniObject getContentUri(const QString &arg0, jlong arg1);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring MediaStore_Audio_Genres_Members::AUDIO_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres$Members",
			"AUDIO_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Genres_Members::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres$Members",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Genres_Members::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres$Members",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Genres_Members::GENRE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres$Members",
			"GENRE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void MediaStore_Audio_Genres_Members::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Audio$Genres$Members",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MediaStore_Audio_Genres_Members::getContentUri(jstring arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Genres$Members",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MediaStore_Audio_Genres_Members::getContentUri(const QString &arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Genres$Members",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class MediaStore_Audio_Genres_Members : public __jni_impl::android::provider::MediaStore_Audio_Genres_Members
	{
	public:
		MediaStore_Audio_Genres_Members(QAndroidJniObject obj) { __thiz = obj; }
		MediaStore_Audio_Genres_Members()
		{
			__constructor();
		}
	};
} // namespace android::provider

