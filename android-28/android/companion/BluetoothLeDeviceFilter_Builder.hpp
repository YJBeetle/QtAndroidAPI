#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::bluetooth::le
{
	class ScanFilter;
}
namespace android::companion
{
	class BluetoothLeDeviceFilter;
}
class JString;
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
	class BluetoothLeDeviceFilter_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothLeDeviceFilter_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothLeDeviceFilter_Builder(QJniObject obj);
		
		// Constructors
		BluetoothLeDeviceFilter_Builder();
		
		// Methods
		android::companion::BluetoothLeDeviceFilter build();
		android::companion::BluetoothLeDeviceFilter_Builder setNamePattern(java::util::regex::Pattern arg0);
		android::companion::BluetoothLeDeviceFilter_Builder setRawDataFilter(JByteArray arg0, JByteArray arg1);
		android::companion::BluetoothLeDeviceFilter_Builder setRenameFromBytes(JString arg0, JString arg1, jint arg2, jint arg3, java::nio::ByteOrder arg4);
		android::companion::BluetoothLeDeviceFilter_Builder setRenameFromName(JString arg0, JString arg1, jint arg2, jint arg3);
		android::companion::BluetoothLeDeviceFilter_Builder setScanFilter(android::bluetooth::le::ScanFilter arg0);
	};
} // namespace android::companion

