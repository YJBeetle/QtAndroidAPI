#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "../telecom/PhoneAccountHandle.hpp"
#include "./VisualVoicemailSms.hpp"

namespace android::telephony
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
	
	VisualVoicemailSms::VisualVoicemailSms(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint VisualVoicemailSms::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject VisualVoicemailSms::getFields()
	{
		return __thiz.callObjectMethod(
			"getFields",
			"()Landroid/os/Bundle;"
		);
	}
	jstring VisualVoicemailSms::getMessageBody()
	{
		return __thiz.callObjectMethod(
			"getMessageBody",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject VisualVoicemailSms::getPhoneAccountHandle()
	{
		return __thiz.callObjectMethod(
			"getPhoneAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	jstring VisualVoicemailSms::getPrefix()
	{
		return __thiz.callObjectMethod(
			"getPrefix",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void VisualVoicemailSms::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telephony

