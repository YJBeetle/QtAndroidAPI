#pragma once

#ifndef ANDROID_TELEPHONY_CELLIDENTITYWCDMA
#define ANDROID_TELEPHONY_CELLIDENTITYWCDMA

#include "../../__JniBaseClass.hpp"
#include "CellIdentity.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class CellIdentityWcdma : public __jni_impl::android::telephony::CellIdentity
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
		jint getUarfcn();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getMcc();
		jint getMnc();
		QAndroidJniObject getMccString();
		QAndroidJniObject getMncString();
		jint getLac();
		jint getCid();
		jint getPsc();
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject CellIdentityWcdma::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellIdentityWcdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void CellIdentityWcdma::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellIdentityWcdma",
			"(V)V");
	}
	
	// Methods
	jboolean CellIdentityWcdma::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject CellIdentityWcdma::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint CellIdentityWcdma::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject CellIdentityWcdma::getMobileNetworkOperator()
	{
		return __thiz.callObjectMethod(
			"getMobileNetworkOperator",
			"()Ljava/lang/String;");
	}
	jint CellIdentityWcdma::getUarfcn()
	{
		return __thiz.callMethod<jint>(
			"getUarfcn",
			"()I");
	}
	void CellIdentityWcdma::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jint CellIdentityWcdma::getMcc()
	{
		return __thiz.callMethod<jint>(
			"getMcc",
			"()I");
	}
	jint CellIdentityWcdma::getMnc()
	{
		return __thiz.callMethod<jint>(
			"getMnc",
			"()I");
	}
	QAndroidJniObject CellIdentityWcdma::getMccString()
	{
		return __thiz.callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject CellIdentityWcdma::getMncString()
	{
		return __thiz.callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;");
	}
	jint CellIdentityWcdma::getLac()
	{
		return __thiz.callMethod<jint>(
			"getLac",
			"()I");
	}
	jint CellIdentityWcdma::getCid()
	{
		return __thiz.callMethod<jint>(
			"getCid",
			"()I");
	}
	jint CellIdentityWcdma::getPsc()
	{
		return __thiz.callMethod<jint>(
			"getPsc",
			"()I");
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class CellIdentityWcdma : public __jni_impl::android::telephony::CellIdentityWcdma
	{
	public:
		CellIdentityWcdma(QAndroidJniObject obj) { __thiz = obj; }
		CellIdentityWcdma()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_CELLIDENTITYWCDMA

