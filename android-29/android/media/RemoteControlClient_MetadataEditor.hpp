#pragma once

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
class JObject;
class JString;

namespace android::media
{
	class RemoteControlClient_MetadataEditor : public android::media::MediaMetadataEditor
	{
	public:
		// Fields
		static jint BITMAP_KEY_ARTWORK();
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteControlClient_MetadataEditor(const char *className, const char *sig, Ts...agv) : android::media::MediaMetadataEditor(className, sig, std::forward<Ts>(agv)...) {}
		RemoteControlClient_MetadataEditor(QJniObject obj);
		
		// Constructors
		
		// Methods
		void apply();
		void clear();
		JObject clone();
		android::media::RemoteControlClient_MetadataEditor putBitmap(jint arg0, android::graphics::Bitmap arg1);
		android::media::RemoteControlClient_MetadataEditor putLong(jint arg0, jlong arg1);
		android::media::RemoteControlClient_MetadataEditor putObject(jint arg0, JObject arg1);
		android::media::RemoteControlClient_MetadataEditor putString(jint arg0, JString arg1);
	};
} // namespace android::media

