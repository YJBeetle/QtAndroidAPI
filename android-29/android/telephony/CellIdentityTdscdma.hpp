#pragma once

#ifndef ANDROID_TELEPHONY_CELLIDENTITYTDSCDMA
#define ANDROID_TELEPHONY_CELLIDENTITYTDSCDMA

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
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject getMobileNetworkOperator();
		jint getUarfcn();
		jint getCpid();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getMccString();
		QAndroidJniObject getMncString();
		jint getLac();
		jint getCid();
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
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void CellIdentityTdscdma::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellIdentityTdscdma",
			"(V)V");
	}
	
	// Methods
	jboolean CellIdentityTdscdma::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject CellIdentityTdscdma::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint CellIdentityTdscdma::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject CellIdentityTdscdma::getMobileNetworkOperator()
	{
		return __thiz.callObjectMethod(
			"getMobileNetworkOperator",
			"()Ljava/lang/String;");
	}
	jint CellIdentityTdscdma::getUarfcn()
	{
		return __thiz.callMethod<jint>(
			"getUarfcn",
			"()I");
	}
	jint CellIdentityTdscdma::getCpid()
	{
		return __thiz.callMethod<jint>(
			"getCpid",
			"()I");
	}
	jint CellIdentityTdscdma::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void CellIdentityTdscdma::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject CellIdentityTdscdma::getMccString()
	{
		return __thiz.callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject CellIdentityTdscdma::getMncString()
	{
		return __thiz.callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;");
	}
	jint CellIdentityTdscdma::getLac()
	{
		return __thiz.callMethod<jint>(
			"getLac",
			"()I");
	}
	jint CellIdentityTdscdma::getCid()
	{
		return __thiz.callMethod<jint>(
			"getCid",
			"()I");
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

#endif // ANDROID_TELEPHONY_CELLIDENTITYTDSCDMA

