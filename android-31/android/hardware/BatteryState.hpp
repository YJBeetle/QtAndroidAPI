#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::hardware
{
	class BatteryState : public __JniBaseClass
	{
	public:
		// Fields
		static jint STATUS_CHARGING();
		static jint STATUS_DISCHARGING();
		static jint STATUS_FULL();
		static jint STATUS_NOT_CHARGING();
		static jint STATUS_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit BatteryState(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BatteryState(QJniObject obj);
		
		// Constructors
		BatteryState();
		
		// Methods
		jfloat getCapacity();
		jint getStatus();
		jboolean isPresent();
	};
} // namespace android::hardware

