#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
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
		static android::net::Uri AUTHORITY_URI();
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaStore(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore(QAndroidJniObject obj);
		
		// Constructors
		MediaStore();
		
		// Methods
		static android::net::Uri getDocumentUri(android::content::Context arg0, android::net::Uri arg1);
		static __JniBaseClass getExternalVolumeNames(android::content::Context arg0);
		static android::net::Uri getMediaScannerUri();
		static android::net::Uri getMediaUri(android::content::Context arg0, android::net::Uri arg1);
		static jstring getVersion(android::content::Context arg0);
		static jstring getVersion(android::content::Context arg0, jstring arg1);
		static jstring getVolumeName(android::net::Uri arg0);
		static android::net::Uri setIncludePending(android::net::Uri arg0);
		static android::net::Uri setRequireOriginal(android::net::Uri arg0);
	};
} // namespace android::provider

