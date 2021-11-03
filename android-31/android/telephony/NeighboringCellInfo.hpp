#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class NeighboringCellInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint UNKNOWN_CID();
		static jint UNKNOWN_RSSI();
		
		// QJniObject forward
		template<typename ...Ts> explicit NeighboringCellInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NeighboringCellInfo(QJniObject obj);
		
		// Constructors
		NeighboringCellInfo();
		NeighboringCellInfo(android::os::Parcel arg0);
		NeighboringCellInfo(jint arg0, jint arg1);
		NeighboringCellInfo(jint arg0, jstring arg1, jint arg2);
		
		// Methods
		jint describeContents();
		jint getCid();
		jint getLac();
		jint getNetworkType();
		jint getPsc();
		jint getRssi();
		void setCid(jint arg0);
		void setRssi(jint arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

