#pragma once

#ifndef ANDROID_BLUETOOTH_LE_BLUETOOTHLESCANNER
#define ANDROID_BLUETOOTH_LE_BLUETOOTHLESCANNER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth::le
{
	class ScanSettings;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::bluetooth::le
{
	class ScanCallback;
}

namespace __jni_impl::android::bluetooth::le
{
	class BluetoothLeScanner : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject EXTRA_CALLBACK_TYPE();
		static QAndroidJniObject EXTRA_ERROR_CODE();
		static QAndroidJniObject EXTRA_LIST_SCAN_RESULT();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint startScan(__jni_impl::__JniBaseClass arg0, __jni_impl::android::bluetooth::le::ScanSettings arg1, __jni_impl::android::app::PendingIntent arg2);
		void startScan(__jni_impl::__JniBaseClass arg0, __jni_impl::android::bluetooth::le::ScanSettings arg1, __jni_impl::android::bluetooth::le::ScanCallback arg2);
		void startScan(__jni_impl::android::bluetooth::le::ScanCallback arg0);
		void stopScan(__jni_impl::android::app::PendingIntent arg0);
		void stopScan(__jni_impl::android::bluetooth::le::ScanCallback arg0);
		void flushPendingScanResults(__jni_impl::android::bluetooth::le::ScanCallback arg0);
	};
} // namespace __jni_impl::android::bluetooth::le

#include "ScanSettings.hpp"
#include "../../app/PendingIntent.hpp"
#include "ScanCallback.hpp"

namespace __jni_impl::android::bluetooth::le
{
	// Fields
	QAndroidJniObject BluetoothLeScanner::EXTRA_CALLBACK_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.le.BluetoothLeScanner",
			"EXTRA_CALLBACK_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject BluetoothLeScanner::EXTRA_ERROR_CODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.le.BluetoothLeScanner",
			"EXTRA_ERROR_CODE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject BluetoothLeScanner::EXTRA_LIST_SCAN_RESULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.le.BluetoothLeScanner",
			"EXTRA_LIST_SCAN_RESULT",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void BluetoothLeScanner::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.BluetoothLeScanner",
			"(V)V");
	}
	
	// Methods
	jint BluetoothLeScanner::startScan(__jni_impl::__JniBaseClass arg0, __jni_impl::android::bluetooth::le::ScanSettings arg1, __jni_impl::android::app::PendingIntent arg2)
	{
		return __thiz.callMethod<jint>(
			"startScan",
			"(Ljava/util/List;Landroid/bluetooth/le/ScanSettings;Landroid/app/PendingIntent;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void BluetoothLeScanner::startScan(__jni_impl::__JniBaseClass arg0, __jni_impl::android::bluetooth::le::ScanSettings arg1, __jni_impl::android::bluetooth::le::ScanCallback arg2)
	{
		__thiz.callMethod<void>(
			"startScan",
			"(Ljava/util/List;Landroid/bluetooth/le/ScanSettings;Landroid/bluetooth/le/ScanCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void BluetoothLeScanner::startScan(__jni_impl::android::bluetooth::le::ScanCallback arg0)
	{
		__thiz.callMethod<void>(
			"startScan",
			"(Landroid/bluetooth/le/ScanCallback;)V",
			arg0.__jniObject().object());
	}
	void BluetoothLeScanner::stopScan(__jni_impl::android::app::PendingIntent arg0)
	{
		__thiz.callMethod<void>(
			"stopScan",
			"(Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object());
	}
	void BluetoothLeScanner::stopScan(__jni_impl::android::bluetooth::le::ScanCallback arg0)
	{
		__thiz.callMethod<void>(
			"stopScan",
			"(Landroid/bluetooth/le/ScanCallback;)V",
			arg0.__jniObject().object());
	}
	void BluetoothLeScanner::flushPendingScanResults(__jni_impl::android::bluetooth::le::ScanCallback arg0)
	{
		__thiz.callMethod<void>(
			"flushPendingScanResults",
			"(Landroid/bluetooth/le/ScanCallback;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::bluetooth::le

namespace android::bluetooth::le
{
	class BluetoothLeScanner : public __jni_impl::android::bluetooth::le::BluetoothLeScanner
	{
	public:
		BluetoothLeScanner(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothLeScanner()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth::le

#endif // ANDROID_BLUETOOTH_LE_BLUETOOTHLESCANNER

