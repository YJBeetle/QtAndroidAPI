#pragma once

#ifndef ANDROID_PROVIDER_SYNCSTATECONTRACT_CONSTANTS
#define ANDROID_PROVIDER_SYNCSTATECONTRACT_CONSTANTS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class SyncStateContract_Constants : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jstring SyncStateContract_Constants::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.SyncStateContract$Constants",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void SyncStateContract_Constants::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.SyncStateContract$Constants",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class SyncStateContract_Constants : public __jni_impl::android::provider::SyncStateContract_Constants
	{
	public:
		SyncStateContract_Constants(QAndroidJniObject obj) { __thiz = obj; }
		SyncStateContract_Constants()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_SYNCSTATECONTRACT_CONSTANTS

