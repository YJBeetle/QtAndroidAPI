#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telephony
{
	class PhysicalChannelConfig : public JObject
	{
	public:
		// Fields
		static jint BAND_UNKNOWN();
		static jint CELL_BANDWIDTH_UNKNOWN();
		static jint CHANNEL_NUMBER_UNKNOWN();
		static jint CONNECTION_PRIMARY_SERVING();
		static jint CONNECTION_SECONDARY_SERVING();
		static jint CONNECTION_UNKNOWN();
		static JObject CREATOR();
		static jint FREQUENCY_UNKNOWN();
		static jint PHYSICAL_CELL_ID_MAXIMUM_VALUE();
		static jint PHYSICAL_CELL_ID_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit PhysicalChannelConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PhysicalChannelConfig(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getBand() const;
		jint getCellBandwidthDownlinkKhz() const;
		jint getCellBandwidthUplinkKhz() const;
		jint getConnectionStatus() const;
		jint getDownlinkChannelNumber() const;
		jint getDownlinkFrequencyKhz() const;
		jint getNetworkType() const;
		jint getPhysicalCellId() const;
		jint getUplinkChannelNumber() const;
		jint getUplinkFrequencyKhz() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

