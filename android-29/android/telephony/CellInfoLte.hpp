#pragma once

#ifndef ANDROID_TELEPHONY_CELLINFOLTE
#define ANDROID_TELEPHONY_CELLINFOLTE

#include "CellInfo.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::telephony
{
	class CellIdentityLte;
}
namespace __jni_impl::android::telephony
{
	class CellSignalStrengthLte;
}

namespace __jni_impl::android::telephony
{
	class CellInfoLte : public __jni_impl::android::telephony::CellInfo
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
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getCellIdentity();
		QAndroidJniObject getCellSignalStrength();
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"
#include "CellIdentityLte.hpp"
#include "CellSignalStrengthLte.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject CellInfoLte::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellInfoLte",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void CellInfoLte::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellInfoLte",
			"(V)V");
	}
	
	// Methods
	jboolean CellInfoLte::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject CellInfoLte::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint CellInfoLte::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint CellInfoLte::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void CellInfoLte::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject CellInfoLte::getCellIdentity()
	{
		return __thiz.callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentityLte;");
	}
	QAndroidJniObject CellInfoLte::getCellSignalStrength()
	{
		return __thiz.callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrengthLte;");
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class CellInfoLte : public __jni_impl::android::telephony::CellInfoLte
	{
	public:
		CellInfoLte(QAndroidJniObject obj) { __thiz = obj; }
		CellInfoLte()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_CELLINFOLTE

