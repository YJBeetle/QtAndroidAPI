#pragma once

#ifndef ANDROID_TELEPHONY_CELLIDENTITYLTE
#define ANDROID_TELEPHONY_CELLIDENTITYLTE

#include "../../__JniBaseClass.hpp"
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
		jstring toString();
		jint hashCode();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jstring getMobileNetworkOperator();
		jint getBandwidth();
		jint getCi();
		jint getEarfcn();
		jint getMcc();
		jint getMnc();
		jstring getMccString();
		jint getPci();
		jint getTac();
		jstring getMncString();
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
			"Landroid/os/Parcelable$Creator;"
		);
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
			arg0
		);
	}
	jstring CellIdentityLte::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CellIdentityLte::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void CellIdentityLte::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring CellIdentityLte::getMobileNetworkOperator()
	{
		return __thiz.callObjectMethod(
			"getMobileNetworkOperator",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CellIdentityLte::getBandwidth()
	{
		return __thiz.callMethod<jint>(
			"getBandwidth",
			"()I"
		);
	}
	jint CellIdentityLte::getCi()
	{
		return __thiz.callMethod<jint>(
			"getCi",
			"()I"
		);
	}
	jint CellIdentityLte::getEarfcn()
	{
		return __thiz.callMethod<jint>(
			"getEarfcn",
			"()I"
		);
	}
	jint CellIdentityLte::getMcc()
	{
		return __thiz.callMethod<jint>(
			"getMcc",
			"()I"
		);
	}
	jint CellIdentityLte::getMnc()
	{
		return __thiz.callMethod<jint>(
			"getMnc",
			"()I"
		);
	}
	jstring CellIdentityLte::getMccString()
	{
		return __thiz.callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CellIdentityLte::getPci()
	{
		return __thiz.callMethod<jint>(
			"getPci",
			"()I"
		);
	}
	jint CellIdentityLte::getTac()
	{
		return __thiz.callMethod<jint>(
			"getTac",
			"()I"
		);
	}
	jstring CellIdentityLte::getMncString()
	{
		return __thiz.callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

