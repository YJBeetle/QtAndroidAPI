#pragma once

#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../telecom/PhoneAccountHandle.def.hpp"
#include "../../JString.hpp"
#include "./VisualVoicemailSms.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject VisualVoicemailSms::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.VisualVoicemailSms",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint VisualVoicemailSms::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::Bundle VisualVoicemailSms::getFields() const
	{
		return callObjectMethod(
			"getFields",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString VisualVoicemailSms::getMessageBody() const
	{
		return callObjectMethod(
			"getMessageBody",
			"()Ljava/lang/String;"
		);
	}
	inline android::telecom::PhoneAccountHandle VisualVoicemailSms::getPhoneAccountHandle() const
	{
		return callObjectMethod(
			"getPhoneAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	inline JString VisualVoicemailSms::getPrefix() const
	{
		return callObjectMethod(
			"getPrefix",
			"()Ljava/lang/String;"
		);
	}
	inline void VisualVoicemailSms::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
