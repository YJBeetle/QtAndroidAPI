#pragma once

#ifndef ANDROID_TELEPHONY_TELEPHONYSCANMANAGER
#define ANDROID_TELEPHONY_TELEPHONYSCANMANAGER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony
{
	class TelephonyScanManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::telephony


namespace __jni_impl::android::telephony
{
	// Fields
	
	// Constructors
	void TelephonyScanManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.TelephonyScanManager",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class TelephonyScanManager : public __jni_impl::android::telephony::TelephonyScanManager
	{
	public:
		TelephonyScanManager(QAndroidJniObject obj) { __thiz = obj; }
		TelephonyScanManager()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_TELEPHONYSCANMANAGER

