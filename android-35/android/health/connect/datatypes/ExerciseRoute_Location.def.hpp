#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes::units
{
	class Length;
}
namespace android::os
{
	class Parcel;
}
class JObject;
namespace java::time
{
	class Instant;
}

namespace android::health::connect::datatypes
{
	class ExerciseRoute_Location : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ExerciseRoute_Location(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExerciseRoute_Location(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::health::connect::datatypes::units::Length getAltitude() const;
		android::health::connect::datatypes::units::Length getHorizontalAccuracy() const;
		jdouble getLatitude() const;
		jdouble getLongitude() const;
		java::time::Instant getTime() const;
		android::health::connect::datatypes::units::Length getVerticalAccuracy() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::health::connect::datatypes

