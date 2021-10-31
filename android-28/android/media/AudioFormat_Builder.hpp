#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class AudioFormat;
}

namespace android::media
{
	class AudioFormat_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioFormat_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioFormat_Builder(QAndroidJniObject obj);
		
		// Constructors
		AudioFormat_Builder();
		AudioFormat_Builder(android::media::AudioFormat arg0);
		
		// Methods
		android::media::AudioFormat build();
		android::media::AudioFormat_Builder setChannelIndexMask(jint arg0);
		android::media::AudioFormat_Builder setChannelMask(jint arg0);
		android::media::AudioFormat_Builder setEncoding(jint arg0);
		android::media::AudioFormat_Builder setSampleRate(jint arg0);
	};
} // namespace android::media

