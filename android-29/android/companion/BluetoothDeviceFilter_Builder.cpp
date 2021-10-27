#include "./BluetoothDeviceFilter.hpp"
#include "../os/ParcelUuid.hpp"
#include "../../java/util/regex/Pattern.hpp"
#include "./BluetoothDeviceFilter_Builder.hpp"

namespace android::companion
{
	// Fields
	
	BluetoothDeviceFilter_Builder::BluetoothDeviceFilter_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BluetoothDeviceFilter_Builder::BluetoothDeviceFilter_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.companion.BluetoothDeviceFilter$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject BluetoothDeviceFilter_Builder::addServiceUuid(android::os::ParcelUuid arg0, android::os::ParcelUuid arg1)
	{
		return __thiz.callObjectMethod(
			"addServiceUuid",
			"(Landroid/os/ParcelUuid;Landroid/os/ParcelUuid;)Landroid/companion/BluetoothDeviceFilter$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothDeviceFilter_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/companion/BluetoothDeviceFilter;"
		);
	}
	QAndroidJniObject BluetoothDeviceFilter_Builder::setAddress(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setAddress",
			"(Ljava/lang/String;)Landroid/companion/BluetoothDeviceFilter$Builder;",
			arg0
		);
	}
	QAndroidJniObject BluetoothDeviceFilter_Builder::setAddress(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setAddress",
			"(Ljava/lang/String;)Landroid/companion/BluetoothDeviceFilter$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject BluetoothDeviceFilter_Builder::setNamePattern(java::util::regex::Pattern arg0)
	{
		return __thiz.callObjectMethod(
			"setNamePattern",
			"(Ljava/util/regex/Pattern;)Landroid/companion/BluetoothDeviceFilter$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::companion

