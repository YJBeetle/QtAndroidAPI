#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::telephony
{
	class NeighboringCellInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint UNKNOWN_CID();
		static jint UNKNOWN_RSSI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NeighboringCellInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NeighboringCellInfo(QAndroidJniObject obj);
		
		// Constructors
		NeighboringCellInfo();
		NeighboringCellInfo(android::os::Parcel arg0);
		NeighboringCellInfo(jint arg0, jint arg1);
		NeighboringCellInfo(jint arg0, JString arg1, jint arg2);
		
		// Methods
		jint describeContents() const;
		jint getCid() const;
		jint getLac() const;
		jint getNetworkType() const;
		jint getPsc() const;
		jint getRssi() const;
		void setCid(jint arg0) const;
		void setRssi(jint arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

