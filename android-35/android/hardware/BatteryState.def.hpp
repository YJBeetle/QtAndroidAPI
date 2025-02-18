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
		
		// QJniObject forward
		template<typename ...Ts> explicit BatteryState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BatteryState(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BatteryState();
		
		// Methods
		jfloat getCapacity() const;
		jint getStatus() const;
		jboolean isPresent() const;
	};
} // namespace android::hardware

