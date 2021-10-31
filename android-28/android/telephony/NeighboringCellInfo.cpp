#include "../os/Parcel.hpp"
#include "./NeighboringCellInfo.hpp"

namespace android::telephony
{
	// Fields
	__JniBaseClass NeighboringCellInfo::CREATOR()
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
	
	// QJniObject forward
	NeighboringCellInfo::NeighboringCellInfo(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	NeighboringCellInfo::NeighboringCellInfo()
		: __JniBaseClass(
			"android.telephony.NeighboringCellInfo",
			"()V"
		) {}
	NeighboringCellInfo::NeighboringCellInfo(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.telephony.NeighboringCellInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	NeighboringCellInfo::NeighboringCellInfo(jint arg0, jint arg1)
		: __JniBaseClass(
			"android.telephony.NeighboringCellInfo",
			"(II)V",
			arg0,
			arg1
		) {}
	NeighboringCellInfo::NeighboringCellInfo(jint arg0, jstring arg1, jint arg2)
		: __JniBaseClass(
			"android.telephony.NeighboringCellInfo",
			"(ILjava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint NeighboringCellInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint NeighboringCellInfo::getCid()
	{
		return callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	jint NeighboringCellInfo::getLac()
	{
		return callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	jint NeighboringCellInfo::getNetworkType()
	{
		return callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	jint NeighboringCellInfo::getPsc()
	{
		return callMethod<jint>(
			"getPsc",
			"()I"
		);
	}
	jint NeighboringCellInfo::getRssi()
	{
		return callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	void NeighboringCellInfo::setCid(jint arg0)
	{
		callMethod<void>(
			"setCid",
			"(I)V",
			arg0
		);
	}
	void NeighboringCellInfo::setRssi(jint arg0)
	{
		callMethod<void>(
			"setRssi",
			"(I)V",
			arg0
		);
	}
	jstring NeighboringCellInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void NeighboringCellInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

