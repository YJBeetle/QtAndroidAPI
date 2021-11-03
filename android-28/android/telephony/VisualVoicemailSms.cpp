#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "../telecom/PhoneAccountHandle.hpp"
#include "../../JString.hpp"
#include "./VisualVoicemailSms.hpp"

namespace android::telephony
{
	// Fields
	JObject VisualVoicemailSms::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.VisualVoicemailSms",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	VisualVoicemailSms::VisualVoicemailSms(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint VisualVoicemailSms::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::os::Bundle VisualVoicemailSms::getFields()
	{
		return callObjectMethod(
			"getFields",
			"()Landroid/os/Bundle;"
		);
	}
	JString VisualVoicemailSms::getMessageBody()
	{
		return callObjectMethod(
			"getMessageBody",
			"()Ljava/lang/String;"
		);
	}
	android::telecom::PhoneAccountHandle VisualVoicemailSms::getPhoneAccountHandle()
	{
		return callObjectMethod(
			"getPhoneAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	JString VisualVoicemailSms::getPrefix()
	{
		return callObjectMethod(
			"getPrefix",
			"()Ljava/lang/String;"
		);
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

