#pragma once

#include "../../../../JObject.hpp"

namespace android::hardware::camera2::params
{
	class DeviceStateSensorOrientationMap;
}

namespace android::hardware::camera2::params
{
	class DeviceStateSensorOrientationMap_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DeviceStateSensorOrientationMap_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DeviceStateSensorOrientationMap_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DeviceStateSensorOrientationMap_Builder();
		
		// Methods
		android::hardware::camera2::params::DeviceStateSensorOrientationMap_Builder addOrientationForState(jlong arg0, jlong arg1) const;
		android::hardware::camera2::params::DeviceStateSensorOrientationMap build() const;
	};
} // namespace android::hardware::camera2::params

