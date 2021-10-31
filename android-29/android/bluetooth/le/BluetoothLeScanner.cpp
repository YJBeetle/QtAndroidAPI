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
	
	// QAndroidJniObject forward
	BluetoothLeScanner::BluetoothLeScanner(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void BluetoothLeScanner::flushPendingScanResults(android::bluetooth::le::ScanCallback arg0)
	{
		callMethod<void>(
			"flushPendingScanResults",
			"(Landroid/bluetooth/le/ScanCallback;)V",
			arg0.object()
		);
	}
	jint BluetoothLeScanner::startScan(__JniBaseClass arg0, android::bluetooth::le::ScanSettings arg1, android::app::PendingIntent arg2)
	{
		return callMethod<jint>(
			"startScan",
			"(Ljava/util/List;Landroid/bluetooth/le/ScanSettings;Landroid/app/PendingIntent;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void BluetoothLeScanner::startScan(android::bluetooth::le::ScanCallback arg0)
	{
		callMethod<void>(
			"startScan",
			"(Landroid/bluetooth/le/ScanCallback;)V",
			arg0.object()
		);
	}
	void BluetoothLeScanner::startScan(__JniBaseClass arg0, android::bluetooth::le::ScanSettings arg1, android::bluetooth::le::ScanCallback arg2)
	{
		callMethod<void>(
			"startScan",
			"(Ljava/util/List;Landroid/bluetooth/le/ScanSettings;Landroid/bluetooth/le/ScanCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void BluetoothLeScanner::stopScan(android::app::PendingIntent arg0)
	{
		callMethod<void>(
			"stopScan",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
	void BluetoothLeScanner::stopScan(android::bluetooth::le::ScanCallback arg0)
	{
		callMethod<void>(
			"stopScan",
			"(Landroid/bluetooth/le/ScanCallback;)V",
			arg0.object()
		);
	}
} // namespace android::bluetooth::le

