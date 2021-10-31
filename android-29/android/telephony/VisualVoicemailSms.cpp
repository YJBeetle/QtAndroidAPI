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
	
	// QAndroidJniObject forward
	VisualVoicemailSms::VisualVoicemailSms(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint VisualVoicemailSms::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject VisualVoicemailSms::getFields()
	{
		return callObjectMethod(
			"getFields",
			"()Landroid/os/Bundle;"
		);
	}
	jstring VisualVoicemailSms::getMessageBody()
	{
		return callObjectMethod(
			"getMessageBody",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject VisualVoicemailSms::getPhoneAccountHandle()
	{
		return callObjectMethod(
			"getPhoneAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	jstring VisualVoicemailSms::getPrefix()
	{
		return callObjectMethod(
			"getPrefix",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void VisualVoicemailSms::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

