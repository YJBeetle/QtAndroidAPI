#pragma once

#include "../app/PendingIntent.def.hpp"
#include "../content/ContentResolver.def.hpp"
#include "../content/Context.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./MediaStore.def.hpp"

namespace android::provider
{
	// Fields
	inline JString MediaStore::ACTION_IMAGE_CAPTURE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_IMAGE_CAPTURE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::ACTION_IMAGE_CAPTURE_SECURE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_IMAGE_CAPTURE_SECURE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::ACTION_REVIEW()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_REVIEW",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::ACTION_REVIEW_SECURE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_REVIEW_SECURE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::ACTION_VIDEO_CAPTURE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"ACTION_VIDEO_CAPTURE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri MediaStore::AUTHORITY_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"AUTHORITY_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString MediaStore::EXTRA_BRIGHTNESS()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_BRIGHTNESS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::EXTRA_DURATION_LIMIT()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_DURATION_LIMIT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::EXTRA_FINISH_ON_COMPLETION()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_FINISH_ON_COMPLETION",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::EXTRA_FULL_SCREEN()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_FULL_SCREEN",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::EXTRA_MEDIA_ALBUM()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_ALBUM",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::EXTRA_MEDIA_ARTIST()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_ARTIST",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::EXTRA_MEDIA_FOCUS()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_FOCUS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::EXTRA_MEDIA_GENRE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_GENRE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::EXTRA_MEDIA_PLAYLIST()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_PLAYLIST",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::EXTRA_MEDIA_RADIO_CHANNEL()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_RADIO_CHANNEL",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::EXTRA_MEDIA_TITLE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_MEDIA_TITLE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::EXTRA_OUTPUT()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_OUTPUT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::EXTRA_SCREEN_ORIENTATION()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_SCREEN_ORIENTATION",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::EXTRA_SHOW_ACTION_ICONS()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_SHOW_ACTION_ICONS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::EXTRA_SIZE_LIMIT()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_SIZE_LIMIT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::EXTRA_VIDEO_QUALITY()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"EXTRA_VIDEO_QUALITY",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::INTENT_ACTION_MEDIA_PLAY_FROM_SEARCH()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_MEDIA_PLAY_FROM_SEARCH",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::INTENT_ACTION_MEDIA_SEARCH()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_MEDIA_SEARCH",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::INTENT_ACTION_MUSIC_PLAYER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_MUSIC_PLAYER",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::INTENT_ACTION_STILL_IMAGE_CAMERA()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_STILL_IMAGE_CAMERA",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::INTENT_ACTION_STILL_IMAGE_CAMERA_SECURE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_STILL_IMAGE_CAMERA_SECURE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::INTENT_ACTION_TEXT_OPEN_FROM_SEARCH()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_TEXT_OPEN_FROM_SEARCH",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::INTENT_ACTION_VIDEO_CAMERA()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_VIDEO_CAMERA",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::INTENT_ACTION_VIDEO_PLAY_FROM_SEARCH()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"INTENT_ACTION_VIDEO_PLAY_FROM_SEARCH",
			"Ljava/lang/String;"
		);
	}
	inline jint MediaStore::MATCH_DEFAULT()
	{
		return getStaticField<jint>(
			"android.provider.MediaStore",
			"MATCH_DEFAULT"
		);
	}
	inline jint MediaStore::MATCH_EXCLUDE()
	{
		return getStaticField<jint>(
			"android.provider.MediaStore",
			"MATCH_EXCLUDE"
		);
	}
	inline jint MediaStore::MATCH_INCLUDE()
	{
		return getStaticField<jint>(
			"android.provider.MediaStore",
			"MATCH_INCLUDE"
		);
	}
	inline jint MediaStore::MATCH_ONLY()
	{
		return getStaticField<jint>(
			"android.provider.MediaStore",
			"MATCH_ONLY"
		);
	}
	inline JString MediaStore::MEDIA_IGNORE_FILENAME()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"MEDIA_IGNORE_FILENAME",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::MEDIA_SCANNER_VOLUME()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"MEDIA_SCANNER_VOLUME",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::META_DATA_REVIEW_GALLERY_PREWARM_SERVICE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"META_DATA_REVIEW_GALLERY_PREWARM_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::META_DATA_STILL_IMAGE_CAMERA_PREWARM_SERVICE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"META_DATA_STILL_IMAGE_CAMERA_PREWARM_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::QUERY_ARG_MATCH_FAVORITE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"QUERY_ARG_MATCH_FAVORITE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::QUERY_ARG_MATCH_PENDING()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"QUERY_ARG_MATCH_PENDING",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::QUERY_ARG_MATCH_TRASHED()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"QUERY_ARG_MATCH_TRASHED",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::QUERY_ARG_RELATED_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"QUERY_ARG_RELATED_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::UNKNOWN_STRING()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"UNKNOWN_STRING",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::VOLUME_EXTERNAL()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"VOLUME_EXTERNAL",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::VOLUME_EXTERNAL_PRIMARY()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"VOLUME_EXTERNAL_PRIMARY",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore::VOLUME_INTERNAL()
	{
		return getStaticObjectField(
			"android.provider.MediaStore",
			"VOLUME_INTERNAL",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline MediaStore::MediaStore()
		: JObject(
			"android.provider.MediaStore",
			"()V"
		) {}
	
	// Methods
	inline android::app::PendingIntent MediaStore::createDeleteRequest(android::content::ContentResolver arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"createDeleteRequest",
			"(Landroid/content/ContentResolver;Ljava/util/Collection;)Landroid/app/PendingIntent;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::app::PendingIntent MediaStore::createFavoriteRequest(android::content::ContentResolver arg0, JObject arg1, jboolean arg2)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"createFavoriteRequest",
			"(Landroid/content/ContentResolver;Ljava/util/Collection;Z)Landroid/app/PendingIntent;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline android::app::PendingIntent MediaStore::createTrashRequest(android::content::ContentResolver arg0, JObject arg1, jboolean arg2)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"createTrashRequest",
			"(Landroid/content/ContentResolver;Ljava/util/Collection;Z)Landroid/app/PendingIntent;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline android::app::PendingIntent MediaStore::createWriteRequest(android::content::ContentResolver arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"createWriteRequest",
			"(Landroid/content/ContentResolver;Ljava/util/Collection;)Landroid/app/PendingIntent;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::net::Uri MediaStore::getDocumentUri(android::content::Context arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"getDocumentUri",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject MediaStore::getExternalVolumeNames(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"getExternalVolumeNames",
			"(Landroid/content/Context;)Ljava/util/Set;",
			arg0.object()
		);
	}
	inline jlong MediaStore::getGeneration(android::content::Context arg0, JString arg1)
	{
		return callStaticMethod<jlong>(
			"android.provider.MediaStore",
			"getGeneration",
			"(Landroid/content/Context;Ljava/lang/String;)J",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::net::Uri MediaStore::getMediaScannerUri()
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"getMediaScannerUri",
			"()Landroid/net/Uri;"
		);
	}
	inline android::net::Uri MediaStore::getMediaUri(android::content::Context arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"getMediaUri",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject MediaStore::getRecentExternalVolumeNames(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"getRecentExternalVolumeNames",
			"(Landroid/content/Context;)Ljava/util/Set;",
			arg0.object()
		);
	}
	inline jboolean MediaStore::getRequireOriginal(android::net::Uri arg0)
	{
		return callStaticMethod<jboolean>(
			"android.provider.MediaStore",
			"getRequireOriginal",
			"(Landroid/net/Uri;)Z",
			arg0.object()
		);
	}
	inline JString MediaStore::getVersion(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"getVersion",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString MediaStore::getVersion(android::content::Context arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"getVersion",
			"(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JString MediaStore::getVolumeName(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"getVolumeName",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline android::net::Uri MediaStore::setIncludePending(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"setIncludePending",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	inline android::net::Uri MediaStore::setRequireOriginal(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore",
			"setRequireOriginal",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object()
		);
	}
} // namespace android::provider

// Base class headers

