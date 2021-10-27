#pragma once

#include "../../__JniBaseClass.hpp"
#include "CellInfo.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::telephony
{
	class CellIdentityGsm;
}
namespace __jni_impl::android::telephony
{
	class CellSignalStrengthGsm;
}

namespace __jni_impl::android::telephony
{
	class CellInfoGsm : public __jni_impl::android::telephony::CellInfo
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
#include "CellIdentityGsm.hpp"
#include "CellSignalStrengthGsm.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject CellInfoGsm::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellInfoGsm",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void CellInfoGsm::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellInfoGsm",
			"(V)V");
	}
	
	// Methods
	jint CellInfoGsm::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellInfoGsm::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject CellInfoGsm::getCellIdentity()
	{
		return __thiz.callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentityGsm;"
		);
	}
	QAndroidJniObject CellInfoGsm::getCellSignalStrength()
	{
		return __thiz.callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrengthGsm;"
		);
	}
	jint CellInfoGsm::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellInfoGsm::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellInfoGsm::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class CellInfoGsm : public __jni_impl::android::telephony::CellInfoGsm
	{
	public:
		CellInfoGsm(QAndroidJniObject obj) { __thiz = obj; }
		CellInfoGsm()
		{
			__constructor();
		}
	};
} // namespace android::telephony

