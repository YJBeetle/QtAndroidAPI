#include "../../app/PendingIntent.hpp"
#include "./ScanCallback.hpp"
#include "./ScanSettings.hpp"
#include "./BluetoothLeScanner.hpp"

namespace android::bluetooth::le
{
	// Fields
	jstring BluetoothLeScanner::EXTRA_CALLBACK_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.le.BluetoothLeScanner",
			"EXTRA_CALLBACK_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothLeScanner::EXTRA_ERROR_CODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.le.BluetoothLeScanner",
			"EXTRA_ERROR_CODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothLeScanner::EXTRA_LIST_SCAN_RESULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.le.BluetoothLeScanner",
			"EXTRA_LIST_SCAN_RESULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	BluetoothLeScanner::BluetoothLeScanner(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void BluetoothLeScanner::flushPendingScanResults(android::bluetooth::le::ScanCallback arg0)
	{
		__thiz.callMethod<void>(
			"flushPendingScanResults",
			"(Landroid/bluetooth/le/ScanCallback;)V",
			arg0.__jniObject().object()
		);
	}
	jint BluetoothLeScanner::startScan(__JniBaseClass arg0, android::bluetooth::le::ScanSettings arg1, android::app::PendingIntent arg2)
	{
		return __thiz.callMethod<jint>(
			"startScan",
			"(Ljava/util/List;Landroid/bluetooth/le/ScanSettings;Landroid/app/PendingIntent;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void BluetoothLeScanner::startScan(android::bluetooth::le::ScanCallback arg0)
	{
		__thiz.callMethod<void>(
			"startScan",
			"(Landroid/bluetooth/le/ScanCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void BluetoothLeScanner::startScan(__JniBaseClass arg0, android::bluetooth::le::ScanSettings arg1, android::bluetooth::le::ScanCallback arg2)
	{
		__thiz.callMethod<void>(
			"startScan",
			"(Ljava/util/List;Landroid/bluetooth/le/ScanSettings;Landroid/bluetooth/le/ScanCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void BluetoothLeScanner::stopScan(android::app::PendingIntent arg0)
	{
		__thiz.callMethod<void>(
			"stopScan",
			"(Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object()
		);
	}
	void BluetoothLeScanner::stopScan(android::bluetooth::le::ScanCallback arg0)
	{
		__thiz.callMethod<void>(
			"stopScan",
			"(Landroid/bluetooth/le/ScanCallback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::bluetooth::le

