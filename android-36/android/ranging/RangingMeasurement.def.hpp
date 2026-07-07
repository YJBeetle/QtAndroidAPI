#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::ranging
{
	class RangingMeasurement : public JObject
	{
	public:
		// Fields
		static jint CONFIDENCE_HIGH();
		static jint CONFIDENCE_LOW();
		static jint CONFIDENCE_MEDIUM();
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit RangingMeasurement(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RangingMeasurement(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getConfidence() const;
		jdouble getMeasurement() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::ranging

