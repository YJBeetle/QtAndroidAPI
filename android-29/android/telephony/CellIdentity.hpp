#pragma once

#ifndef ANDROID_TELEPHONY_CELLIDENTITY
#define ANDROID_TELEPHONY_CELLIDENTITY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class CellIdentity : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getOperatorAlphaLong();
		QAndroidJniObject getOperatorAlphaShort();
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject CellIdentity::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellIdentity",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void CellIdentity::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellIdentity",
			"(V)V");
	}
	
	// Methods
	jboolean CellIdentity::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint CellIdentity::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint CellIdentity::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void CellIdentity::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject CellIdentity::getOperatorAlphaLong()
	{
		return __thiz.callObjectMethod(
			"getOperatorAlphaLong",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject CellIdentity::getOperatorAlphaShort()
	{
		return __thiz.callObjectMethod(
			"getOperatorAlphaShort",
			"()Ljava/lang/CharSequence;");
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class CellIdentity : public __jni_impl::android::telephony::CellIdentity
	{
	public:
		CellIdentity(QAndroidJniObject obj) { __thiz = obj; }
		CellIdentity()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_CELLIDENTITY

