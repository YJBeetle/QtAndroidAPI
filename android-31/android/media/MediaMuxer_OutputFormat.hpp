#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaMuxer_OutputFormat : public __JniBaseClass
	{
	public:
		// Fields
		static jint MUXER_OUTPUT_3GPP();
		static jint MUXER_OUTPUT_HEIF();
		static jint MUXER_OUTPUT_MPEG_4();
		static jint MUXER_OUTPUT_OGG();
		static jint MUXER_OUTPUT_WEBM();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaMuxer_OutputFormat(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaMuxer_OutputFormat(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

