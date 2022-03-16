#include "../../../location/Address.hpp"
#include "../../../location/Location.hpp"
#include "../../Uri.hpp"
#include "../../../os/Parcel.hpp"
#include "../../../util/SparseArray.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./ResponderLocation.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	jint ResponderLocation::ALTITUDE_FLOORS()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"ALTITUDE_FLOORS"
		);
	}
	jint ResponderLocation::ALTITUDE_METERS()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"ALTITUDE_METERS"
		);
	}
	jint ResponderLocation::ALTITUDE_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"ALTITUDE_UNDEFINED"
		);
	}
	JObject ResponderLocation::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.rtt.ResponderLocation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ResponderLocation::DATUM_NAD83_MLLW()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"DATUM_NAD83_MLLW"
		);
	}
	jint ResponderLocation::DATUM_NAD83_NAV88()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"DATUM_NAD83_NAV88"
		);
	}
	jint ResponderLocation::DATUM_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"DATUM_UNDEFINED"
		);
	}
	jint ResponderLocation::DATUM_WGS84()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"DATUM_WGS84"
		);
	}
	jint ResponderLocation::LCI_VERSION_1()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"LCI_VERSION_1"
		);
	}
	jint ResponderLocation::LOCATION_FIXED()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"LOCATION_FIXED"
		);
	}
	jint ResponderLocation::LOCATION_MOVEMENT_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"LOCATION_MOVEMENT_UNKNOWN"
		);
	}
	jint ResponderLocation::LOCATION_RESERVED()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"LOCATION_RESERVED"
		);
	}
	jint ResponderLocation::LOCATION_VARIABLE()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"LOCATION_VARIABLE"
		);
	}
	
	// Constructors
	
	// Methods
	jint ResponderLocation::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ResponderLocation::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jdouble ResponderLocation::getAltitude() const
	{
		return callMethod<jdouble>(
			"getAltitude",
			"()D"
		);
	}
	jint ResponderLocation::getAltitudeType() const
	{
		return callMethod<jint>(
			"getAltitudeType",
			"()I"
		);
	}
	jdouble ResponderLocation::getAltitudeUncertainty() const
	{
		return callMethod<jdouble>(
			"getAltitudeUncertainty",
			"()D"
		);
	}
	JObject ResponderLocation::getColocatedBssids() const
	{
		return callObjectMethod(
			"getColocatedBssids",
			"()Ljava/util/List;"
		);
	}
	jint ResponderLocation::getDatum() const
	{
		return callMethod<jint>(
			"getDatum",
			"()I"
		);
	}
	jint ResponderLocation::getExpectedToMove() const
	{
		return callMethod<jint>(
			"getExpectedToMove",
			"()I"
		);
	}
	jdouble ResponderLocation::getFloorNumber() const
	{
		return callMethod<jdouble>(
			"getFloorNumber",
			"()D"
		);
	}
	jdouble ResponderLocation::getHeightAboveFloorMeters() const
	{
		return callMethod<jdouble>(
			"getHeightAboveFloorMeters",
			"()D"
		);
	}
	jdouble ResponderLocation::getHeightAboveFloorUncertaintyMeters() const
	{
		return callMethod<jdouble>(
			"getHeightAboveFloorUncertaintyMeters",
			"()D"
		);
	}
	jdouble ResponderLocation::getLatitude() const
	{
		return callMethod<jdouble>(
			"getLatitude",
			"()D"
		);
	}
	jdouble ResponderLocation::getLatitudeUncertainty() const
	{
		return callMethod<jdouble>(
			"getLatitudeUncertainty",
			"()D"
		);
	}
	jint ResponderLocation::getLciVersion() const
	{
		return callMethod<jint>(
			"getLciVersion",
			"()I"
		);
	}
	jdouble ResponderLocation::getLongitude() const
	{
		return callMethod<jdouble>(
			"getLongitude",
			"()D"
		);
	}
	jdouble ResponderLocation::getLongitudeUncertainty() const
	{
		return callMethod<jdouble>(
			"getLongitudeUncertainty",
			"()D"
		);
	}
	JString ResponderLocation::getMapImageMimeType() const
	{
		return callObjectMethod(
			"getMapImageMimeType",
			"()Ljava/lang/String;"
		);
	}
	android::net::Uri ResponderLocation::getMapImageUri() const
	{
		return callObjectMethod(
			"getMapImageUri",
			"()Landroid/net/Uri;"
		);
	}
	jboolean ResponderLocation::getRegisteredLocationAgreementIndication() const
	{
		return callMethod<jboolean>(
			"getRegisteredLocationAgreementIndication",
			"()Z"
		);
	}
	jint ResponderLocation::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ResponderLocation::isLciSubelementValid() const
	{
		return callMethod<jboolean>(
			"isLciSubelementValid",
			"()Z"
		);
	}
	jboolean ResponderLocation::isZaxisSubelementValid() const
	{
		return callMethod<jboolean>(
			"isZaxisSubelementValid",
			"()Z"
		);
	}
	android::location::Address ResponderLocation::toCivicLocationAddress() const
	{
		return callObjectMethod(
			"toCivicLocationAddress",
			"()Landroid/location/Address;"
		);
	}
	android::util::SparseArray ResponderLocation::toCivicLocationSparseArray() const
	{
		return callObjectMethod(
			"toCivicLocationSparseArray",
			"()Landroid/util/SparseArray;"
		);
	}
	android::location::Location ResponderLocation::toLocation() const
	{
		return callObjectMethod(
			"toLocation",
			"()Landroid/location/Location;"
		);
	}
	void ResponderLocation::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::rtt

