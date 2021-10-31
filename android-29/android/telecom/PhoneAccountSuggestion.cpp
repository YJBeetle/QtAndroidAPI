#include "../os/Parcel.hpp"
#include "./PhoneAccountHandle.hpp"
#include "./PhoneAccountSuggestion.hpp"

namespace android::telecom
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
	
	PhoneAccountSuggestion::PhoneAccountSuggestion(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PhoneAccountSuggestion::PhoneAccountSuggestion(android::telecom::PhoneAccountHandle arg0, jint arg1, jboolean arg2)
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
	jint PhoneAccountSuggestion::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PhoneAccountSuggestion::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject PhoneAccountSuggestion::getPhoneAccountHandle()
	{
		return __thiz.callObjectMethod(
			"getPhoneAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	jint PhoneAccountSuggestion::getReason()
	{
		return __thiz.callMethod<jint>(
			"getReason",
			"()I"
		);
	}
	jint PhoneAccountSuggestion::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean PhoneAccountSuggestion::shouldAutoSelect()
	{
		return __thiz.callMethod<jboolean>(
			"shouldAutoSelect",
			"()Z"
		);
	}
	void PhoneAccountSuggestion::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telecom

