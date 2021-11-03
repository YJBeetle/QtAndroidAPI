#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::graphics
{
	class Bitmap;
}
class JObject;
class JString;

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
		void addEditableKey(jint arg0) const;
		void apply() const;
		void clear() const;
		android::graphics::Bitmap getBitmap(jint arg0, android::graphics::Bitmap arg1) const;
		JIntArray getEditableKeys() const;
		jlong getLong(jint arg0, jlong arg1) const;
		JObject getObject(jint arg0, JObject arg1) const;
		JString getString(jint arg0, JString arg1) const;
		android::media::MediaMetadataEditor putBitmap(jint arg0, android::graphics::Bitmap arg1) const;
		android::media::MediaMetadataEditor putLong(jint arg0, jlong arg1) const;
		android::media::MediaMetadataEditor putObject(jint arg0, JObject arg1) const;
		android::media::MediaMetadataEditor putString(jint arg0, JString arg1) const;
		void removeEditableKeys() const;
	};
} // namespace android::media

