#pragma once

#include "../../../../JObject.hpp"

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
class JObject;
class JString;

namespace android::net::wifi::rtt
{
	class ResponderLocation : public JObject
	{
	public:
		// Fields
		static jint ALTITUDE_FLOORS();
		static jint ALTITUDE_METERS();
		static jint ALTITUDE_UNDEFINED();
		static JObject CREATOR();
		static jint DATUM_NAD83_MLLW();
		static jint DATUM_NAD83_NAV88();
		static jint DATUM_UNDEFINED();
		static jint DATUM_WGS84();
		static jint LCI_VERSION_1();
		static jint LOCATION_FIXED();
		static jint LOCATION_MOVEMENT_UNKNOWN();
		static jint LOCATION_RESERVED();
		static jint LOCATION_VARIABLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit ResponderLocation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ResponderLocation(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jdouble getAltitude() const;
		jint getAltitudeType() const;
		jdouble getAltitudeUncertainty() const;
		JObject getColocatedBssids() const;
		jint getDatum() const;
		jint getExpectedToMove() const;
		jdouble getFloorNumber() const;
		jdouble getHeightAboveFloorMeters() const;
		jdouble getHeightAboveFloorUncertaintyMeters() const;
		jdouble getLatitude() const;
		jdouble getLatitudeUncertainty() const;
		jint getLciVersion() const;
		jdouble getLongitude() const;
		jdouble getLongitudeUncertainty() const;
		JString getMapImageMimeType() const;
		android::net::Uri getMapImageUri() const;
		jboolean getRegisteredLocationAgreementIndication() const;
		jint hashCode() const;
		jboolean isLciSubelementValid() const;
		jboolean isZaxisSubelementValid() const;
		android::location::Address toCivicLocationAddress() const;
		android::util::SparseArray toCivicLocationSparseArray() const;
		android::location::Location toLocation() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::rtt

