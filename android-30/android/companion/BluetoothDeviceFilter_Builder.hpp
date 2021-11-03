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
class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothDeviceFilter_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothDeviceFilter_Builder(QJniObject obj);
		
		// Constructors
		BluetoothDeviceFilter_Builder();
		
		// Methods
		android::companion::BluetoothDeviceFilter_Builder addServiceUuid(android::os::ParcelUuid arg0, android::os::ParcelUuid arg1) const;
		android::companion::BluetoothDeviceFilter build() const;
		android::companion::BluetoothDeviceFilter_Builder setAddress(JString arg0) const;
		android::companion::BluetoothDeviceFilter_Builder setNamePattern(java::util::regex::Pattern arg0) const;
	};
} // namespace android::companion

