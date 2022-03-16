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
	
	// Constructors
	
	// Methods
	jint VisualVoicemailSms::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::os::Bundle VisualVoicemailSms::getFields() const
	{
		return callObjectMethod(
			"getFields",
			"()Landroid/os/Bundle;"
		);
	}
	JString VisualVoicemailSms::getMessageBody() const
	{
		return callObjectMethod(
			"getMessageBody",
			"()Ljava/lang/String;"
		);
	}
	android::telecom::PhoneAccountHandle VisualVoicemailSms::getPhoneAccountHandle() const
	{
		return callObjectMethod(
			"getPhoneAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	JString VisualVoicemailSms::getPrefix() const
	{
		return callObjectMethod(
			"getPrefix",
			"()Ljava/lang/String;"
		);
	}
	void VisualVoicemailSms::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

