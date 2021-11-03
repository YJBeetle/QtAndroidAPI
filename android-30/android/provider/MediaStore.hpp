#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::content
{
	class ContentResolver;
}
namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class MediaStore : public JObject
	{
	public:
		// Fields
		static JString ACTION_IMAGE_CAPTURE();
		static JString ACTION_IMAGE_CAPTURE_SECURE();
		static JString ACTION_REVIEW();
		static JString ACTION_REVIEW_SECURE();
		static JString ACTION_VIDEO_CAPTURE();
		static JString AUTHORITY();
		static android::net::Uri AUTHORITY_URI();
		static JString EXTRA_BRIGHTNESS();
		static JString EXTRA_DURATION_LIMIT();
		static JString EXTRA_FINISH_ON_COMPLETION();
		static JString EXTRA_FULL_SCREEN();
		static JString EXTRA_MEDIA_ALBUM();
		static JString EXTRA_MEDIA_ARTIST();
		static JString EXTRA_MEDIA_FOCUS();
		static JString EXTRA_MEDIA_GENRE();
		static JString EXTRA_MEDIA_PLAYLIST();
		static JString EXTRA_MEDIA_RADIO_CHANNEL();
		static JString EXTRA_MEDIA_TITLE();
		static JString EXTRA_OUTPUT();
		static JString EXTRA_SCREEN_ORIENTATION();
		static JString EXTRA_SHOW_ACTION_ICONS();
		static JString EXTRA_SIZE_LIMIT();
		static JString EXTRA_VIDEO_QUALITY();
		static JString INTENT_ACTION_MEDIA_PLAY_FROM_SEARCH();
		static JString INTENT_ACTION_MEDIA_SEARCH();
		static JString INTENT_ACTION_MUSIC_PLAYER();
		static JString INTENT_ACTION_STILL_IMAGE_CAMERA();
		static JString INTENT_ACTION_STILL_IMAGE_CAMERA_SECURE();
		static JString INTENT_ACTION_TEXT_OPEN_FROM_SEARCH();
		static JString INTENT_ACTION_VIDEO_CAMERA();
		static JString INTENT_ACTION_VIDEO_PLAY_FROM_SEARCH();
		static jint MATCH_DEFAULT();
		static jint MATCH_EXCLUDE();
		static jint MATCH_INCLUDE();
		static jint MATCH_ONLY();
		static JString MEDIA_IGNORE_FILENAME();
		static JString MEDIA_SCANNER_VOLUME();
		static JString META_DATA_REVIEW_GALLERY_PREWARM_SERVICE();
		static JString META_DATA_STILL_IMAGE_CAMERA_PREWARM_SERVICE();
		static JString QUERY_ARG_MATCH_FAVORITE();
		static JString QUERY_ARG_MATCH_PENDING();
		static JString QUERY_ARG_MATCH_TRASHED();
		static JString QUERY_ARG_RELATED_URI();
		static JString UNKNOWN_STRING();
		static JString VOLUME_EXTERNAL();
		static JString VOLUME_EXTERNAL_PRIMARY();
		static JString VOLUME_INTERNAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaStore(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore(QAndroidJniObject obj);
		
		// Constructors
		MediaStore();
		
		// Methods
		static android::app::PendingIntent createDeleteRequest(android::content::ContentResolver arg0, JObject arg1);
		static android::app::PendingIntent createFavoriteRequest(android::content::ContentResolver arg0, JObject arg1, jboolean arg2);
		static android::app::PendingIntent createTrashRequest(android::content::ContentResolver arg0, JObject arg1, jboolean arg2);
		static android::app::PendingIntent createWriteRequest(android::content::ContentResolver arg0, JObject arg1);
		static android::net::Uri getDocumentUri(android::content::Context arg0, android::net::Uri arg1);
		static JObject getExternalVolumeNames(android::content::Context arg0);
		static jlong getGeneration(android::content::Context arg0, JString arg1);
		static android::net::Uri getMediaScannerUri();
		static android::net::Uri getMediaUri(android::content::Context arg0, android::net::Uri arg1);
		static JObject getRecentExternalVolumeNames(android::content::Context arg0);
		static jboolean getRequireOriginal(android::net::Uri arg0);
		static JString getVersion(android::content::Context arg0);
		static JString getVersion(android::content::Context arg0, JString arg1);
		static JString getVolumeName(android::net::Uri arg0);
		static android::net::Uri setIncludePending(android::net::Uri arg0);
		static android::net::Uri setRequireOriginal(android::net::Uri arg0);
	};
} // namespace android::provider

