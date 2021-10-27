#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaExtractor_MetricsConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FORMAT();
		static jstring MIME_TYPE();
		static jstring TRACKS();
		
		MediaExtractor_MetricsConstants(QAndroidJniObject obj);
		// Constructors
		MediaExtractor_MetricsConstants() = default;
		
		// Methods
	};
} // namespace android::media

