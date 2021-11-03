#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	
	// QJniObject forward
	CellInfo::CellInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint CellInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellInfo::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint CellInfo::getCellConnectionStatus()
	{
		return callMethod<jint>(
			"getCellConnectionStatus",
			"()I"
		);
	}
	jlong CellInfo::getTimeStamp()
	{
		return callMethod<jlong>(
			"getTimeStamp",
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
	JString CellInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

