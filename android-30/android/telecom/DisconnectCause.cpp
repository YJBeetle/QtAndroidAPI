#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DisconnectCause.hpp"

namespace android::telecom
{
	// Fields
	jint DisconnectCause::ANSWERED_ELSEWHERE()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"ANSWERED_ELSEWHERE"
		);
	}
	jint DisconnectCause::BUSY()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"BUSY"
		);
	}
	jint DisconnectCause::CALL_PULLED()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"CALL_PULLED"
		);
	}
	jint DisconnectCause::CANCELED()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"CANCELED"
		);
	}
	jint DisconnectCause::CONNECTION_MANAGER_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"CONNECTION_MANAGER_NOT_SUPPORTED"
		);
	}
	JObject DisconnectCause::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.DisconnectCause",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint DisconnectCause::ERROR()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"ERROR"
		);
	}
	jint DisconnectCause::LOCAL()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"LOCAL"
		);
	}
	jint DisconnectCause::MISSED()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"MISSED"
		);
	}
	jint DisconnectCause::OTHER()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"OTHER"
		);
	}
	JString DisconnectCause::REASON_EMERGENCY_CALL_PLACED()
	{
		return getStaticObjectField(
			"android.telecom.DisconnectCause",
			"REASON_EMERGENCY_CALL_PLACED",
			"Ljava/lang/String;"
		);
	}
	jint DisconnectCause::REJECTED()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"REJECTED"
		);
	}
	jint DisconnectCause::REMOTE()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"REMOTE"
		);
	}
	jint DisconnectCause::RESTRICTED()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"RESTRICTED"
		);
	}
	jint DisconnectCause::UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	DisconnectCause::DisconnectCause(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DisconnectCause::DisconnectCause(jint arg0)
		: JObject(
			"android.telecom.DisconnectCause",
			"(I)V",
			arg0
		) {}
	DisconnectCause::DisconnectCause(jint arg0, JString arg1)
		: JObject(
			"android.telecom.DisconnectCause",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	DisconnectCause::DisconnectCause(jint arg0, JString arg1, JString arg2, JString arg3)
		: JObject(
			"android.telecom.DisconnectCause",
			"(ILjava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		) {}
	DisconnectCause::DisconnectCause(jint arg0, JString arg1, JString arg2, JString arg3, jint arg4)
		: JObject(
			"android.telecom.DisconnectCause",
			"(ILjava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/String;I)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4
		) {}
	
	// Methods
	jint DisconnectCause::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean DisconnectCause::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint DisconnectCause::getCode() const
	{
		return callMethod<jint>(
			"getCode",
			"()I"
		);
	}
	JString DisconnectCause::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString DisconnectCause::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString DisconnectCause::getReason() const
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		);
	}
	jint DisconnectCause::getTone() const
	{
		return callMethod<jint>(
			"getTone",
			"()I"
		);
	}
	jint DisconnectCause::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString DisconnectCause::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void DisconnectCause::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

