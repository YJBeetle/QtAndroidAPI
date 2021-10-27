#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "./MediaStore.hpp"

namespace android::provider
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
	
	MediaStore::MediaStore(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaStore::MediaStore()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MediaStore::getDocumentUri(android::content::Context arg0, android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getDocumentUri",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MediaStore::getExternalVolumeNames(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getExternalVolumeNames",
			"(Landroid/content/Context;)Ljava/util/Set;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaStore::getMediaScannerUri()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getMediaScannerUri",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject MediaStore::getMediaUri(android::content::Context arg0, android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getMediaUri",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring MediaStore::getVersion(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getVersion",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring MediaStore::getVersion(android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getVersion",
			"(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	jstring MediaStore::getVersion(android::content::Context arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getVersion",
			"(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jstring MediaStore::getVolumeName(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"getVolumeName",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject MediaStore::setIncludePending(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"setIncludePending",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaStore::setRequireOriginal(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore",
			"setRequireOriginal",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::provider

