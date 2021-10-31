#include "../../../location/Address.hpp"
#include "../../../location/Location.hpp"
#include "../../Uri.hpp"
#include "../../../os/Parcel.hpp"
#include "../../../util/SparseArray.hpp"
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
	__JniBaseClass ResponderLocation::CREATOR()
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
	
	// QJniObject forward
	ResponderLocation::ResponderLocation(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint ResponderLocation::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ResponderLocation::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jdouble ResponderLocation::getAltitude()
	{
		return callMethod<jdouble>(
			"getAltitude",
			"()D"
		);
	}
	jint ResponderLocation::getAltitudeType()
	{
		return callMethod<jint>(
			"getAltitudeType",
			"()I"
		);
	}
	jdouble ResponderLocation::getAltitudeUncertainty()
	{
		return callMethod<jdouble>(
			"getAltitudeUncertainty",
			"()D"
		);
	}
	__JniBaseClass ResponderLocation::getColocatedBssids()
	{
		return callObjectMethod(
			"getColocatedBssids",
			"()Ljava/util/List;"
		);
	}
	jint ResponderLocation::getDatum()
	{
		return callMethod<jint>(
			"getDatum",
			"()I"
		);
	}
	jint ResponderLocation::getExpectedToMove()
	{
		return callMethod<jint>(
			"getExpectedToMove",
			"()I"
		);
	}
	jdouble ResponderLocation::getFloorNumber()
	{
		return callMethod<jdouble>(
			"getFloorNumber",
			"()D"
		);
	}
	jdouble ResponderLocation::getHeightAboveFloorMeters()
	{
		return callMethod<jdouble>(
			"getHeightAboveFloorMeters",
			"()D"
		);
	}
	jdouble ResponderLocation::getHeightAboveFloorUncertaintyMeters()
	{
		return callMethod<jdouble>(
			"getHeightAboveFloorUncertaintyMeters",
			"()D"
		);
	}
	jdouble ResponderLocation::getLatitude()
	{
		return callMethod<jdouble>(
			"getLatitude",
			"()D"
		);
	}
	jdouble ResponderLocation::getLatitudeUncertainty()
	{
		return callMethod<jdouble>(
			"getLatitudeUncertainty",
			"()D"
		);
	}
	jint ResponderLocation::getLciVersion()
	{
		return callMethod<jint>(
			"getLciVersion",
			"()I"
		);
	}
	jdouble ResponderLocation::getLongitude()
	{
		return callMethod<jdouble>(
			"getLongitude",
			"()D"
		);
	}
	jdouble ResponderLocation::getLongitudeUncertainty()
	{
		return callMethod<jdouble>(
			"getLongitudeUncertainty",
			"()D"
		);
	}
	jstring ResponderLocation::getMapImageMimeType()
	{
		return callObjectMethod(
			"getMapImageMimeType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri ResponderLocation::getMapImageUri()
	{
		return callObjectMethod(
			"getMapImageUri",
			"()Landroid/net/Uri;"
		);
	}
	jboolean ResponderLocation::getRegisteredLocationAgreementIndication()
	{
		return callMethod<jboolean>(
			"getRegisteredLocationAgreementIndication",
			"()Z"
		);
	}
	jint ResponderLocation::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ResponderLocation::isLciSubelementValid()
	{
		return callMethod<jboolean>(
			"isLciSubelementValid",
			"()Z"
		);
	}
	jboolean ResponderLocation::isZaxisSubelementValid()
	{
		return callMethod<jboolean>(
			"isZaxisSubelementValid",
			"()Z"
		);
	}
	android::location::Address ResponderLocation::toCivicLocationAddress()
	{
		return callObjectMethod(
			"toCivicLocationAddress",
			"()Landroid/location/Address;"
		);
	}
	android::util::SparseArray ResponderLocation::toCivicLocationSparseArray()
	{
		return callObjectMethod(
			"toCivicLocationSparseArray",
			"()Landroid/util/SparseArray;"
		);
	}
	android::location::Location ResponderLocation::toLocation()
	{
		return callObjectMethod(
			"toLocation",
			"()Landroid/location/Location;"
		);
	}
	void ResponderLocation::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::rtt

