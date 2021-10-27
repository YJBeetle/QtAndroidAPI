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
		
		AudioFormat_Builder(QAndroidJniObject obj);
		// Constructors
		AudioFormat_Builder();
		AudioFormat_Builder(android::media::AudioFormat &arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setChannelIndexMask(jint arg0);
		QAndroidJniObject setChannelMask(jint arg0);
		QAndroidJniObject setEncoding(jint arg0);
		QAndroidJniObject setSampleRate(jint arg0);
	};
} // namespace android::media

