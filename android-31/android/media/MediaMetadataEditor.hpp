#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Bitmap;
}

namespace android::media
{
	class MediaMetadataEditor : public JObject
	{
	public:
		// Fields
		static jint BITMAP_KEY_ARTWORK();
		static jint RATING_KEY_BY_OTHERS();
		static jint RATING_KEY_BY_USER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaMetadataEditor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaMetadataEditor(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addEditableKey(jint arg0);
		void apply();
		void clear();
		android::graphics::Bitmap getBitmap(jint arg0, android::graphics::Bitmap arg1);
		jintArray getEditableKeys();
		jlong getLong(jint arg0, jlong arg1);
		jobject getObject(jint arg0, jobject arg1);
		jstring getString(jint arg0, jstring arg1);
		android::media::MediaMetadataEditor putBitmap(jint arg0, android::graphics::Bitmap arg1);
		android::media::MediaMetadataEditor putLong(jint arg0, jlong arg1);
		android::media::MediaMetadataEditor putObject(jint arg0, jobject arg1);
		android::media::MediaMetadataEditor putString(jint arg0, jstring arg1);
		void removeEditableKeys();
	};
} // namespace android::media

