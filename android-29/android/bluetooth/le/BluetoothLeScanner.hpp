#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class ScanSettings;
}

namespace __jni_impl::android::bluetooth::le
{
	class BluetoothLeScanner : public __JniBaseClass
	{
	public:
		// Fields
		static jstring EXTRA_CALLBACK_TYPE();
		static jstring EXTRA_ERROR_CODE();
		static jstring EXTRA_LIST_SCAN_RESULT();
		
		// Constructors
		void __constructor();
		
		// Methods
		void flushPendingScanResults(__jni_impl::android::bluetooth::le::ScanCallback arg0);
		jint startScan(__jni_impl::__JniBaseClass arg0, __jni_impl::android::bluetooth::le::ScanSettings arg1, __jni_impl::android::app::PendingIntent arg2);
		void startScan(__jni_impl::android::bluetooth::le::ScanCallback arg0);
		void startScan(__jni_impl::__JniBaseClass arg0, __jni_impl::android::bluetooth::le::ScanSettings arg1, __jni_impl::android::bluetooth::le::ScanCallback arg2);
		void stopScan(__jni_impl::android::app::PendingIntent arg0);
		void stopScan(__jni_impl::android::bluetooth::le::ScanCallback arg0);
	};
} // namespace __jni_impl::android::bluetooth::le

#include "../../app/PendingIntent.hpp"
#include "ScanCallback.hpp"
#include "ScanSettings.hpp"

namespace __jni_impl::android::bluetooth::le
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
	
	// Constructors
	void BluetoothLeScanner::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.BluetoothLeScanner",
			"(V)V");
	}
	
	// Methods
	void BluetoothLeScanner::flushPendingScanResults(__jni_impl::android::bluetooth::le::ScanCallback arg0)
	{
		__thiz.callMethod<void>(
			"flushPendingScanResults",
			"(Landroid/bluetooth/le/ScanCallback;)V",
			arg0.__jniObject().object()
		);
	}
	jint BluetoothLeScanner::startScan(__jni_impl::__JniBaseClass arg0, __jni_impl::android::bluetooth::le::ScanSettings arg1, __jni_impl::android::app::PendingIntent arg2)
	{
		return __thiz.callMethod<jint>(
			"startScan",
			"(Ljava/util/List;Landroid/bluetooth/le/ScanSettings;Landroid/app/PendingIntent;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void BluetoothLeScanner::startScan(__jni_impl::android::bluetooth::le::ScanCallback arg0)
	{
		__thiz.callMethod<void>(
			"startScan",
			"(Landroid/bluetooth/le/ScanCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void BluetoothLeScanner::startScan(__jni_impl::__JniBaseClass arg0, __jni_impl::android::bluetooth::le::ScanSettings arg1, __jni_impl::android::bluetooth::le::ScanCallback arg2)
	{
		__thiz.callMethod<void>(
			"startScan",
			"(Ljava/util/List;Landroid/bluetooth/le/ScanSettings;Landroid/bluetooth/le/ScanCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void BluetoothLeScanner::stopScan(__jni_impl::android::app::PendingIntent arg0)
	{
		__thiz.callMethod<void>(
			"stopScan",
			"(Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object()
		);
	}
	void BluetoothLeScanner::stopScan(__jni_impl::android::bluetooth::le::ScanCallback arg0)
	{
		__thiz.callMethod<void>(
			"stopScan",
			"(Landroid/bluetooth/le/ScanCallback;)V",
			arg0.__jniObject().object()
		);
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

