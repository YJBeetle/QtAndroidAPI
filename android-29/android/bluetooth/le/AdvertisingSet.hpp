#pragma once

#ifndef ANDROID_BLUETOOTH_LE_ADVERTISINGSET
#define ANDROID_BLUETOOTH_LE_ADVERTISINGSET

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth::le
{
	class AdvertiseData;
}
namespace __jni_impl::android::bluetooth::le
{
	class AdvertisingSetParameters;
}
namespace __jni_impl::android::bluetooth::le
{
	class PeriodicAdvertisingParameters;
}

namespace __jni_impl::android::bluetooth::le
{
	class AdvertisingSet : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void enableAdvertising(jboolean arg0, jint arg1, jint arg2);
		void setAdvertisingData(__jni_impl::android::bluetooth::le::AdvertiseData arg0);
		void setScanResponseData(__jni_impl::android::bluetooth::le::AdvertiseData arg0);
		void setAdvertisingParameters(__jni_impl::android::bluetooth::le::AdvertisingSetParameters arg0);
		void setPeriodicAdvertisingParameters(__jni_impl::android::bluetooth::le::PeriodicAdvertisingParameters arg0);
		void setPeriodicAdvertisingData(__jni_impl::android::bluetooth::le::AdvertiseData arg0);
		void setPeriodicAdvertisingEnabled(jboolean arg0);
	};
} // namespace __jni_impl::android::bluetooth::le

#include "AdvertiseData.hpp"
#include "AdvertisingSetParameters.hpp"
#include "PeriodicAdvertisingParameters.hpp"

namespace __jni_impl::android::bluetooth::le
{
	// Fields
	
	// Constructors
	void AdvertisingSet::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.AdvertisingSet",
			"(V)V");
	}
	
	// Methods
	void AdvertisingSet::enableAdvertising(jboolean arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"enableAdvertising",
			"(ZII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void AdvertisingSet::setAdvertisingData(__jni_impl::android::bluetooth::le::AdvertiseData arg0)
	{
		__thiz.callMethod<void>(
			"setAdvertisingData",
			"(Landroid/bluetooth/le/AdvertiseData;)V",
			arg0.__jniObject().object()
		);
	}
	void AdvertisingSet::setScanResponseData(__jni_impl::android::bluetooth::le::AdvertiseData arg0)
	{
		__thiz.callMethod<void>(
			"setScanResponseData",
			"(Landroid/bluetooth/le/AdvertiseData;)V",
			arg0.__jniObject().object()
		);
	}
	void AdvertisingSet::setAdvertisingParameters(__jni_impl::android::bluetooth::le::AdvertisingSetParameters arg0)
	{
		__thiz.callMethod<void>(
			"setAdvertisingParameters",
			"(Landroid/bluetooth/le/AdvertisingSetParameters;)V",
			arg0.__jniObject().object()
		);
	}
	void AdvertisingSet::setPeriodicAdvertisingParameters(__jni_impl::android::bluetooth::le::PeriodicAdvertisingParameters arg0)
	{
		__thiz.callMethod<void>(
			"setPeriodicAdvertisingParameters",
			"(Landroid/bluetooth/le/PeriodicAdvertisingParameters;)V",
			arg0.__jniObject().object()
		);
	}
	void AdvertisingSet::setPeriodicAdvertisingData(__jni_impl::android::bluetooth::le::AdvertiseData arg0)
	{
		__thiz.callMethod<void>(
			"setPeriodicAdvertisingData",
			"(Landroid/bluetooth/le/AdvertiseData;)V",
			arg0.__jniObject().object()
		);
	}
	void AdvertisingSet::setPeriodicAdvertisingEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPeriodicAdvertisingEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace __jni_impl::android::bluetooth::le

namespace android::bluetooth::le
{
	class AdvertisingSet : public __jni_impl::android::bluetooth::le::AdvertisingSet
	{
	public:
		AdvertisingSet(QAndroidJniObject obj) { __thiz = obj; }
		AdvertisingSet()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth::le

#endif // ANDROID_BLUETOOTH_LE_ADVERTISINGSET

