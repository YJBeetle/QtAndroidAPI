#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./NeighboringCellInfo.hpp"

namespace android::telephony
{
	// Fields
	JObject NeighboringCellInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.NeighboringCellInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint NeighboringCellInfo::UNKNOWN_CID()
	{
		return getStaticField<jint>(
			"android.telephony.NeighboringCellInfo",
			"UNKNOWN_CID"
		);
	}
	jint NeighboringCellInfo::UNKNOWN_RSSI()
	{
		return getStaticField<jint>(
			"android.telephony.NeighboringCellInfo",
			"UNKNOWN_RSSI"
		);
	}
	
	// Constructors
	NeighboringCellInfo::NeighboringCellInfo()
		: JObject(
			"android.telephony.NeighboringCellInfo",
			"()V"
		) {}
	NeighboringCellInfo::NeighboringCellInfo(android::os::Parcel arg0)
		: JObject(
			"android.telephony.NeighboringCellInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	NeighboringCellInfo::NeighboringCellInfo(jint arg0, jint arg1)
		: JObject(
			"android.telephony.NeighboringCellInfo",
			"(II)V",
			arg0,
			arg1
		) {}
	NeighboringCellInfo::NeighboringCellInfo(jint arg0, JString arg1, jint arg2)
		: JObject(
			"android.telephony.NeighboringCellInfo",
			"(ILjava/lang/String;I)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	jint NeighboringCellInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint NeighboringCellInfo::getCid() const
	{
		return callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	jint NeighboringCellInfo::getLac() const
	{
		return callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	jint NeighboringCellInfo::getNetworkType() const
	{
		return callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	jint NeighboringCellInfo::getPsc() const
	{
		return callMethod<jint>(
			"getPsc",
			"()I"
		);
	}
	jint NeighboringCellInfo::getRssi() const
	{
		return callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	void NeighboringCellInfo::setCid(jint arg0) const
	{
		callMethod<void>(
			"setCid",
			"(I)V",
			arg0
		);
	}
	void NeighboringCellInfo::setRssi(jint arg0) const
	{
		callMethod<void>(
			"setRssi",
			"(I)V",
			arg0
		);
	}
	JString NeighboringCellInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void NeighboringCellInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

