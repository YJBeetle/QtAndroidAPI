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
		QAndroidJniObject build();
		QAndroidJniObject setNamePattern(java::util::regex::Pattern arg0);
		QAndroidJniObject setRawDataFilter(jbyteArray arg0, jbyteArray arg1);
		QAndroidJniObject setRenameFromBytes(jstring arg0, jstring arg1, jint arg2, jint arg3, java::nio::ByteOrder arg4);
		QAndroidJniObject setRenameFromName(jstring arg0, jstring arg1, jint arg2, jint arg3);
		QAndroidJniObject setScanFilter(android::bluetooth::le::ScanFilter arg0);
	};
} // namespace android::companion

