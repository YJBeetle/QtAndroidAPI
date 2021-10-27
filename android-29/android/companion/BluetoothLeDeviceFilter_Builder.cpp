#include "../bluetooth/le/ScanFilter.hpp"
#include "./BluetoothLeDeviceFilter.hpp"
#include "../../java/nio/ByteOrder.hpp"
#include "../../java/util/regex/Pattern.hpp"
#include "./BluetoothLeDeviceFilter_Builder.hpp"

namespace android::companion
{
	// Fields
	
	BluetoothLeDeviceFilter_Builder::BluetoothLeDeviceFilter_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BluetoothLeDeviceFilter_Builder::BluetoothLeDeviceFilter_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.companion.BluetoothLeDeviceFilter$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject BluetoothLeDeviceFilter_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/companion/BluetoothLeDeviceFilter;"
		);
	}
	QAndroidJniObject BluetoothLeDeviceFilter_Builder::setNamePattern(java::util::regex::Pattern arg0)
	{
		return __thiz.callObjectMethod(
			"setNamePattern",
			"(Ljava/util/regex/Pattern;)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothLeDeviceFilter_Builder::setRawDataFilter(jbyteArray arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"setRawDataFilter",
			"([B[B)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject BluetoothLeDeviceFilter_Builder::setRenameFromBytes(jstring arg0, jstring arg1, jint arg2, jint arg3, java::nio::ByteOrder arg4)
	{
		return __thiz.callObjectMethod(
			"setRenameFromBytes",
			"(Ljava/lang/String;Ljava/lang/String;IILjava/nio/ByteOrder;)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothLeDeviceFilter_Builder::setRenameFromBytes(const QString &arg0, const QString &arg1, jint arg2, jint arg3, java::nio::ByteOrder arg4)
	{
		return __thiz.callObjectMethod(
			"setRenameFromBytes",
			"(Ljava/lang/String;Ljava/lang/String;IILjava/nio/ByteOrder;)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothLeDeviceFilter_Builder::setRenameFromName(jstring arg0, jstring arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"setRenameFromName",
			"(Ljava/lang/String;Ljava/lang/String;II)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject BluetoothLeDeviceFilter_Builder::setRenameFromName(const QString &arg0, const QString &arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"setRenameFromName",
			"(Ljava/lang/String;Ljava/lang/String;II)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	QAndroidJniObject BluetoothLeDeviceFilter_Builder::setScanFilter(android::bluetooth::le::ScanFilter arg0)
	{
		return __thiz.callObjectMethod(
			"setScanFilter",
			"(Landroid/bluetooth/le/ScanFilter;)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::companion

