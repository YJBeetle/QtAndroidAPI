#include "../os/Parcel.hpp"
#include "./CellIdentity.hpp"
#include "./CellSignalStrength.hpp"
#include "./CellInfo.hpp"

namespace android::telephony
{
	// Fields
	jint CellInfo::CONNECTION_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.CellInfo",
			"CONNECTION_NONE"
		);
	}
	jint CellInfo::CONNECTION_PRIMARY_SERVING()
	{
		return getStaticField<jint>(
			"android.telephony.CellInfo",
			"CONNECTION_PRIMARY_SERVING"
		);
	}
	jint CellInfo::CONNECTION_SECONDARY_SERVING()
	{
		return getStaticField<jint>(
			"android.telephony.CellInfo",
			"CONNECTION_SECONDARY_SERVING"
		);
	}
	jint CellInfo::CONNECTION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.CellInfo",
			"CONNECTION_UNKNOWN"
		);
	}
	JObject CellInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint CellInfo::UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.CellInfo",
			"UNAVAILABLE"
		);
	}
	jlong CellInfo::UNAVAILABLE_LONG()
	{
		return getStaticField<jlong>(
			"android.telephony.CellInfo",
			"UNAVAILABLE_LONG"
		);
	}
	
	// QAndroidJniObject forward
	CellInfo::CellInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint CellInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CellInfo::getCellConnectionStatus()
	{
		return callMethod<jint>(
			"getCellConnectionStatus",
			"()I"
		);
	}
	android::telephony::CellIdentity CellInfo::getCellIdentity()
	{
		return callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentity;"
		);
	}
	android::telephony::CellSignalStrength CellInfo::getCellSignalStrength()
	{
		return callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrength;"
		);
	}
	jlong CellInfo::getTimeStamp()
	{
		return callMethod<jlong>(
			"getTimeStamp",
			"()J"
		);
	}
	jlong CellInfo::getTimestampMillis()
	{
		return callMethod<jlong>(
			"getTimestampMillis",
			"()J"
		);
	}
	jint CellInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean CellInfo::isRegistered()
	{
		return callMethod<jboolean>(
			"isRegistered",
			"()Z"
		);
	}
	jstring CellInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

