#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::ranging
{
	class RangingMeasurement;
}

namespace android::ranging
{
	class RangingData : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit RangingData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RangingData(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::ranging::RangingMeasurement getAzimuth() const;
		android::ranging::RangingMeasurement getDistance() const;
		android::ranging::RangingMeasurement getElevation() const;
		jint getRangingTechnology() const;
		jint getRssi() const;
		jlong getTimestampMillis() const;
		jboolean hasRssi() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::ranging

