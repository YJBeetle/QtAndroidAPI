#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::location
{
	class Address;
}
namespace android::location
{
	class Location;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
namespace android::util
{
	class SparseArray;
}

namespace android::net::wifi::rtt
{
	class ResponderLocation : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALTITUDE_FLOORS();
		static jint ALTITUDE_METERS();
		static jint ALTITUDE_UNDEFINED();
		static __JniBaseClass CREATOR();
		static jint DATUM_NAD83_MLLW();
		static jint DATUM_NAD83_NAV88();
		static jint DATUM_UNDEFINED();
		static jint DATUM_WGS84();
		static jint LCI_VERSION_1();
		static jint LOCATION_FIXED();
		static jint LOCATION_MOVEMENT_UNKNOWN();
		static jint LOCATION_RESERVED();
		static jint LOCATION_VARIABLE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ResponderLocation(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ResponderLocation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jdouble getAltitude();
		jint getAltitudeType();
		jdouble getAltitudeUncertainty();
		__JniBaseClass getColocatedBssids();
		jint getDatum();
		jint getExpectedToMove();
		jdouble getFloorNumber();
		jdouble getHeightAboveFloorMeters();
		jdouble getHeightAboveFloorUncertaintyMeters();
		jdouble getLatitude();
		jdouble getLatitudeUncertainty();
		jint getLciVersion();
		jdouble getLongitude();
		jdouble getLongitudeUncertainty();
		jstring getMapImageMimeType();
		android::net::Uri getMapImageUri();
		jboolean getRegisteredLocationAgreementIndication();
		jint hashCode();
		jboolean isLciSubelementValid();
		jboolean isZaxisSubelementValid();
		android::location::Address toCivicLocationAddress();
		android::util::SparseArray toCivicLocationSparseArray();
		android::location::Location toLocation();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::rtt

