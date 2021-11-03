#pragma once

#include "../../JObject.hpp"

namespace android::hardware
{
	class Sensor;
}

namespace android::hardware
{
	class SensorDirectChannel : public JObject
	{
	public:
		// Fields
		static jint RATE_FAST();
		static jint RATE_NORMAL();
		static jint RATE_STOP();
		static jint RATE_VERY_FAST();
		static jint TYPE_HARDWARE_BUFFER();
		static jint TYPE_MEMORY_FILE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SensorDirectChannel(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SensorDirectChannel(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jint configure(android::hardware::Sensor arg0, jint arg1);
		jboolean isOpen();
	};
} // namespace android::hardware

