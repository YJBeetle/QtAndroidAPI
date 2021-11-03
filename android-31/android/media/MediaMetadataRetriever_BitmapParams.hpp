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
		MediaMetadataRetriever_BitmapParams(QAndroidJniObject obj);
		
		// Constructors
		MediaMetadataRetriever_BitmapParams();
		
		// Methods
		android::graphics::Bitmap_Config getActualConfig();
		android::graphics::Bitmap_Config getPreferredConfig();
		void setPreferredConfig(android::graphics::Bitmap_Config arg0);
	};
} // namespace android::media

