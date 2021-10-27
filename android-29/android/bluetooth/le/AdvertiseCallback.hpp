#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth::le
{
	class AdvertiseSettings;
}

namespace __jni_impl::android::bluetooth::le
{
	class AdvertiseCallback : public __JniBaseClass
	{
	public:
		// Fields
		static jint ADVERTISE_FAILED_ALREADY_STARTED();
		static jint ADVERTISE_FAILED_DATA_TOO_LARGE();
		static jint ADVERTISE_FAILED_FEATURE_UNSUPPORTED();
		static jint ADVERTISE_FAILED_INTERNAL_ERROR();
		static jint ADVERTISE_FAILED_TOO_MANY_ADVERTISERS();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onStartFailure(jint arg0);
		void onStartSuccess(__jni_impl::android::bluetooth::le::AdvertiseSettings arg0);
	};
} // namespace __jni_impl::android::bluetooth::le

#include "./AdvertiseSettings.hpp"

namespace __jni_impl::android::bluetooth::le
{
	// Fields
	jint AdvertiseCallback::ADVERTISE_FAILED_ALREADY_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseCallback",
			"ADVERTISE_FAILED_ALREADY_STARTED"
		);
	}
	jint AdvertiseCallback::ADVERTISE_FAILED_DATA_TOO_LARGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseCallback",
			"ADVERTISE_FAILED_DATA_TOO_LARGE"
		);
	}
	jint AdvertiseCallback::ADVERTISE_FAILED_FEATURE_UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseCallback",
			"ADVERTISE_FAILED_FEATURE_UNSUPPORTED"
		);
	}
	jint AdvertiseCallback::ADVERTISE_FAILED_INTERNAL_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseCallback",
			"ADVERTISE_FAILED_INTERNAL_ERROR"
		);
	}
	jint AdvertiseCallback::ADVERTISE_FAILED_TOO_MANY_ADVERTISERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseCallback",
			"ADVERTISE_FAILED_TOO_MANY_ADVERTISERS"
		);
	}
	
	// Constructors
	void AdvertiseCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.AdvertiseCallback",
			"()V"
		);
	}
	
	// Methods
	void AdvertiseCallback::onStartFailure(jint arg0)
	{
		__thiz.callMethod<void>(
			"onStartFailure",
			"(I)V",
			arg0
		);
	}
	void AdvertiseCallback::onStartSuccess(__jni_impl::android::bluetooth::le::AdvertiseSettings arg0)
	{
		__thiz.callMethod<void>(
			"onStartSuccess",
			"(Landroid/bluetooth/le/AdvertiseSettings;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::bluetooth::le

namespace android::bluetooth::le
{
	class AdvertiseCallback : public __jni_impl::android::bluetooth::le::AdvertiseCallback
	{
	public:
		AdvertiseCallback(QAndroidJniObject obj) { __thiz = obj; }
		AdvertiseCallback()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth::le

