#pragma once

#ifndef ANDROID_TELECOM_PHONEACCOUNTSUGGESTION
#define ANDROID_TELECOM_PHONEACCOUNTSUGGESTION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::telecom
{
	class PhoneAccountHandle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telecom
{
	class PhoneAccountSuggestion : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint REASON_FREQUENT();
		static jint REASON_INTRA_CARRIER();
		static jint REASON_NONE();
		static jint REASON_OTHER();
		static jint REASON_USER_SET();
		
		// Constructors
		void __constructor(__jni_impl::android::telecom::PhoneAccountHandle arg0, jint arg1, jboolean arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject getPhoneAccountHandle();
		jboolean shouldAutoSelect();
		jint getReason();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telecom

#include "PhoneAccountHandle.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	QAndroidJniObject PhoneAccountSuggestion::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.PhoneAccountSuggestion",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PhoneAccountSuggestion::REASON_FREQUENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.PhoneAccountSuggestion",
			"REASON_FREQUENT"
		);
	}
	jint PhoneAccountSuggestion::REASON_INTRA_CARRIER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.PhoneAccountSuggestion",
			"REASON_INTRA_CARRIER"
		);
	}
	jint PhoneAccountSuggestion::REASON_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.PhoneAccountSuggestion",
			"REASON_NONE"
		);
	}
	jint PhoneAccountSuggestion::REASON_OTHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.PhoneAccountSuggestion",
			"REASON_OTHER"
		);
	}
	jint PhoneAccountSuggestion::REASON_USER_SET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.PhoneAccountSuggestion",
			"REASON_USER_SET"
		);
	}
	
	// Constructors
	void PhoneAccountSuggestion::__constructor(__jni_impl::android::telecom::PhoneAccountHandle arg0, jint arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.PhoneAccountSuggestion",
			"(Landroid/telecom/PhoneAccountHandle;IZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
	jboolean PhoneAccountSuggestion::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PhoneAccountSuggestion::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject PhoneAccountSuggestion::getPhoneAccountHandle()
	{
		return __thiz.callObjectMethod(
			"getPhoneAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	jboolean PhoneAccountSuggestion::shouldAutoSelect()
	{
		return __thiz.callMethod<jboolean>(
			"shouldAutoSelect",
			"()Z"
		);
	}
	jint PhoneAccountSuggestion::getReason()
	{
		return __thiz.callMethod<jint>(
			"getReason",
			"()I"
		);
	}
	jint PhoneAccountSuggestion::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void PhoneAccountSuggestion::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class PhoneAccountSuggestion : public __jni_impl::android::telecom::PhoneAccountSuggestion
	{
	public:
		PhoneAccountSuggestion(QAndroidJniObject obj) { __thiz = obj; }
		PhoneAccountSuggestion(__jni_impl::android::telecom::PhoneAccountHandle arg0, jint arg1, jboolean arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_PHONEACCOUNTSUGGESTION

