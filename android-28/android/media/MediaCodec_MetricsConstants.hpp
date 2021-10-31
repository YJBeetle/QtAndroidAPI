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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCodec_MetricsConstants(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec_MetricsConstants(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

