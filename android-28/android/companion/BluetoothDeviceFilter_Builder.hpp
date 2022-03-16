#pragma once

#include "./BluetoothDeviceFilter.def.hpp"
#include "../os/ParcelUuid.def.hpp"
#include "../../JString.hpp"
#include "../../java/util/regex/Pattern.def.hpp"
#include "./BluetoothDeviceFilter_Builder.def.hpp"

namespace android::companion
{
	// Fields
	
	// Constructors
	inline BluetoothDeviceFilter_Builder::BluetoothDeviceFilter_Builder()
		: JObject(
			"android.companion.BluetoothDeviceFilter$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::companion::BluetoothDeviceFilter_Builder BluetoothDeviceFilter_Builder::addServiceUuid(android::os::ParcelUuid arg0, android::os::ParcelUuid arg1) const
	{
		return callObjectMethod(
			"addServiceUuid",
			"(Landroid/os/ParcelUuid;Landroid/os/ParcelUuid;)Landroid/companion/BluetoothDeviceFilter$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::companion::BluetoothDeviceFilter BluetoothDeviceFilter_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/companion/BluetoothDeviceFilter;"
		);
	}
	inline android::companion::BluetoothDeviceFilter_Builder BluetoothDeviceFilter_Builder::setAddress(JString arg0) const
	{
		return callObjectMethod(
			"setAddress",
			"(Ljava/lang/String;)Landroid/companion/BluetoothDeviceFilter$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::companion::BluetoothDeviceFilter_Builder BluetoothDeviceFilter_Builder::setNamePattern(java::util::regex::Pattern arg0) const
	{
		return callObjectMethod(
			"setNamePattern",
			"(Ljava/util/regex/Pattern;)Landroid/companion/BluetoothDeviceFilter$Builder;",
			arg0.object()
		);
	}
} // namespace android::companion

// Base class headers

