#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class AudioTimestamp : public __JniBaseClass
	{
	public:
		// Fields
		static jint TIMEBASE_BOOTTIME();
		static jint TIMEBASE_MONOTONIC();
		jlong framePosition();
		jlong nanoTime();
		
		AudioTimestamp(QAndroidJniObject obj);
		// Constructors
		AudioTimestamp();
		
		// Methods
	};
} // namespace android::media

