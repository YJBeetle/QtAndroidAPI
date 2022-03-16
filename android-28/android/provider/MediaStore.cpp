#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./MediaStore.hpp"

namespace android::provider
{
	// Fields
	JString MediaStore::ACTION_IMAGE_CAPTURE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_IMAGE_CAPTURE",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::ACTION_IMAGE_CAPTURE_SECURE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_IMAGE_CAPTURE_SECURE",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::ACTION_VIDEO_CAPTURE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_VIDEO_CAPTURE",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::EXTRA_DURATION_LIMIT()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_DURATION_LIMIT",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::EXTRA_FINISH_ON_COMPLETION()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_FINISH_ON_COMPLETION",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::EXTRA_FULL_SCREEN()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_FULL_SCREEN",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::EXTRA_MEDIA_ALBUM()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_ALBUM",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::EXTRA_MEDIA_ARTIST()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_ARTIST",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::EXTRA_MEDIA_FOCUS()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_FOCUS",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::EXTRA_MEDIA_GENRE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_GENRE",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::EXTRA_MEDIA_PLAYLIST()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_PLAYLIST",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::EXTRA_MEDIA_RADIO_CHANNEL()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_RADIO_CHANNEL",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::EXTRA_MEDIA_TITLE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_TITLE",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::EXTRA_OUTPUT()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_OUTPUT",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::EXTRA_SCREEN_ORIENTATION()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_SCREEN_ORIENTATION",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::EXTRA_SHOW_ACTION_ICONS()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_SHOW_ACTION_ICONS",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::EXTRA_SIZE_LIMIT()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_SIZE_LIMIT",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::EXTRA_VIDEO_QUALITY()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_VIDEO_QUALITY",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::INTENT_ACTION_MEDIA_PLAY_FROM_SEARCH()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_MEDIA_PLAY_FROM_SEARCH",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::INTENT_ACTION_MEDIA_SEARCH()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_MEDIA_SEARCH",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::INTENT_ACTION_MUSIC_PLAYER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_MUSIC_PLAYER",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::INTENT_ACTION_STILL_IMAGE_CAMERA()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_STILL_IMAGE_CAMERA",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::INTENT_ACTION_STILL_IMAGE_CAMERA_SECURE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_STILL_IMAGE_CAMERA_SECURE",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::INTENT_ACTION_TEXT_OPEN_FROM_SEARCH()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_TEXT_OPEN_FROM_SEARCH",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::INTENT_ACTION_VIDEO_CAMERA()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_VIDEO_CAMERA",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::INTENT_ACTION_VIDEO_PLAY_FROM_SEARCH()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_VIDEO_PLAY_FROM_SEARCH",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::MEDIA_IGNORE_FILENAME()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"MEDIA_IGNORE_FILENAME",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::MEDIA_SCANNER_VOLUME()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"MEDIA_SCANNER_VOLUME",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::META_DATA_STILL_IMAGE_CAMERA_PREWARM_SERVICE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"META_DATA_STILL_IMAGE_CAMERA_PREWARM_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore::UNKNOWN_STRING()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"UNKNOWN_STRING",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	MediaStore::MediaStore()
		: JObject(
			"android.provider.MediaStore",
			"()V"
		) {}
	
	// Methods
	android::net::Uri MediaStore::getDocumentUri(android::content::Context arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"getDocumentUri",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	android::net::Uri MediaStore::getMediaScannerUri()
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"getMediaScannerUri",
			"()Landroid/net/Uri;"
		);
	}
	JString MediaStore::getVersion(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"getVersion",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		);
	}
} // namespace android::provider

