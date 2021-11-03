#pragma once

#include "../../JObject.hpp"


namespace android::hardware
{
	class BatteryState : public JObject
	{
	public:
		// Fields
		static jint STATUS_CHARGING();
		static jint STATUS_DISCHARGING();
		static jint STATUS_FULL();
		static jint STATUS_NOT_CHARGING();
		static jint STATUS_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BatteryState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BatteryState(QAndroidJniObject obj);
		
		// Constructors
		BatteryState();
		
		// Methods
		jfloat getCapacity();
		jint getStatus();
		jboolean isPresent();
	};
} // namespace android::hardware

