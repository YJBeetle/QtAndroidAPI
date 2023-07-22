#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Bitmap_Config;
}

namespace android::media
{
	class MediaMetadataRetriever_BitmapParams : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaMetadataRetriever_BitmapParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaMetadataRetriever_BitmapParams(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaMetadataRetriever_BitmapParams();
		
		// Methods
		android::graphics::Bitmap_Config getActualConfig() const;
		android::graphics::Bitmap_Config getPreferredConfig() const;
		void setPreferredConfig(android::graphics::Bitmap_Config arg0) const;
	};
} // namespace android::media

