#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaRecorder;
}

namespace android::media
{
	class MediaRecorder_OutputFormat : public __JniBaseClass
	{
	public:
		// Fields
		static jint AAC_ADTS();
		static jint AMR_NB();
		static jint AMR_WB();
		static jint DEFAULT();
		static jint MPEG_2_TS();
		static jint MPEG_4();
		static jint OGG();
		static jint RAW_AMR();
		static jint THREE_GPP();
		static jint WEBM();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRecorder_OutputFormat(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaRecorder_OutputFormat(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

