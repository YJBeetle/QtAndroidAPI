#pragma once

#ifndef ANDROID_TELEPHONY_VISUALVOICEMAILSMS
#define ANDROID_TELEPHONY_VISUALVOICEMAILSMS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::telecom
{
	class PhoneAccountHandle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class VisualVoicemailSms : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getFields();
		QAndroidJniObject getPhoneAccountHandle();
		jstring getMessageBody();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jstring getPrefix();
	};
} // namespace __jni_impl::android::telephony

#include "../os/Bundle.hpp"
#include "../telecom/PhoneAccountHandle.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject VisualVoicemailSms::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.VisualVoicemailSms",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void VisualVoicemailSms::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.VisualVoicemailSms",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject VisualVoicemailSms::getFields()
	{
		return __thiz.callObjectMethod(
			"getFields",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject VisualVoicemailSms::getPhoneAccountHandle()
	{
		return __thiz.callObjectMethod(
			"getPhoneAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	jstring VisualVoicemailSms::getMessageBody()
	{
		return __thiz.callObjectMethod(
			"getMessageBody",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint VisualVoicemailSms::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void VisualVoicemailSms::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring VisualVoicemailSms::getPrefix()
	{
		return __thiz.callObjectMethod(
			"getPrefix",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class VisualVoicemailSms : public __jni_impl::android::telephony::VisualVoicemailSms
	{
	public:
		VisualVoicemailSms(QAndroidJniObject obj) { __thiz = obj; }
		VisualVoicemailSms()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_VISUALVOICEMAILSMS

