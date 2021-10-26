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
		jstring toString();
		jint hashCode();
		jint getLac();
		jint getCid();
		jint getPsc();
		jstring getMccString();
		jstring getMncString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getMcc();
		jint getMnc();
		jint getUarfcn();
		jstring getMobileNetworkOperator();
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
			"Landroid/os/Parcelable$Creator;"
		);
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
			arg0
		);
	}
	jstring CellIdentityWcdma::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CellIdentityWcdma::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint CellIdentityWcdma::getLac()
	{
		return __thiz.callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	jint CellIdentityWcdma::getCid()
	{
		return __thiz.callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	jint CellIdentityWcdma::getPsc()
	{
		return __thiz.callMethod<jint>(
			"getPsc",
			"()I"
		);
	}
	jstring CellIdentityWcdma::getMccString()
	{
		return __thiz.callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CellIdentityWcdma::getMncString()
	{
		return __thiz.callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellIdentityWcdma::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint CellIdentityWcdma::getMcc()
	{
		return __thiz.callMethod<jint>(
			"getMcc",
			"()I"
		);
	}
	jint CellIdentityWcdma::getMnc()
	{
		return __thiz.callMethod<jint>(
			"getMnc",
			"()I"
		);
	}
	jint CellIdentityWcdma::getUarfcn()
	{
		return __thiz.callMethod<jint>(
			"getUarfcn",
			"()I"
		);
	}
	jstring CellIdentityWcdma::getMobileNetworkOperator()
	{
		return __thiz.callObjectMethod(
			"getMobileNetworkOperator",
			"()Ljava/lang/String;"
		).object<jstring>();
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

