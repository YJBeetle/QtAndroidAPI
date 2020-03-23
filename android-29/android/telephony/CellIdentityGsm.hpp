#pragma once

#ifndef ANDROID_TELEPHONY_CELLIDENTITYGSM
#define ANDROID_TELEPHONY_CELLIDENTITYGSM

#include "CellIdentity.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class CellIdentityGsm : public __jni_impl::android::telephony::CellIdentity
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject getMobileNetworkOperator();
		jint getArfcn();
		jint getBsic();
		jint getMcc();
		jint getMnc();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getLac();
		jint getCid();
		jint getPsc();
		QAndroidJniObject getMccString();
		QAndroidJniObject getMncString();
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject CellIdentityGsm::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellIdentityGsm",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void CellIdentityGsm::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellIdentityGsm",
			"(V)V");
	}
	
	// Methods
	jboolean CellIdentityGsm::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject CellIdentityGsm::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint CellIdentityGsm::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject CellIdentityGsm::getMobileNetworkOperator()
	{
		return __thiz.callObjectMethod(
			"getMobileNetworkOperator",
			"()Ljava/lang/String;");
	}
	jint CellIdentityGsm::getArfcn()
	{
		return __thiz.callMethod<jint>(
			"getArfcn",
			"()I");
	}
	jint CellIdentityGsm::getBsic()
	{
		return __thiz.callMethod<jint>(
			"getBsic",
			"()I");
	}
	jint CellIdentityGsm::getMcc()
	{
		return __thiz.callMethod<jint>(
			"getMcc",
			"()I");
	}
	jint CellIdentityGsm::getMnc()
	{
		return __thiz.callMethod<jint>(
			"getMnc",
			"()I");
	}
	void CellIdentityGsm::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jint CellIdentityGsm::getLac()
	{
		return __thiz.callMethod<jint>(
			"getLac",
			"()I");
	}
	jint CellIdentityGsm::getCid()
	{
		return __thiz.callMethod<jint>(
			"getCid",
			"()I");
	}
	jint CellIdentityGsm::getPsc()
	{
		return __thiz.callMethod<jint>(
			"getPsc",
			"()I");
	}
	QAndroidJniObject CellIdentityGsm::getMccString()
	{
		return __thiz.callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject CellIdentityGsm::getMncString()
	{
		return __thiz.callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class CellIdentityGsm : public __jni_impl::android::telephony::CellIdentityGsm
	{
	public:
		CellIdentityGsm(QAndroidJniObject obj) { __thiz = obj; }
		CellIdentityGsm()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_CELLIDENTITYGSM

