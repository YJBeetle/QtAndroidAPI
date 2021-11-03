#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PhysicalChannelConfig.hpp"

namespace android::telephony
{
	// Fields
	jint PhysicalChannelConfig::BAND_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.PhysicalChannelConfig",
			"BAND_UNKNOWN"
		);
	}
	jint PhysicalChannelConfig::CELL_BANDWIDTH_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.PhysicalChannelConfig",
			"CELL_BANDWIDTH_UNKNOWN"
		);
	}
	jint PhysicalChannelConfig::CHANNEL_NUMBER_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.PhysicalChannelConfig",
			"CHANNEL_NUMBER_UNKNOWN"
		);
	}
	jint PhysicalChannelConfig::CONNECTION_PRIMARY_SERVING()
	{
		return getStaticField<jint>(
			"android.telephony.PhysicalChannelConfig",
			"CONNECTION_PRIMARY_SERVING"
		);
	}
	jint PhysicalChannelConfig::CONNECTION_SECONDARY_SERVING()
	{
		return getStaticField<jint>(
			"android.telephony.PhysicalChannelConfig",
			"CONNECTION_SECONDARY_SERVING"
		);
	}
	jint PhysicalChannelConfig::CONNECTION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.PhysicalChannelConfig",
			"CONNECTION_UNKNOWN"
		);
	}
	JObject PhysicalChannelConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.PhysicalChannelConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PhysicalChannelConfig::FREQUENCY_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.PhysicalChannelConfig",
			"FREQUENCY_UNKNOWN"
		);
	}
	jint PhysicalChannelConfig::PHYSICAL_CELL_ID_MAXIMUM_VALUE()
	{
		return getStaticField<jint>(
			"android.telephony.PhysicalChannelConfig",
			"PHYSICAL_CELL_ID_MAXIMUM_VALUE"
		);
	}
	jint PhysicalChannelConfig::PHYSICAL_CELL_ID_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.PhysicalChannelConfig",
			"PHYSICAL_CELL_ID_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	PhysicalChannelConfig::PhysicalChannelConfig(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint PhysicalChannelConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PhysicalChannelConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint PhysicalChannelConfig::getBand() const
	{
		return callMethod<jint>(
			"getBand",
			"()I"
		);
	}
	jint PhysicalChannelConfig::getCellBandwidthDownlinkKhz() const
	{
		return callMethod<jint>(
			"getCellBandwidthDownlinkKhz",
			"()I"
		);
	}
	jint PhysicalChannelConfig::getCellBandwidthUplinkKhz() const
	{
		return callMethod<jint>(
			"getCellBandwidthUplinkKhz",
			"()I"
		);
	}
	jint PhysicalChannelConfig::getConnectionStatus() const
	{
		return callMethod<jint>(
			"getConnectionStatus",
			"()I"
		);
	}
	jint PhysicalChannelConfig::getDownlinkChannelNumber() const
	{
		return callMethod<jint>(
			"getDownlinkChannelNumber",
			"()I"
		);
	}
	jint PhysicalChannelConfig::getDownlinkFrequencyKhz() const
	{
		return callMethod<jint>(
			"getDownlinkFrequencyKhz",
			"()I"
		);
	}
	jint PhysicalChannelConfig::getNetworkType() const
	{
		return callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	jint PhysicalChannelConfig::getPhysicalCellId() const
	{
		return callMethod<jint>(
			"getPhysicalCellId",
			"()I"
		);
	}
	jint PhysicalChannelConfig::getUplinkChannelNumber() const
	{
		return callMethod<jint>(
			"getUplinkChannelNumber",
			"()I"
		);
	}
	jint PhysicalChannelConfig::getUplinkFrequencyKhz() const
	{
		return callMethod<jint>(
			"getUplinkFrequencyKhz",
			"()I"
		);
	}
	jint PhysicalChannelConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString PhysicalChannelConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void PhysicalChannelConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

