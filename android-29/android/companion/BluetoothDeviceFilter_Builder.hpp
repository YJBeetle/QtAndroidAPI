#pragma once

#include "../../__JniBaseClass.hpp"

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
	class BluetoothDeviceFilter_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothDeviceFilter_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothDeviceFilter_Builder(QAndroidJniObject obj);
		
		// Constructors
		BluetoothDeviceFilter_Builder();
		
		// Methods
		QAndroidJniObject addServiceUuid(android::os::ParcelUuid arg0, android::os::ParcelUuid arg1);
		QAndroidJniObject build();
		QAndroidJniObject setAddress(jstring arg0);
		QAndroidJniObject setNamePattern(java::util::regex::Pattern arg0);
	};
} // namespace android::companion

