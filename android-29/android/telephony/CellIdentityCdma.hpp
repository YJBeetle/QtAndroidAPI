#pragma once

#ifndef ANDROID_TELEPHONY_CELLIDENTITYCDMA
#define ANDROID_TELEPHONY_CELLIDENTITYCDMA

#include "../../__JniBaseClass.hpp"
#include "CellIdentity.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class CellIdentityCdma : public __jni_impl::android::telephony::CellIdentity
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
		jint getLatitude();
		jint getLongitude();
		jint getSystemId();
		jint getNetworkId();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getBasestationId();
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject CellIdentityCdma::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellIdentityCdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void CellIdentityCdma::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellIdentityCdma",
			"(V)V");
	}
	
	// Methods
	jboolean CellIdentityCdma::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring CellIdentityCdma::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CellIdentityCdma::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint CellIdentityCdma::getLatitude()
	{
		return __thiz.callMethod<jint>(
			"getLatitude",
			"()I"
		);
	}
	jint CellIdentityCdma::getLongitude()
	{
		return __thiz.callMethod<jint>(
			"getLongitude",
			"()I"
		);
	}
	jint CellIdentityCdma::getSystemId()
	{
		return __thiz.callMethod<jint>(
			"getSystemId",
			"()I"
		);
	}
	jint CellIdentityCdma::getNetworkId()
	{
		return __thiz.callMethod<jint>(
			"getNetworkId",
			"()I"
		);
	}
	void CellIdentityCdma::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint CellIdentityCdma::getBasestationId()
	{
		return __thiz.callMethod<jint>(
			"getBasestationId",
			"()I"
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class CellIdentityCdma : public __jni_impl::android::telephony::CellIdentityCdma
	{
	public:
		CellIdentityCdma(QAndroidJniObject obj) { __thiz = obj; }
		CellIdentityCdma()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_CELLIDENTITYCDMA

