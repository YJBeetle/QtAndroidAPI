#include "./BluetoothDeviceFilter.hpp"
#include "../os/ParcelUuid.hpp"
#include "../../JString.hpp"
#include "../../java/util/regex/Pattern.hpp"
#include "./BluetoothDeviceFilter_Builder.hpp"

namespace android::companion
{
	// Fields
	
	// QAndroidJniObject forward
	BluetoothDeviceFilter_Builder::BluetoothDeviceFilter_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	BluetoothDeviceFilter_Builder::BluetoothDeviceFilter_Builder()
		: JObject(
			"android.companion.BluetoothDeviceFilter$Builder",
			"()V"
		) {}
	
	// Methods
	android::companion::BluetoothDeviceFilter_Builder BluetoothDeviceFilter_Builder::addServiceUuid(android::os::ParcelUuid arg0, android::os::ParcelUuid arg1) const
	{
		return callObjectMethod(
			"addServiceUuid",
			"(Landroid/os/ParcelUuid;Landroid/os/ParcelUuid;)Landroid/companion/BluetoothDeviceFilter$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	android::companion::BluetoothDeviceFilter BluetoothDeviceFilter_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/companion/BluetoothDeviceFilter;"
		);
	}
	android::companion::BluetoothDeviceFilter_Builder BluetoothDeviceFilter_Builder::setAddress(JString arg0) const
	{
		return callObjectMethod(
			"setAddress",
			"(Ljava/lang/String;)Landroid/companion/BluetoothDeviceFilter$Builder;",
			arg0.object<jstring>()
		);
	}
	android::companion::BluetoothDeviceFilter_Builder BluetoothDeviceFilter_Builder::setNamePattern(java::util::regex::Pattern arg0) const
	{
		return callObjectMethod(
			"setNamePattern",
			"(Ljava/util/regex/Pattern;)Landroid/companion/BluetoothDeviceFilter$Builder;",
			arg0.object()
		);
	}
} // namespace android::companion

