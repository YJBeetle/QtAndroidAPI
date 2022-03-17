#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PhysicalChannelConfig.def.hpp"

namespace android::telephony
{
	// Fields
	inline jint PhysicalChannelConfig::BAND_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.PhysicalChannelConfig",
			"BAND_UNKNOWN"
		);
	}
	inline jint PhysicalChannelConfig::CELL_BANDWIDTH_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.PhysicalChannelConfig",
			"CELL_BANDWIDTH_UNKNOWN"
		);
	}
	inline jint PhysicalChannelConfig::CHANNEL_NUMBER_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.PhysicalChannelConfig",
			"CHANNEL_NUMBER_UNKNOWN"
		);
	}
	inline jint PhysicalChannelConfig::CONNECTION_PRIMARY_SERVING()
	{
		return getStaticField<jint>(
			"android.telephony.PhysicalChannelConfig",
			"CONNECTION_PRIMARY_SERVING"
		);
	}
	inline jint PhysicalChannelConfig::CONNECTION_SECONDARY_SERVING()
	{
		return getStaticField<jint>(
			"android.telephony.PhysicalChannelConfig",
			"CONNECTION_SECONDARY_SERVING"
		);
	}
	inline jint PhysicalChannelConfig::CONNECTION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.PhysicalChannelConfig",
			"CONNECTION_UNKNOWN"
		);
	}
	inline JObject PhysicalChannelConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.PhysicalChannelConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PhysicalChannelConfig::FREQUENCY_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.PhysicalChannelConfig",
			"FREQUENCY_UNKNOWN"
		);
	}
	inline jint PhysicalChannelConfig::PHYSICAL_CELL_ID_MAXIMUM_VALUE()
	{
		return getStaticField<jint>(
			"android.telephony.PhysicalChannelConfig",
			"PHYSICAL_CELL_ID_MAXIMUM_VALUE"
		);
	}
	inline jint PhysicalChannelConfig::PHYSICAL_CELL_ID_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.PhysicalChannelConfig",
			"PHYSICAL_CELL_ID_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PhysicalChannelConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PhysicalChannelConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint PhysicalChannelConfig::getBand() const
	{
		return callMethod<jint>(
			"getBand",
			"()I"
		);
	}
	inline jint PhysicalChannelConfig::getCellBandwidthDownlinkKhz() const
	{
		return callMethod<jint>(
			"getCellBandwidthDownlinkKhz",
			"()I"
		);
	}
	inline jint PhysicalChannelConfig::getCellBandwidthUplinkKhz() const
	{
		return callMethod<jint>(
			"getCellBandwidthUplinkKhz",
			"()I"
		);
	}
	inline jint PhysicalChannelConfig::getConnectionStatus() const
	{
		return callMethod<jint>(
			"getConnectionStatus",
			"()I"
		);
	}
	inline jint PhysicalChannelConfig::getDownlinkChannelNumber() const
	{
		return callMethod<jint>(
			"getDownlinkChannelNumber",
			"()I"
		);
	}
	inline jint PhysicalChannelConfig::getDownlinkFrequencyKhz() const
	{
		return callMethod<jint>(
			"getDownlinkFrequencyKhz",
			"()I"
		);
	}
	inline jint PhysicalChannelConfig::getNetworkType() const
	{
		return callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	inline jint PhysicalChannelConfig::getPhysicalCellId() const
	{
		return callMethod<jint>(
			"getPhysicalCellId",
			"()I"
		);
	}
	inline jint PhysicalChannelConfig::getUplinkChannelNumber() const
	{
		return callMethod<jint>(
			"getUplinkChannelNumber",
			"()I"
		);
	}
	inline jint PhysicalChannelConfig::getUplinkFrequencyKhz() const
	{
		return callMethod<jint>(
			"getUplinkFrequencyKhz",
			"()I"
		);
	}
	inline jint PhysicalChannelConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString PhysicalChannelConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PhysicalChannelConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

