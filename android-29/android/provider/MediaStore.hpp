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
		static QAndroidJniObject ACTION_IMAGE_CAPTURE();
		static QAndroidJniObject ACTION_IMAGE_CAPTURE_SECURE();
		static QAndroidJniObject ACTION_REVIEW();
		static QAndroidJniObject ACTION_REVIEW_SECURE();
		static QAndroidJniObject ACTION_VIDEO_CAPTURE();
		static QAndroidJniObject AUTHORITY();
		static QAndroidJniObject AUTHORITY_URI();
		static QAndroidJniObject EXTRA_BRIGHTNESS();
		static QAndroidJniObject EXTRA_DURATION_LIMIT();
		static QAndroidJniObject EXTRA_FINISH_ON_COMPLETION();
		static QAndroidJniObject EXTRA_FULL_SCREEN();
		static QAndroidJniObject EXTRA_MEDIA_ALBUM();
		static QAndroidJniObject EXTRA_MEDIA_ARTIST();
		static QAndroidJniObject EXTRA_MEDIA_FOCUS();
		static QAndroidJniObject EXTRA_MEDIA_GENRE();
		static QAndroidJniObject EXTRA_MEDIA_PLAYLIST();
		static QAndroidJniObject EXTRA_MEDIA_RADIO_CHANNEL();
		static QAndroidJniObject EXTRA_MEDIA_TITLE();
		static QAndroidJniObject EXTRA_OUTPUT();
		static QAndroidJniObject EXTRA_SCREEN_ORIENTATION();
		static QAndroidJniObject EXTRA_SHOW_ACTION_ICONS();
		static QAndroidJniObject EXTRA_SIZE_LIMIT();
		static QAndroidJniObject EXTRA_VIDEO_QUALITY();
		static QAndroidJniObject INTENT_ACTION_MEDIA_PLAY_FROM_SEARCH();
		static QAndroidJniObject INTENT_ACTION_MEDIA_SEARCH();
		static QAndroidJniObject INTENT_ACTION_MUSIC_PLAYER();
		static QAndroidJniObject INTENT_ACTION_STILL_IMAGE_CAMERA();
		static QAndroidJniObject INTENT_ACTION_STILL_IMAGE_CAMERA_SECURE();
		static QAndroidJniObject INTENT_ACTION_TEXT_OPEN_FROM_SEARCH();
		static QAndroidJniObject INTENT_ACTION_VIDEO_CAMERA();
		static QAndroidJniObject INTENT_ACTION_VIDEO_PLAY_FROM_SEARCH();
		static QAndroidJniObject MEDIA_IGNORE_FILENAME();
		static QAndroidJniObject MEDIA_SCANNER_VOLUME();
		static QAndroidJniObject META_DATA_STILL_IMAGE_CAMERA_PREWARM_SERVICE();
		static QAndroidJniObject UNKNOWN_STRING();
		static QAndroidJniObject VOLUME_EXTERNAL();
		static QAndroidJniObject VOLUME_EXTERNAL_PRIMARY();
		static QAndroidJniObject VOLUME_INTERNAL();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getVersion(__jni_impl::android::content::Context arg0);
		static QAndroidJniObject getVersion(__jni_impl::android::content::Context arg0, jstring arg1);
		static QAndroidJniObject setIncludePending(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject setRequireOriginal(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject getExternalVolumeNames(__jni_impl::android::content::Context arg0);
		static QAndroidJniObject getVolumeName(__jni_impl::android::net::Uri arg0);
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
	QAndroidJniObject MediaStore::ACTION_IMAGE_CAPTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_IMAGE_CAPTURE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::ACTION_IMAGE_CAPTURE_SECURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_IMAGE_CAPTURE_SECURE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::ACTION_REVIEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_REVIEW",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::ACTION_REVIEW_SECURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_REVIEW_SECURE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::ACTION_VIDEO_CAPTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_VIDEO_CAPTURE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"AUTHORITY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::AUTHORITY_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"AUTHORITY_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject MediaStore::EXTRA_BRIGHTNESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_BRIGHTNESS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::EXTRA_DURATION_LIMIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_DURATION_LIMIT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::EXTRA_FINISH_ON_COMPLETION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_FINISH_ON_COMPLETION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::EXTRA_FULL_SCREEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_FULL_SCREEN",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::EXTRA_MEDIA_ALBUM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_ALBUM",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::EXTRA_MEDIA_ARTIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_ARTIST",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::EXTRA_MEDIA_FOCUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_FOCUS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::EXTRA_MEDIA_GENRE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_GENRE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::EXTRA_MEDIA_PLAYLIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_PLAYLIST",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::EXTRA_MEDIA_RADIO_CHANNEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_RADIO_CHANNEL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::EXTRA_MEDIA_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_TITLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::EXTRA_OUTPUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_OUTPUT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::EXTRA_SCREEN_ORIENTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_SCREEN_ORIENTATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::EXTRA_SHOW_ACTION_ICONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_SHOW_ACTION_ICONS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::EXTRA_SIZE_LIMIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_SIZE_LIMIT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::EXTRA_VIDEO_QUALITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_VIDEO_QUALITY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::INTENT_ACTION_MEDIA_PLAY_FROM_SEARCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_MEDIA_PLAY_FROM_SEARCH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::INTENT_ACTION_MEDIA_SEARCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_MEDIA_SEARCH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::INTENT_ACTION_MUSIC_PLAYER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_MUSIC_PLAYER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::INTENT_ACTION_STILL_IMAGE_CAMERA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_STILL_IMAGE_CAMERA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::INTENT_ACTION_STILL_IMAGE_CAMERA_SECURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_STILL_IMAGE_CAMERA_SECURE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::INTENT_ACTION_TEXT_OPEN_FROM_SEARCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_TEXT_OPEN_FROM_SEARCH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::INTENT_ACTION_VIDEO_CAMERA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_VIDEO_CAMERA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::INTENT_ACTION_VIDEO_PLAY_FROM_SEARCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_VIDEO_PLAY_FROM_SEARCH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::MEDIA_IGNORE_FILENAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"MEDIA_IGNORE_FILENAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::MEDIA_SCANNER_VOLUME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"MEDIA_SCANNER_VOLUME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::META_DATA_STILL_IMAGE_CAMERA_PREWARM_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"META_DATA_STILL_IMAGE_CAMERA_PREWARM_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::UNKNOWN_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"UNKNOWN_STRING",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::VOLUME_EXTERNAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"VOLUME_EXTERNAL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::VOLUME_EXTERNAL_PRIMARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"VOLUME_EXTERNAL_PRIMARY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore::VOLUME_INTERNAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore",
			"VOLUME_INTERNAL",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void MediaStore::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore",
			"()V");
	}
	
	// Methods
	QAndroidJniObject MediaStore::getVersion(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getVersion",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MediaStore::getVersion(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getVersion",
			"(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject MediaStore::setIncludePending(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"setIncludePending",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MediaStore::setRequireOriginal(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"setRequireOriginal",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MediaStore::getExternalVolumeNames(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getExternalVolumeNames",
			"(Landroid/content/Context;)Ljava/util/Set;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MediaStore::getVolumeName(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getVolumeName",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MediaStore::getMediaScannerUri()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getMediaScannerUri",
			"()Landroid/net/Uri;");
	}
	QAndroidJniObject MediaStore::getDocumentUri(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getDocumentUri",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject MediaStore::getMediaUri(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getMediaUri",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
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

