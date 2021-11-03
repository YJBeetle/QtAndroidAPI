#include "../os/Parcel.hpp"
#include "./PhoneAccountHandle.hpp"
#include "./PhoneAccountSuggestion.hpp"

namespace android::telecom
{
	// Fields
	JObject PhoneAccountSuggestion::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccountSuggestion",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PhoneAccountSuggestion::REASON_FREQUENT()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccountSuggestion",
			"REASON_FREQUENT"
		);
	}
	jint PhoneAccountSuggestion::REASON_INTRA_CARRIER()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccountSuggestion",
			"REASON_INTRA_CARRIER"
		);
	}
	jint PhoneAccountSuggestion::REASON_NONE()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccountSuggestion",
			"REASON_NONE"
		);
	}
	jint PhoneAccountSuggestion::REASON_OTHER()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccountSuggestion",
			"REASON_OTHER"
		);
	}
	jint PhoneAccountSuggestion::REASON_USER_SET()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccountSuggestion",
			"REASON_USER_SET"
		);
	}
	
	// QAndroidJniObject forward
	PhoneAccountSuggestion::PhoneAccountSuggestion(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PhoneAccountSuggestion::PhoneAccountSuggestion(android::telecom::PhoneAccountHandle arg0, jint arg1, jboolean arg2)
		: JObject(
			"android.telecom.PhoneAccountSuggestion",
			"(Landroid/telecom/PhoneAccountHandle;IZ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	jint PhoneAccountSuggestion::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PhoneAccountSuggestion::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::telecom::PhoneAccountHandle PhoneAccountSuggestion::getPhoneAccountHandle()
	{
		return callObjectMethod(
			"getPhoneAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	jint PhoneAccountSuggestion::getReason()
	{
		return callMethod<jint>(
			"getReason",
			"()I"
		);
	}
	jint PhoneAccountSuggestion::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean PhoneAccountSuggestion::shouldAutoSelect()
	{
		return callMethod<jboolean>(
			"shouldAutoSelect",
			"()Z"
		);
	}
	void PhoneAccountSuggestion::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

