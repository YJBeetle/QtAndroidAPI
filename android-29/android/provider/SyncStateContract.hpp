#pragma once

#ifndef ANDROID_PROVIDER_SYNCSTATECONTRACT
#define ANDROID_PROVIDER_SYNCSTATECONTRACT

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class SyncStateContract : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	
	// Constructors
	void SyncStateContract::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.SyncStateContract",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class SyncStateContract : public __jni_impl::android::provider::SyncStateContract
	{
	public:
		SyncStateContract(QAndroidJniObject obj) { __thiz = obj; }
		SyncStateContract()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_SYNCSTATECONTRACT

