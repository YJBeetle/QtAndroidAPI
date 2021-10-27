#pragma once

#ifndef ANDROID_HARDWARE_CONSUMERIRMANAGER_CARRIERFREQUENCYRANGE
#define ANDROID_HARDWARE_CONSUMERIRMANAGER_CARRIERFREQUENCYRANGE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware
{
	class ConsumerIrManager;
}

namespace __jni_impl::android::hardware
{
	class ConsumerIrManager_CarrierFrequencyRange : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::hardware::ConsumerIrManager arg0, jint arg1, jint arg2);
		
		// Methods
		jint getMaxFrequency();
		jint getMinFrequency();
	};
} // namespace __jni_impl::android::hardware

#include "ConsumerIrManager.hpp"

namespace __jni_impl::android::hardware
{
	// Fields
	
	// Constructors
	void ConsumerIrManager_CarrierFrequencyRange::__constructor(__jni_impl::android::hardware::ConsumerIrManager arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.ConsumerIrManager$CarrierFrequencyRange",
			"(Landroid/hardware/ConsumerIrManager;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
	jint ConsumerIrManager_CarrierFrequencyRange::getMaxFrequency()
	{
		return __thiz.callMethod<jint>(
			"getMaxFrequency",
			"()I"
		);
	}
	jint ConsumerIrManager_CarrierFrequencyRange::getMinFrequency()
	{
		return __thiz.callMethod<jint>(
			"getMinFrequency",
			"()I"
		);
	}
} // namespace __jni_impl::android::hardware

namespace android::hardware
{
	class ConsumerIrManager_CarrierFrequencyRange : public __jni_impl::android::hardware::ConsumerIrManager_CarrierFrequencyRange
	{
	public:
		ConsumerIrManager_CarrierFrequencyRange(QAndroidJniObject obj) { __thiz = obj; }
		ConsumerIrManager_CarrierFrequencyRange(__jni_impl::android::hardware::ConsumerIrManager arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::hardware

#endif // ANDROID_HARDWARE_CONSUMERIRMANAGER_CARRIERFREQUENCYRANGE

