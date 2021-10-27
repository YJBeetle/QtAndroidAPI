#pragma once

#include "../../__JniBaseClass.hpp"
#include "CellIdentity.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class CellIdentityTdscdma : public __jni_impl::android::telephony::CellIdentity
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getCid();
		jint getCpid();
		jint getLac();
		jstring getMccString();
		jstring getMncString();
		jstring getMobileNetworkOperator();
		jint getUarfcn();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject CellIdentityTdscdma::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellIdentityTdscdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void CellIdentityTdscdma::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellIdentityTdscdma",
			"(V)V");
	}
	
	// Methods
	jint CellIdentityTdscdma::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellIdentityTdscdma::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CellIdentityTdscdma::getCid()
	{
		return __thiz.callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	jint CellIdentityTdscdma::getCpid()
	{
		return __thiz.callMethod<jint>(
			"getCpid",
			"()I"
		);
	}
	jint CellIdentityTdscdma::getLac()
	{
		return __thiz.callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	jstring CellIdentityTdscdma::getMccString()
	{
		return __thiz.callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CellIdentityTdscdma::getMncString()
	{
		return __thiz.callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CellIdentityTdscdma::getMobileNetworkOperator()
	{
		return __thiz.callObjectMethod(
			"getMobileNetworkOperator",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CellIdentityTdscdma::getUarfcn()
	{
		return __thiz.callMethod<jint>(
			"getUarfcn",
			"()I"
		);
	}
	jint CellIdentityTdscdma::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellIdentityTdscdma::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellIdentityTdscdma::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class CellIdentityTdscdma : public __jni_impl::android::telephony::CellIdentityTdscdma
	{
	public:
		CellIdentityTdscdma(QAndroidJniObject obj) { __thiz = obj; }
		CellIdentityTdscdma()
		{
			__constructor();
		}
	};
} // namespace android::telephony

