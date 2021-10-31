#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::bluetooth::le
{
	class ScanFilter;
}
namespace android::companion
{
	class BluetoothLeDeviceFilter;
}
namespace java::nio
{
	class ByteOrder;
}
namespace java::util::regex
{
	class Pattern;
}

namespace android::companion
{
	class BluetoothLeDeviceFilter_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothLeDeviceFilter_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothLeDeviceFilter_Builder(QAndroidJniObject obj);
		
		// Constructors
		BluetoothLeDeviceFilter_Builder();
		
		// Methods
		android::companion::BluetoothLeDeviceFilter build();
		android::companion::BluetoothLeDeviceFilter_Builder setNamePattern(java::util::regex::Pattern arg0);
		android::companion::BluetoothLeDeviceFilter_Builder setRawDataFilter(jbyteArray arg0, jbyteArray arg1);
		android::companion::BluetoothLeDeviceFilter_Builder setRenameFromBytes(jstring arg0, jstring arg1, jint arg2, jint arg3, java::nio::ByteOrder arg4);
		android::companion::BluetoothLeDeviceFilter_Builder setRenameFromName(jstring arg0, jstring arg1, jint arg2, jint arg3);
		android::companion::BluetoothLeDeviceFilter_Builder setScanFilter(android::bluetooth::le::ScanFilter arg0);
	};
} // namespace android::companion

