#pragma once

#include "../../__JniBaseClass.hpp"
#include "CellInfo.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::telephony
{
	class CellIdentityWcdma;
}
namespace __jni_impl::android::telephony
{
	class CellSignalStrengthWcdma;
}

namespace __jni_impl::android::telephony
{
	class CellInfoWcdma : public __jni_impl::android::telephony::CellInfo
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getCellIdentity();
		QAndroidJniObject getCellSignalStrength();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"
#include "CellIdentityWcdma.hpp"
#include "CellSignalStrengthWcdma.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject CellInfoWcdma::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellInfoWcdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void CellInfoWcdma::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellInfoWcdma",
			"(V)V");
	}
	
	// Methods
	jint CellInfoWcdma::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellInfoWcdma::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject CellInfoWcdma::getCellIdentity()
	{
		return __thiz.callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentityWcdma;"
		);
	}
	QAndroidJniObject CellInfoWcdma::getCellSignalStrength()
	{
		return __thiz.callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrengthWcdma;"
		);
	}
	jint CellInfoWcdma::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellInfoWcdma::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellInfoWcdma::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class CellInfoWcdma : public __jni_impl::android::telephony::CellInfoWcdma
	{
	public:
		CellInfoWcdma(QAndroidJniObject obj) { __thiz = obj; }
		CellInfoWcdma()
		{
			__constructor();
		}
	};
} // namespace android::telephony

