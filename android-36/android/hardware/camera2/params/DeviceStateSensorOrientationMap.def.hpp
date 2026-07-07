#pragma once

#include "../../../../JObject.hpp"

class JObject;

namespace android::hardware::camera2::params
{
	class DeviceStateSensorOrientationMap : public JObject
	{
	public:
		// Fields
		static jlong FOLDED();
		static jlong NORMAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit DeviceStateSensorOrientationMap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DeviceStateSensorOrientationMap(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getSensorOrientation(jlong arg0) const;
		jint hashCode() const;
	};
} // namespace android::hardware::camera2::params

