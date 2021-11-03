#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::location
{
	class GnssClock;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::location
{
	class GnssMeasurementsEvent : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit GnssMeasurementsEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssMeasurementsEvent(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::location::GnssClock getClock();
		JObject getMeasurements();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::location

