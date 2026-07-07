#pragma once

#include "./IntervalRecord.def.hpp"

namespace android::health::connect::datatypes
{
	class AggregationType;
}
class JObject;

namespace android::health::connect::datatypes
{
	class ActivityIntensityRecord : public android::health::connect::datatypes::IntervalRecord
	{
	public:
		// Fields
		static jint ACTIVITY_INTENSITY_TYPE_MODERATE();
		static jint ACTIVITY_INTENSITY_TYPE_VIGOROUS();
		static android::health::connect::datatypes::AggregationType DURATION_TOTAL();
		static android::health::connect::datatypes::AggregationType INTENSITY_MINUTES_TOTAL();
		static android::health::connect::datatypes::AggregationType MODERATE_DURATION_TOTAL();
		static android::health::connect::datatypes::AggregationType VIGOROUS_DURATION_TOTAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit ActivityIntensityRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::IntervalRecord(className, sig, std::forward<Ts>(agv)...) {}
		ActivityIntensityRecord(QJniObject obj) : android::health::connect::datatypes::IntervalRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getActivityIntensityType() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

