#pragma once

#include "../../__JniBaseClass.hpp"
#include "./MediaMetadataEditor.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::media
{
	class MediaMetadataEditor;
}
namespace android::media
{
	class RemoteControlClient;
}

namespace android::media
{
	class RemoteControlClient_MetadataEditor : public android::media::MediaMetadataEditor
	{
	public:
		// Fields
		static jint BITMAP_KEY_ARTWORK();
		
		RemoteControlClient_MetadataEditor(QAndroidJniObject obj);
		// Constructors
		RemoteControlClient_MetadataEditor() = default;
		
		// Methods
		void apply();
		void clear();
		jobject clone();
		QAndroidJniObject putBitmap(jint arg0, android::graphics::Bitmap arg1);
		QAndroidJniObject putLong(jint arg0, jlong arg1);
		QAndroidJniObject putObject(jint arg0, jobject arg1);
		QAndroidJniObject putString(jint arg0, jstring arg1);
	};
} // namespace android::media

