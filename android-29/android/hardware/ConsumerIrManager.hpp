#pragma once

#ifndef ANDROID_HARDWARE_CONSUMERIRMANAGER
#define ANDROID_HARDWARE_CONSUMERIRMANAGER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::hardware
{
	class ConsumerIrManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void transmit(jint arg0, jintArray arg1);
		jboolean hasIrEmitter();
		jarray getCarrierFrequencies();
	};
} // namespace __jni_impl::android::hardware


namespace __jni_impl::android::hardware
{
	// Fields
	
	// Constructors
	void ConsumerIrManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.ConsumerIrManager",
			"(V)V");
	}
	
	// Methods
	void ConsumerIrManager::transmit(jint arg0, jintArray arg1)
	{
		__thiz.callMethod<void>(
			"transmit",
			"(I[I)V",
			arg0,
			arg1
		);
	}
	jboolean ConsumerIrManager::hasIrEmitter()
	{
		return __thiz.callMethod<jboolean>(
			"hasIrEmitter",
			"()Z"
		);
	}
	jarray ConsumerIrManager::getCarrierFrequencies()
	{
		return __thiz.callObjectMethod(
			"getCarrierFrequencies",
			"()[Landroid/hardware/ConsumerIrManager$CarrierFrequencyRange;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::hardware

namespace android::hardware
{
	class ConsumerIrManager : public __jni_impl::android::hardware::ConsumerIrManager
	{
	public:
		ConsumerIrManager(QAndroidJniObject obj) { __thiz = obj; }
		ConsumerIrManager()
		{
			__constructor();
		}
	};
} // namespace android::hardware

#endif // ANDROID_HARDWARE_CONSUMERIRMANAGER

