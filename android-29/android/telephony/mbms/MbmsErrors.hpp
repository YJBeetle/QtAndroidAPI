#pragma once

#ifndef ANDROID_TELEPHONY_MBMS_MBMSERRORS
#define ANDROID_TELEPHONY_MBMS_MBMSERRORS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony::mbms
{
	class MbmsErrors : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_MIDDLEWARE_LOST();
		static jint ERROR_MIDDLEWARE_NOT_BOUND();
		static jint ERROR_NO_UNIQUE_MIDDLEWARE();
		static jint SUCCESS();
		static jint UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::telephony::mbms


namespace __jni_impl::android::telephony::mbms
{
	// Fields
	jint MbmsErrors::ERROR_MIDDLEWARE_LOST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors",
			"ERROR_MIDDLEWARE_LOST");
	}
	jint MbmsErrors::ERROR_MIDDLEWARE_NOT_BOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors",
			"ERROR_MIDDLEWARE_NOT_BOUND");
	}
	jint MbmsErrors::ERROR_NO_UNIQUE_MIDDLEWARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors",
			"ERROR_NO_UNIQUE_MIDDLEWARE");
	}
	jint MbmsErrors::SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors",
			"SUCCESS");
	}
	jint MbmsErrors::UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors",
			"UNKNOWN");
	}
	
	// Constructors
	void MbmsErrors::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.MbmsErrors",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::telephony::mbms

namespace android::telephony::mbms
{
	class MbmsErrors : public __jni_impl::android::telephony::mbms::MbmsErrors
	{
	public:
		MbmsErrors(QAndroidJniObject obj) { __thiz = obj; }
		MbmsErrors()
		{
			__constructor();
		}
	};
} // namespace android::telephony::mbms

#endif // ANDROID_TELEPHONY_MBMS_MBMSERRORS

