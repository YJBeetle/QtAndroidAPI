#pragma once

#ifndef ANDROID_TELEPHONY_MBMS_MBMSERRORS_GENERALERRORS
#define ANDROID_TELEPHONY_MBMS_MBMSERRORS_GENERALERRORS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony::mbms
{
	class MbmsErrors_GeneralErrors : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_CARRIER_CHANGE_NOT_ALLOWED();
		static jint ERROR_IN_E911();
		static jint ERROR_MIDDLEWARE_NOT_YET_READY();
		static jint ERROR_MIDDLEWARE_TEMPORARILY_UNAVAILABLE();
		static jint ERROR_NOT_CONNECTED_TO_HOME_CARRIER_LTE();
		static jint ERROR_OUT_OF_MEMORY();
		static jint ERROR_UNABLE_TO_READ_SIM();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::telephony::mbms


namespace __jni_impl::android::telephony::mbms
{
	// Fields
	jint MbmsErrors_GeneralErrors::ERROR_CARRIER_CHANGE_NOT_ALLOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"ERROR_CARRIER_CHANGE_NOT_ALLOWED"
		);
	}
	jint MbmsErrors_GeneralErrors::ERROR_IN_E911()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"ERROR_IN_E911"
		);
	}
	jint MbmsErrors_GeneralErrors::ERROR_MIDDLEWARE_NOT_YET_READY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"ERROR_MIDDLEWARE_NOT_YET_READY"
		);
	}
	jint MbmsErrors_GeneralErrors::ERROR_MIDDLEWARE_TEMPORARILY_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"ERROR_MIDDLEWARE_TEMPORARILY_UNAVAILABLE"
		);
	}
	jint MbmsErrors_GeneralErrors::ERROR_NOT_CONNECTED_TO_HOME_CARRIER_LTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"ERROR_NOT_CONNECTED_TO_HOME_CARRIER_LTE"
		);
	}
	jint MbmsErrors_GeneralErrors::ERROR_OUT_OF_MEMORY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"ERROR_OUT_OF_MEMORY"
		);
	}
	jint MbmsErrors_GeneralErrors::ERROR_UNABLE_TO_READ_SIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"ERROR_UNABLE_TO_READ_SIM"
		);
	}
	
	// Constructors
	void MbmsErrors_GeneralErrors::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::telephony::mbms

namespace android::telephony::mbms
{
	class MbmsErrors_GeneralErrors : public __jni_impl::android::telephony::mbms::MbmsErrors_GeneralErrors
	{
	public:
		MbmsErrors_GeneralErrors(QAndroidJniObject obj) { __thiz = obj; }
		MbmsErrors_GeneralErrors()
		{
			__constructor();
		}
	};
} // namespace android::telephony::mbms

#endif // ANDROID_TELEPHONY_MBMS_MBMSERRORS_GENERALERRORS

