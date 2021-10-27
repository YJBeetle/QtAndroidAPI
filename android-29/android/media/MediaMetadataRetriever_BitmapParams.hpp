#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Bitmap_Config;
}

namespace android::media
{
	class MediaMetadataRetriever_BitmapParams : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaMetadataRetriever_BitmapParams(QAndroidJniObject obj);
		// Constructors
		MediaMetadataRetriever_BitmapParams();
		
		// Methods
		QAndroidJniObject getActualConfig();
		QAndroidJniObject getPreferredConfig();
		void setPreferredConfig(android::graphics::Bitmap_Config arg0);
	};
} // namespace android::media

