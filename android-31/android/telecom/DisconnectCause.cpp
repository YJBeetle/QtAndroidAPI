#include "../os/Parcel.hpp"
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
	__JniBaseClass DisconnectCause::CREATOR()
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
	jstring DisconnectCause::REASON_EMERGENCY_CALL_PLACED()
	{
		return getStaticObjectField(
			"android.telecom.DisconnectCause",
			"REASON_EMERGENCY_CALL_PLACED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DisconnectCause::REASON_EMULATING_SINGLE_CALL()
	{
		return getStaticObjectField(
			"android.telecom.DisconnectCause",
			"REASON_EMULATING_SINGLE_CALL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DisconnectCause::REASON_IMS_ACCESS_BLOCKED()
	{
		return getStaticObjectField(
			"android.telecom.DisconnectCause",
			"REASON_IMS_ACCESS_BLOCKED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DisconnectCause::REASON_WIFI_ON_BUT_WFC_OFF()
	{
		return getStaticObjectField(
			"android.telecom.DisconnectCause",
			"REASON_WIFI_ON_BUT_WFC_OFF",
			"Ljava/lang/String;"
		).object<jstring>();
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
	DisconnectCause::DisconnectCause(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DisconnectCause::DisconnectCause(jint arg0)
		: __JniBaseClass(
			"android.telecom.DisconnectCause",
			"(I)V",
			arg0
		) {}
	DisconnectCause::DisconnectCause(jint arg0, jstring arg1)
		: __JniBaseClass(
			"android.telecom.DisconnectCause",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		) {}
	DisconnectCause::DisconnectCause(jint arg0, jstring arg1, jstring arg2, jstring arg3)
		: __JniBaseClass(
			"android.telecom.DisconnectCause",
			"(ILjava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	DisconnectCause::DisconnectCause(jint arg0, jstring arg1, jstring arg2, jstring arg3, jint arg4)
		: __JniBaseClass(
			"android.telecom.DisconnectCause",
			"(ILjava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	jint DisconnectCause::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean DisconnectCause::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint DisconnectCause::getCode()
	{
		return callMethod<jint>(
			"getCode",
			"()I"
		);
	}
	jstring DisconnectCause::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring DisconnectCause::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring DisconnectCause::getReason()
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint DisconnectCause::getTone()
	{
		return callMethod<jint>(
			"getTone",
			"()I"
		);
	}
	jint DisconnectCause::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring DisconnectCause::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DisconnectCause::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

