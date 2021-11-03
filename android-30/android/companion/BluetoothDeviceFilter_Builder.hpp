#pragma once

#include "../../JObject.hpp"

namespace android::companion
{
	class BluetoothDeviceFilter;
}
namespace android::os
{
	class ParcelUuid;
}
namespace java::util::regex
{
	class Pattern;
}

namespace android::companion
{
	class BluetoothDeviceFilter_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothDeviceFilter_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothDeviceFilter_Builder(QAndroidJniObject obj);
		
		// Constructors
		BluetoothDeviceFilter_Builder();
		
		// Methods
		android::companion::BluetoothDeviceFilter_Builder addServiceUuid(android::os::ParcelUuid arg0, android::os::ParcelUuid arg1);
		android::companion::BluetoothDeviceFilter build();
		android::companion::BluetoothDeviceFilter_Builder setAddress(jstring arg0);
		android::companion::BluetoothDeviceFilter_Builder setNamePattern(java::util::regex::Pattern arg0);
	};
} // namespace android::companion

