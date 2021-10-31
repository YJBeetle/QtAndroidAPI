#include "./BluetoothDeviceFilter.hpp"
#include "../os/ParcelUuid.hpp"
#include "../../java/util/regex/Pattern.hpp"
#include "./BluetoothDeviceFilter_Builder.hpp"

namespace android::companion
{
	// Fields
	
	// QAndroidJniObject forward
	BluetoothDeviceFilter_Builder::BluetoothDeviceFilter_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	BluetoothDeviceFilter_Builder::BluetoothDeviceFilter_Builder()
		: __JniBaseClass(
			"android.companion.BluetoothDeviceFilter$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject BluetoothDeviceFilter_Builder::addServiceUuid(android::os::ParcelUuid arg0, android::os::ParcelUuid arg1)
	{
		return callObjectMethod(
			"addServiceUuid",
			"(Landroid/os/ParcelUuid;Landroid/os/ParcelUuid;)Landroid/companion/BluetoothDeviceFilter$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject BluetoothDeviceFilter_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/companion/BluetoothDeviceFilter;"
		);
	}
	QAndroidJniObject BluetoothDeviceFilter_Builder::setAddress(jstring arg0)
	{
		return callObjectMethod(
			"setAddress",
			"(Ljava/lang/String;)Landroid/companion/BluetoothDeviceFilter$Builder;",
			arg0
		);
	}
	QAndroidJniObject BluetoothDeviceFilter_Builder::setNamePattern(java::util::regex::Pattern arg0)
	{
		return callObjectMethod(
			"setNamePattern",
			"(Ljava/util/regex/Pattern;)Landroid/companion/BluetoothDeviceFilter$Builder;",
			arg0.object()
		);
	}
} // namespace android::companion

