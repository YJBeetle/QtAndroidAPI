#include "../bluetooth/le/ScanFilter.hpp"
#include "./BluetoothLeDeviceFilter.hpp"
#include "../../java/nio/ByteOrder.hpp"
#include "../../java/util/regex/Pattern.hpp"
#include "./BluetoothLeDeviceFilter_Builder.hpp"

namespace android::companion
{
	// Fields
	
	// QJniObject forward
	BluetoothLeDeviceFilter_Builder::BluetoothLeDeviceFilter_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	BluetoothLeDeviceFilter_Builder::BluetoothLeDeviceFilter_Builder()
		: __JniBaseClass(
			"android.companion.BluetoothLeDeviceFilter$Builder",
			"()V"
		) {}
	
	// Methods
	android::companion::BluetoothLeDeviceFilter BluetoothLeDeviceFilter_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/companion/BluetoothLeDeviceFilter;"
		);
	}
	android::companion::BluetoothLeDeviceFilter_Builder BluetoothLeDeviceFilter_Builder::setNamePattern(java::util::regex::Pattern arg0)
	{
		return callObjectMethod(
			"setNamePattern",
			"(Ljava/util/regex/Pattern;)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			arg0.object()
		);
	}
	android::companion::BluetoothLeDeviceFilter_Builder BluetoothLeDeviceFilter_Builder::setRawDataFilter(jbyteArray arg0, jbyteArray arg1)
	{
		return callObjectMethod(
			"setRawDataFilter",
			"([B[B)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			arg0,
			arg1
		);
	}
	android::companion::BluetoothLeDeviceFilter_Builder BluetoothLeDeviceFilter_Builder::setRenameFromBytes(jstring arg0, jstring arg1, jint arg2, jint arg3, java::nio::ByteOrder arg4)
	{
		return callObjectMethod(
			"setRenameFromBytes",
			"(Ljava/lang/String;Ljava/lang/String;IILjava/nio/ByteOrder;)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	android::companion::BluetoothLeDeviceFilter_Builder BluetoothLeDeviceFilter_Builder::setRenameFromName(jstring arg0, jstring arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"setRenameFromName",
			"(Ljava/lang/String;Ljava/lang/String;II)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	android::companion::BluetoothLeDeviceFilter_Builder BluetoothLeDeviceFilter_Builder::setScanFilter(android::bluetooth::le::ScanFilter arg0)
	{
		return callObjectMethod(
			"setScanFilter",
			"(Landroid/bluetooth/le/ScanFilter;)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			arg0.object()
		);
	}
} // namespace android::companion

