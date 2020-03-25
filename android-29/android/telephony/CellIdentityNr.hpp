#pragma once

#ifndef ANDROID_TELEPHONY_CELLIDENTITYNR
#define ANDROID_TELEPHONY_CELLIDENTITYNR

#include "../../__JniBaseClass.hpp"
#include "CellIdentity.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class CellIdentityNr : public __jni_impl::android::telephony::CellIdentity
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
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getMccString();
		jlong getNci();
		jint getNrarfcn();
		jint getPci();
		jint getTac();
		QAndroidJniObject getMncString();
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject CellIdentityNr::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellIdentityNr",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void CellIdentityNr::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellIdentityNr",
			"(V)V");
	}
	
	// Methods
	jboolean CellIdentityNr::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject CellIdentityNr::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint CellIdentityNr::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	void CellIdentityNr::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject CellIdentityNr::getMccString()
	{
		return __thiz.callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;");
	}
	jlong CellIdentityNr::getNci()
	{
		return __thiz.callMethod<jlong>(
			"getNci",
			"()J");
	}
	jint CellIdentityNr::getNrarfcn()
	{
		return __thiz.callMethod<jint>(
			"getNrarfcn",
			"()I");
	}
	jint CellIdentityNr::getPci()
	{
		return __thiz.callMethod<jint>(
			"getPci",
			"()I");
	}
	jint CellIdentityNr::getTac()
	{
		return __thiz.callMethod<jint>(
			"getTac",
			"()I");
	}
	QAndroidJniObject CellIdentityNr::getMncString()
	{
		return __thiz.callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class CellIdentityNr : public __jni_impl::android::telephony::CellIdentityNr
	{
	public:
		CellIdentityNr(QAndroidJniObject obj) { __thiz = obj; }
		CellIdentityNr()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_CELLIDENTITYNR

