#pragma once

#ifndef ANDROID_BLUETOOTH_LE_SCANCALLBACK
#define ANDROID_BLUETOOTH_LE_SCANCALLBACK

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth::le
{
	class ScanResult;
}

namespace __jni_impl::android::bluetooth::le
{
	class ScanCallback : public __JniBaseClass
	{
	public:
		// Fields
		static jint SCAN_FAILED_ALREADY_STARTED();
		static jint SCAN_FAILED_APPLICATION_REGISTRATION_FAILED();
		static jint SCAN_FAILED_FEATURE_UNSUPPORTED();
		static jint SCAN_FAILED_INTERNAL_ERROR();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onScanResult(jint arg0, __jni_impl::android::bluetooth::le::ScanResult arg1);
		void onBatchScanResults(__jni_impl::__JniBaseClass arg0);
		void onScanFailed(jint arg0);
	};
} // namespace __jni_impl::android::bluetooth::le

#include "ScanResult.hpp"

namespace __jni_impl::android::bluetooth::le
{
	// Fields
	jint ScanCallback::SCAN_FAILED_ALREADY_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanCallback",
			"SCAN_FAILED_ALREADY_STARTED"
		);
	}
	jint ScanCallback::SCAN_FAILED_APPLICATION_REGISTRATION_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanCallback",
			"SCAN_FAILED_APPLICATION_REGISTRATION_FAILED"
		);
	}
	jint ScanCallback::SCAN_FAILED_FEATURE_UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanCallback",
			"SCAN_FAILED_FEATURE_UNSUPPORTED"
		);
	}
	jint ScanCallback::SCAN_FAILED_INTERNAL_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanCallback",
			"SCAN_FAILED_INTERNAL_ERROR"
		);
	}
	
	// Constructors
	void ScanCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.ScanCallback",
			"()V"
		);
	}
	
	// Methods
	void ScanCallback::onScanResult(jint arg0, __jni_impl::android::bluetooth::le::ScanResult arg1)
	{
		__thiz.callMethod<void>(
			"onScanResult",
			"(ILandroid/bluetooth/le/ScanResult;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ScanCallback::onBatchScanResults(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onBatchScanResults",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void ScanCallback::onScanFailed(jint arg0)
	{
		__thiz.callMethod<void>(
			"onScanFailed",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::bluetooth::le

namespace android::bluetooth::le
{
	class ScanCallback : public __jni_impl::android::bluetooth::le::ScanCallback
	{
	public:
		ScanCallback(QAndroidJniObject obj) { __thiz = obj; }
		ScanCallback()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth::le

#endif // ANDROID_BLUETOOTH_LE_SCANCALLBACK

