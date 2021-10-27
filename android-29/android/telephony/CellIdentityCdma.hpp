#pragma once

#include "../../__JniBaseClass.hpp"
#include "./CellIdentity.hpp"

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
		jint getBasestationId();
		jint getLatitude();
		jint getLongitude();
		jint getNetworkId();
		jint getSystemId();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
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
	jint CellIdentityCdma::getBasestationId()
	{
		return __thiz.callMethod<jint>(
			"getBasestationId",
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
	jint CellIdentityCdma::getNetworkId()
	{
		return __thiz.callMethod<jint>(
			"getNetworkId",
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
	jint CellIdentityCdma::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellIdentityCdma::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

