#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

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
		PhysicalChannelConfig(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getBand();
		jint getCellBandwidthDownlinkKhz();
		jint getCellBandwidthUplinkKhz();
		jint getConnectionStatus();
		jint getDownlinkChannelNumber();
		jint getDownlinkFrequencyKhz();
		jint getNetworkType();
		jint getPhysicalCellId();
		jint getUplinkChannelNumber();
		jint getUplinkFrequencyKhz();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

