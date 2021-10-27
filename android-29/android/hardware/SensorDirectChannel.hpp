#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::hardware
{
	class Sensor;
}
namespace android::hardware
{
	class SensorManager;
}

namespace android::hardware
{
	class SensorDirectChannel : public __JniBaseClass
	{
	public:
		// Fields
		static jint RATE_FAST();
		static jint RATE_NORMAL();
		static jint RATE_STOP();
		static jint RATE_VERY_FAST();
		static jint TYPE_HARDWARE_BUFFER();
		static jint TYPE_MEMORY_FILE();
		
		SensorDirectChannel(QAndroidJniObject obj);
		// Constructors
		SensorDirectChannel() = default;
		
		// Methods
		void close();
		jint configure(android::hardware::Sensor arg0, jint arg1);
		jboolean isOpen();
	};
} // namespace android::hardware

