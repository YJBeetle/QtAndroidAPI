#pragma once

#ifndef ANDROID_BLUETOOTH_LE_ADVERTISINGSETCALLBACK
#define ANDROID_BLUETOOTH_LE_ADVERTISINGSETCALLBACK

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth::le
{
	class AdvertisingSet;
}

namespace __jni_impl::android::bluetooth::le
{
	class AdvertisingSetCallback : public __JniBaseClass
	{
	public:
		// Fields
		static jint ADVERTISE_FAILED_ALREADY_STARTED();
		static jint ADVERTISE_FAILED_DATA_TOO_LARGE();
		static jint ADVERTISE_FAILED_FEATURE_UNSUPPORTED();
		static jint ADVERTISE_FAILED_INTERNAL_ERROR();
		static jint ADVERTISE_FAILED_TOO_MANY_ADVERTISERS();
		static jint ADVERTISE_SUCCESS();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onAdvertisingSetStarted(__jni_impl::android::bluetooth::le::AdvertisingSet arg0, jint arg1, jint arg2);
		void onAdvertisingSetStopped(__jni_impl::android::bluetooth::le::AdvertisingSet arg0);
		void onAdvertisingEnabled(__jni_impl::android::bluetooth::le::AdvertisingSet arg0, jboolean arg1, jint arg2);
		void onAdvertisingDataSet(__jni_impl::android::bluetooth::le::AdvertisingSet arg0, jint arg1);
		void onScanResponseDataSet(__jni_impl::android::bluetooth::le::AdvertisingSet arg0, jint arg1);
		void onAdvertisingParametersUpdated(__jni_impl::android::bluetooth::le::AdvertisingSet arg0, jint arg1, jint arg2);
		void onPeriodicAdvertisingParametersUpdated(__jni_impl::android::bluetooth::le::AdvertisingSet arg0, jint arg1);
		void onPeriodicAdvertisingDataSet(__jni_impl::android::bluetooth::le::AdvertisingSet arg0, jint arg1);
		void onPeriodicAdvertisingEnabled(__jni_impl::android::bluetooth::le::AdvertisingSet arg0, jboolean arg1, jint arg2);
	};
} // namespace __jni_impl::android::bluetooth::le

#include "AdvertisingSet.hpp"

namespace __jni_impl::android::bluetooth::le
{
	// Fields
	jint AdvertisingSetCallback::ADVERTISE_FAILED_ALREADY_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_FAILED_ALREADY_STARTED"
		);
	}
	jint AdvertisingSetCallback::ADVERTISE_FAILED_DATA_TOO_LARGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_FAILED_DATA_TOO_LARGE"
		);
	}
	jint AdvertisingSetCallback::ADVERTISE_FAILED_FEATURE_UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_FAILED_FEATURE_UNSUPPORTED"
		);
	}
	jint AdvertisingSetCallback::ADVERTISE_FAILED_INTERNAL_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_FAILED_INTERNAL_ERROR"
		);
	}
	jint AdvertisingSetCallback::ADVERTISE_FAILED_TOO_MANY_ADVERTISERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_FAILED_TOO_MANY_ADVERTISERS"
		);
	}
	jint AdvertisingSetCallback::ADVERTISE_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetCallback",
			"ADVERTISE_SUCCESS"
		);
	}
	
	// Constructors
	void AdvertisingSetCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.AdvertisingSetCallback",
			"()V");
	}
	
	// Methods
	void AdvertisingSetCallback::onAdvertisingSetStarted(__jni_impl::android::bluetooth::le::AdvertisingSet arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onAdvertisingSetStarted",
			"(Landroid/bluetooth/le/AdvertisingSet;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void AdvertisingSetCallback::onAdvertisingSetStopped(__jni_impl::android::bluetooth::le::AdvertisingSet arg0)
	{
		__thiz.callMethod<void>(
			"onAdvertisingSetStopped",
			"(Landroid/bluetooth/le/AdvertisingSet;)V",
			arg0.__jniObject().object()
		);
	}
	void AdvertisingSetCallback::onAdvertisingEnabled(__jni_impl::android::bluetooth::le::AdvertisingSet arg0, jboolean arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onAdvertisingEnabled",
			"(Landroid/bluetooth/le/AdvertisingSet;ZI)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void AdvertisingSetCallback::onAdvertisingDataSet(__jni_impl::android::bluetooth::le::AdvertisingSet arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onAdvertisingDataSet",
			"(Landroid/bluetooth/le/AdvertisingSet;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AdvertisingSetCallback::onScanResponseDataSet(__jni_impl::android::bluetooth::le::AdvertisingSet arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onScanResponseDataSet",
			"(Landroid/bluetooth/le/AdvertisingSet;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AdvertisingSetCallback::onAdvertisingParametersUpdated(__jni_impl::android::bluetooth::le::AdvertisingSet arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onAdvertisingParametersUpdated",
			"(Landroid/bluetooth/le/AdvertisingSet;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void AdvertisingSetCallback::onPeriodicAdvertisingParametersUpdated(__jni_impl::android::bluetooth::le::AdvertisingSet arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onPeriodicAdvertisingParametersUpdated",
			"(Landroid/bluetooth/le/AdvertisingSet;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AdvertisingSetCallback::onPeriodicAdvertisingDataSet(__jni_impl::android::bluetooth::le::AdvertisingSet arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onPeriodicAdvertisingDataSet",
			"(Landroid/bluetooth/le/AdvertisingSet;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AdvertisingSetCallback::onPeriodicAdvertisingEnabled(__jni_impl::android::bluetooth::le::AdvertisingSet arg0, jboolean arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onPeriodicAdvertisingEnabled",
			"(Landroid/bluetooth/le/AdvertisingSet;ZI)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::android::bluetooth::le

namespace android::bluetooth::le
{
	class AdvertisingSetCallback : public __jni_impl::android::bluetooth::le::AdvertisingSetCallback
	{
	public:
		AdvertisingSetCallback(QAndroidJniObject obj) { __thiz = obj; }
		AdvertisingSetCallback()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth::le

#endif // ANDROID_BLUETOOTH_LE_ADVERTISINGSETCALLBACK

