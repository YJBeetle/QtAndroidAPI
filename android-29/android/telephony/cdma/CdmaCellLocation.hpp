#pragma once

#ifndef ANDROID_TELEPHONY_CDMA_CDMACELLLOCATION
#define ANDROID_TELEPHONY_CDMA_CDMACELLLOCATION

#include "../CellLocation.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::telephony::cdma
{
	class CdmaCellLocation : public __jni_impl::android::telephony::CellLocation
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
		jint getSystemId();
		jint getNetworkId();
		jint getBaseStationId();
		jint getBaseStationLatitude();
		jint getBaseStationLongitude();
		void setCellLocationData(jint arg0, jint arg1, jint arg2);
		void setCellLocationData(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static jdouble convertQuartSecToDecDegrees(jint arg0);
		void setStateInvalid();
		void fillInNotifierBundle(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::telephony::cdma

#include "../../os/Bundle.hpp"

namespace __jni_impl::android::telephony::cdma
{
	// Fields
	
	// Constructors
	void CdmaCellLocation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.cdma.CdmaCellLocation",
			"()V");
	}
	void CdmaCellLocation::__constructor(__jni_impl::android::os::Bundle arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.cdma.CdmaCellLocation",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean CdmaCellLocation::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject CdmaCellLocation::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint CdmaCellLocation::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint CdmaCellLocation::getSystemId()
	{
		return __thiz.callMethod<jint>(
			"getSystemId",
			"()I");
	}
	jint CdmaCellLocation::getNetworkId()
	{
		return __thiz.callMethod<jint>(
			"getNetworkId",
			"()I");
	}
	jint CdmaCellLocation::getBaseStationId()
	{
		return __thiz.callMethod<jint>(
			"getBaseStationId",
			"()I");
	}
	jint CdmaCellLocation::getBaseStationLatitude()
	{
		return __thiz.callMethod<jint>(
			"getBaseStationLatitude",
			"()I");
	}
	jint CdmaCellLocation::getBaseStationLongitude()
	{
		return __thiz.callMethod<jint>(
			"getBaseStationLongitude",
			"()I");
	}
	void CdmaCellLocation::setCellLocationData(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setCellLocationData",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void CdmaCellLocation::setCellLocationData(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"setCellLocationData",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	jdouble CdmaCellLocation::convertQuartSecToDecDegrees(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"android.telephony.cdma.CdmaCellLocation",
			"convertQuartSecToDecDegrees",
			"(I)D",
			arg0);
	}
	void CdmaCellLocation::setStateInvalid()
	{
		__thiz.callMethod<void>(
			"setStateInvalid",
			"()V");
	}
	void CdmaCellLocation::fillInNotifierBundle(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"fillInNotifierBundle",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::telephony::cdma

namespace android::telephony::cdma
{
	class CdmaCellLocation : public __jni_impl::android::telephony::cdma::CdmaCellLocation
	{
	public:
		CdmaCellLocation(QAndroidJniObject obj) { __thiz = obj; }
		CdmaCellLocation()
		{
			__constructor();
		}
		CdmaCellLocation(__jni_impl::android::os::Bundle arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::telephony::cdma

#endif // ANDROID_TELEPHONY_CDMA_CDMACELLLOCATION

