#pragma once

#ifndef ANDROID_TELEPHONY_CELLIDENTITYLTE
#define ANDROID_TELEPHONY_CELLIDENTITYLTE

#include "CellIdentity.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class CellIdentityLte : public __jni_impl::android::telephony::CellIdentity
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
		jint getMcc();
		jint getMnc();
		jint getBandwidth();
		jint getCi();
		jint getEarfcn();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getMccString();
		jint getPci();
		jint getTac();
		QAndroidJniObject getMncString();
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject CellIdentityLte::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellIdentityLte",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void CellIdentityLte::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellIdentityLte",
			"(V)V");
	}
	
	// Methods
	jboolean CellIdentityLte::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject CellIdentityLte::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint CellIdentityLte::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject CellIdentityLte::getMobileNetworkOperator()
	{
		return __thiz.callObjectMethod(
			"getMobileNetworkOperator",
			"()Ljava/lang/String;");
	}
	jint CellIdentityLte::getMcc()
	{
		return __thiz.callMethod<jint>(
			"getMcc",
			"()I");
	}
	jint CellIdentityLte::getMnc()
	{
		return __thiz.callMethod<jint>(
			"getMnc",
			"()I");
	}
	jint CellIdentityLte::getBandwidth()
	{
		return __thiz.callMethod<jint>(
			"getBandwidth",
			"()I");
	}
	jint CellIdentityLte::getCi()
	{
		return __thiz.callMethod<jint>(
			"getCi",
			"()I");
	}
	jint CellIdentityLte::getEarfcn()
	{
		return __thiz.callMethod<jint>(
			"getEarfcn",
			"()I");
	}
	void CellIdentityLte::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject CellIdentityLte::getMccString()
	{
		return __thiz.callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;");
	}
	jint CellIdentityLte::getPci()
	{
		return __thiz.callMethod<jint>(
			"getPci",
			"()I");
	}
	jint CellIdentityLte::getTac()
	{
		return __thiz.callMethod<jint>(
			"getTac",
			"()I");
	}
	QAndroidJniObject CellIdentityLte::getMncString()
	{
		return __thiz.callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class CellIdentityLte : public __jni_impl::android::telephony::CellIdentityLte
	{
	public:
		CellIdentityLte(QAndroidJniObject obj) { __thiz = obj; }
		CellIdentityLte()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_CELLIDENTITYLTE

