#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::location
{
	class GnssClock;
}
namespace android::os
{
	class Parcel;
}

namespace android::location
{
	class GnssMeasurementsEvent : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		GnssMeasurementsEvent(QAndroidJniObject obj);
		// Constructors
		GnssMeasurementsEvent() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getClock();
		QAndroidJniObject getMeasurements();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::location

