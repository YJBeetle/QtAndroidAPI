#pragma once

#ifndef ANDROID_TELEPHONY_MBMS_MBMSERRORS_INITIALIZATIONERRORS
#define ANDROID_TELEPHONY_MBMS_MBMSERRORS_INITIALIZATIONERRORS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony::mbms
{
	class MbmsErrors_InitializationErrors : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_APP_PERMISSIONS_NOT_GRANTED();
		static jint ERROR_DUPLICATE_INITIALIZE();
		static jint ERROR_UNABLE_TO_INITIALIZE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::telephony::mbms


namespace __jni_impl::android::telephony::mbms
{
	// Fields
	jint MbmsErrors_InitializationErrors::ERROR_APP_PERMISSIONS_NOT_GRANTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$InitializationErrors",
			"ERROR_APP_PERMISSIONS_NOT_GRANTED");
	}
	jint MbmsErrors_InitializationErrors::ERROR_DUPLICATE_INITIALIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$InitializationErrors",
			"ERROR_DUPLICATE_INITIALIZE");
	}
	jint MbmsErrors_InitializationErrors::ERROR_UNABLE_TO_INITIALIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$InitializationErrors",
			"ERROR_UNABLE_TO_INITIALIZE");
	}
	
	// Constructors
	void MbmsErrors_InitializationErrors::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.MbmsErrors$InitializationErrors",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::telephony::mbms

namespace android::telephony::mbms
{
	class MbmsErrors_InitializationErrors : public __jni_impl::android::telephony::mbms::MbmsErrors_InitializationErrors
	{
	public:
		MbmsErrors_InitializationErrors(QAndroidJniObject obj) { __thiz = obj; }
		MbmsErrors_InitializationErrors()
		{
			__constructor();
		}
	};
} // namespace android::telephony::mbms

#endif // ANDROID_TELEPHONY_MBMS_MBMSERRORS_INITIALIZATIONERRORS

