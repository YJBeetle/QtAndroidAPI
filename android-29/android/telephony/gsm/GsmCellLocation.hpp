#pragma once

#ifndef ANDROID_TELEPHONY_GSM_GSMCELLLOCATION
#define ANDROID_TELEPHONY_GSM_GSMCELLLOCATION

#include "../CellLocation.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::telephony::gsm
{
	class GsmCellLocation : public __jni_impl::android::telephony::CellLocation
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::os::Bundle arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		void setStateInvalid();
		jint getLac();
		jint getCid();
		jint getPsc();
		void setLacAndCid(jint arg0, jint arg1);
		void fillInNotifierBundle(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::telephony::gsm

#include "../../os/Bundle.hpp"

namespace __jni_impl::android::telephony::gsm
{
	// Fields
	
	// Constructors
	void GsmCellLocation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.gsm.GsmCellLocation",
			"()V");
	}
	void GsmCellLocation::__constructor(__jni_impl::android::os::Bundle arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.gsm.GsmCellLocation",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean GsmCellLocation::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject GsmCellLocation::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint GsmCellLocation::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	void GsmCellLocation::setStateInvalid()
	{
		__thiz.callMethod<void>(
			"setStateInvalid",
			"()V");
	}
	jint GsmCellLocation::getLac()
	{
		return __thiz.callMethod<jint>(
			"getLac",
			"()I");
	}
	jint GsmCellLocation::getCid()
	{
		return __thiz.callMethod<jint>(
			"getCid",
			"()I");
	}
	jint GsmCellLocation::getPsc()
	{
		return __thiz.callMethod<jint>(
			"getPsc",
			"()I");
	}
	void GsmCellLocation::setLacAndCid(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setLacAndCid",
			"(II)V",
			arg0,
			arg1);
	}
	void GsmCellLocation::fillInNotifierBundle(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"fillInNotifierBundle",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::telephony::gsm

namespace android::telephony::gsm
{
	class GsmCellLocation : public __jni_impl::android::telephony::gsm::GsmCellLocation
	{
	public:
		GsmCellLocation(QAndroidJniObject obj) { __thiz = obj; }
		GsmCellLocation()
		{
			__constructor();
		}
		GsmCellLocation(__jni_impl::android::os::Bundle arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::telephony::gsm

#endif // ANDROID_TELEPHONY_GSM_GSMCELLLOCATION

