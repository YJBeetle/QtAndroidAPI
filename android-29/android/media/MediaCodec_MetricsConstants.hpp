#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaCodec_MetricsConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CODEC();
		static jstring ENCODER();
		static jstring HEIGHT();
		static jstring MIME_TYPE();
		static jstring MODE();
		static jstring MODE_AUDIO();
		static jstring MODE_VIDEO();
		static jstring ROTATION();
		static jstring SECURE();
		static jstring WIDTH();
		
		MediaCodec_MetricsConstants(QAndroidJniObject obj);
		// Constructors
		MediaCodec_MetricsConstants() = default;
		
		// Methods
	};
} // namespace android::media

