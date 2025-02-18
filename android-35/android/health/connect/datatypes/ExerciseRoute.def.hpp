#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;

namespace android::health::connect::datatypes
{
	class ExerciseRoute : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ExerciseRoute(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExerciseRoute(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ExerciseRoute(JObject arg0);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject getRouteLocations() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::health::connect::datatypes

