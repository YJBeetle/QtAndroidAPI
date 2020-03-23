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
		jboolean hasIrEmitter();
		QAndroidJniObject getCarrierFrequencies();
		void transmit(jint arg0, jintArray arg1);
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
	jboolean ConsumerIrManager::hasIrEmitter()
	{
		return __thiz.callMethod<jboolean>(
			"hasIrEmitter",
			"()Z");
	}
	QAndroidJniObject ConsumerIrManager::getCarrierFrequencies()
	{
		return __thiz.callObjectMethod(
			"getCarrierFrequencies",
			"()[Landroid/hardware/ConsumerIrManager$CarrierFrequencyRange;");
	}
	void ConsumerIrManager::transmit(jint arg0, jintArray arg1)
	{
		__thiz.callMethod<void>(
			"transmit",
			"(I[I)V",
			arg0,
			arg1);
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

