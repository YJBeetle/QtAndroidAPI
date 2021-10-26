#pragma once

#ifndef ANDROID_PROVIDER_MEDIASTORE
#define ANDROID_PROVIDER_MEDIASTORE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::provider
{
	class MediaStore : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_IMAGE_CAPTURE();
		static jstring ACTION_IMAGE_CAPTURE_SECURE();
		static jstring ACTION_REVIEW();
		static jstring ACTION_REVIEW_SECURE();
		static jstring ACTION_VIDEO_CAPTURE();
		static jstring AUTHORITY();
		static QAndroidJniObject AUTHORITY_URI();
		static jstring EXTRA_BRIGHTNESS();
		static jstring EXTRA_DURATION_LIMIT();
		static jstring EXTRA_FINISH_ON_COMPLETION();
		static jstring EXTRA_FULL_SCREEN();
		static jstring EXTRA_MEDIA_ALBUM();
		static jstring EXTRA_MEDIA_ARTIST();
		static jstring EXTRA_MEDIA_FOCUS();
		static jstring EXTRA_MEDIA_GENRE();
		static jstring EXTRA_MEDIA_PLAYLIST();
		static jstring EXTRA_MEDIA_RADIO_CHANNEL();
		static jstring EXTRA_MEDIA_TITLE();
		static jstring EXTRA_OUTPUT();
		static jstring EXTRA_SCREEN_ORIENTATION();
		static jstring EXTRA_SHOW_ACTION_ICONS();
		static jstring EXTRA_SIZE_LIMIT();
		static jstring EXTRA_VIDEO_QUALITY();
		static jstring INTENT_ACTION_MEDIA_PLAY_FROM_SEARCH();
		static jstring INTENT_ACTION_MEDIA_SEARCH();
		static jstring INTENT_ACTION_MUSIC_PLAYER();
		static jstring INTENT_ACTION_STILL_IMAGE_CAMERA();
		static jstring INTENT_ACTION_STILL_IMAGE_CAMERA_SECURE();
		static jstring INTENT_ACTION_TEXT_OPEN_FROM_SEARCH();
		static jstring INTENT_ACTION_VIDEO_CAMERA();
		static jstring INTENT_ACTION_VIDEO_PLAY_FROM_SEARCH();
		static jstring MEDIA_IGNORE_FILENAME();
		static jstring MEDIA_SCANNER_VOLUME();
		static jstring META_DATA_STILL_IMAGE_CAMERA_PREWARM_SERVICE();
		static jstring UNKNOWN_STRING();
		static jstring VOLUME_EXTERNAL();
		static jstring VOLUME_EXTERNAL_PRIMARY();
		static jstring VOLUME_INTERNAL();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring getVersion(__jni_impl::android::content::Context arg0);
		static jstring getVersion(__jni_impl::android::content::Context arg0, jstring arg1);
		static jstring getVersion(__jni_impl::android::content::Context arg0, const QString &arg1);
		static QAndroidJniObject setIncludePending(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject setRequireOriginal(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject getExternalVolumeNames(__jni_impl::android::content::Context arg0);
		static jstring getVolumeName(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject getMediaScannerUri();
		static QAndroidJniObject getDocumentUri(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1);
		static QAndroidJniObject getMediaUri(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring MediaStore::ACTION_IMAGE_CAPTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_IMAGE_CAPTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::ACTION_IMAGE_CAPTURE_SECURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_IMAGE_CAPTURE_SECURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::ACTION_REVIEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_REVIEW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::ACTION_REVIEW_SECURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_REVIEW_SECURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::ACTION_VIDEO_CAPTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_VIDEO_CAPTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaStore::AUTHORITY_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"AUTHORITY_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring MediaStore::EXTRA_BRIGHTNESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_BRIGHTNESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_DURATION_LIMIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_DURATION_LIMIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_FINISH_ON_COMPLETION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_FINISH_ON_COMPLETION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_FULL_SCREEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_FULL_SCREEN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_MEDIA_ALBUM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_ALBUM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_MEDIA_ARTIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_ARTIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_MEDIA_FOCUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_FOCUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_MEDIA_GENRE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_GENRE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_MEDIA_PLAYLIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_PLAYLIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_MEDIA_RADIO_CHANNEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_RADIO_CHANNEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_MEDIA_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_OUTPUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_OUTPUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_SCREEN_ORIENTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_SCREEN_ORIENTATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_SHOW_ACTION_ICONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_SHOW_ACTION_ICONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_SIZE_LIMIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_SIZE_LIMIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::EXTRA_VIDEO_QUALITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_VIDEO_QUALITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::INTENT_ACTION_MEDIA_PLAY_FROM_SEARCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_MEDIA_PLAY_FROM_SEARCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::INTENT_ACTION_MEDIA_SEARCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_MEDIA_SEARCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::INTENT_ACTION_MUSIC_PLAYER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_MUSIC_PLAYER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::INTENT_ACTION_STILL_IMAGE_CAMERA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_STILL_IMAGE_CAMERA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::INTENT_ACTION_STILL_IMAGE_CAMERA_SECURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_STILL_IMAGE_CAMERA_SECURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::INTENT_ACTION_TEXT_OPEN_FROM_SEARCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_TEXT_OPEN_FROM_SEARCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::INTENT_ACTION_VIDEO_CAMERA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_VIDEO_CAMERA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::INTENT_ACTION_VIDEO_PLAY_FROM_SEARCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_VIDEO_PLAY_FROM_SEARCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::MEDIA_IGNORE_FILENAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"MEDIA_IGNORE_FILENAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::MEDIA_SCANNER_VOLUME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"MEDIA_SCANNER_VOLUME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::META_DATA_STILL_IMAGE_CAMERA_PREWARM_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"META_DATA_STILL_IMAGE_CAMERA_PREWARM_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::UNKNOWN_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"UNKNOWN_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::VOLUME_EXTERNAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"VOLUME_EXTERNAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::VOLUME_EXTERNAL_PRIMARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"VOLUME_EXTERNAL_PRIMARY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore::VOLUME_INTERNAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"VOLUME_INTERNAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void MediaStore::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore",
			"()V"
		);
	}
	
	// Methods
	jstring MediaStore::getVersion(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getVersion",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring MediaStore::getVersion(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getVersion",
			"(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	jstring MediaStore::getVersion(__jni_impl::android::content::Context arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getVersion",
			"(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject MediaStore::setIncludePending(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"setIncludePending",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaStore::setRequireOriginal(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"setRequireOriginal",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaStore::getExternalVolumeNames(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getExternalVolumeNames",
			"(Landroid/content/Context;)Ljava/util/Set;",
			arg0.__jniObject().object()
		);
	}
	jstring MediaStore::getVolumeName(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getVolumeName",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject MediaStore::getMediaScannerUri()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getMediaScannerUri",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject MediaStore::getDocumentUri(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getDocumentUri",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MediaStore::getMediaUri(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getMediaUri",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class MediaStore : public __jni_impl::android::provider::MediaStore
	{
	public:
		MediaStore(QAndroidJniObject obj) { __thiz = obj; }
		MediaStore()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_MEDIASTORE

