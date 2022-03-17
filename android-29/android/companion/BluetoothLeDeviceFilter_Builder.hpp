#pragma once

#include "../../JByteArray.hpp"
#include "../bluetooth/le/ScanFilter.def.hpp"
#include "./BluetoothLeDeviceFilter.def.hpp"
#include "../../JString.hpp"
#include "../../java/nio/ByteOrder.def.hpp"
#include "../../java/util/regex/Pattern.def.hpp"
#include "./BluetoothLeDeviceFilter_Builder.def.hpp"

namespace android::companion
{
	// Fields
	
	// Constructors
	inline BluetoothLeDeviceFilter_Builder::BluetoothLeDeviceFilter_Builder()
		: JObject(
			"android.companion.BluetoothLeDeviceFilter$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::companion::BluetoothLeDeviceFilter BluetoothLeDeviceFilter_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/companion/BluetoothLeDeviceFilter;"
		);
	}
	inline android::companion::BluetoothLeDeviceFilter_Builder BluetoothLeDeviceFilter_Builder::setNamePattern(java::util::regex::Pattern arg0) const
	{
		return callObjectMethod(
			"setNamePattern",
			"(Ljava/util/regex/Pattern;)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			arg0.object()
		);
	}
	inline android::companion::BluetoothLeDeviceFilter_Builder BluetoothLeDeviceFilter_Builder::setRawDataFilter(JByteArray arg0, JByteArray arg1) const
	{
		return callObjectMethod(
			"setRawDataFilter",
			"([B[B)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>()
		);
	}
	inline android::companion::BluetoothLeDeviceFilter_Builder BluetoothLeDeviceFilter_Builder::setRenameFromBytes(JString arg0, JString arg1, jint arg2, jint arg3, java::nio::ByteOrder arg4) const
	{
		return callObjectMethod(
			"setRenameFromBytes",
			"(Ljava/lang/String;Ljava/lang/String;IILjava/nio/ByteOrder;)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4.object()
		);
	}
	inline android::companion::BluetoothLeDeviceFilter_Builder BluetoothLeDeviceFilter_Builder::setRenameFromName(JString arg0, JString arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"setRenameFromName",
			"(Ljava/lang/String;Ljava/lang/String;II)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3
		);
	}
	inline android::companion::BluetoothLeDeviceFilter_Builder BluetoothLeDeviceFilter_Builder::setScanFilter(android::bluetooth::le::ScanFilter arg0) const
	{
		return callObjectMethod(
			"setScanFilter",
			"(Landroid/bluetooth/le/ScanFilter;)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			arg0.object()
		);
	}
} // namespace android::companion

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::companion;
#endif
