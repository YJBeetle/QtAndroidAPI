#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Bitmap;
}

namespace android::media
{
	class MediaMetadataEditor : public __JniBaseClass
	{
	public:
		// Fields
		static jint BITMAP_KEY_ARTWORK();
		static jint RATING_KEY_BY_OTHERS();
		static jint RATING_KEY_BY_USER();
		
		MediaMetadataEditor(QAndroidJniObject obj);
		// Constructors
		MediaMetadataEditor() = default;
		
		// Methods
		void addEditableKey(jint arg0);
		void apply();
		void clear();
		QAndroidJniObject getBitmap(jint arg0, android::graphics::Bitmap arg1);
		jintArray getEditableKeys();
		jlong getLong(jint arg0, jlong arg1);
		jobject getObject(jint arg0, jobject arg1);
		jstring getString(jint arg0, jstring arg1);
		QAndroidJniObject putBitmap(jint arg0, android::graphics::Bitmap arg1);
		QAndroidJniObject putLong(jint arg0, jlong arg1);
		QAndroidJniObject putObject(jint arg0, jobject arg1);
		QAndroidJniObject putString(jint arg0, jstring arg1);
		void removeEditableKeys();
	};
} // namespace android::media

