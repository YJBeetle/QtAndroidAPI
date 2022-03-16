#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellIdentityCdma.hpp"

namespace android::telephony
{
	// Fields
	JObject CellIdentityCdma::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellIdentityCdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jboolean CellIdentityCdma::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint CellIdentityCdma::getBasestationId() const
	{
		return callMethod<jint>(
			"getBasestationId",
			"()I"
		);
	}
	jint CellIdentityCdma::getLatitude() const
	{
		return callMethod<jint>(
			"getLatitude",
			"()I"
		);
	}
	jint CellIdentityCdma::getLongitude() const
	{
		return callMethod<jint>(
			"getLongitude",
			"()I"
		);
	}
	jint CellIdentityCdma::getNetworkId() const
	{
		return callMethod<jint>(
			"getNetworkId",
			"()I"
		);
	}
	jint CellIdentityCdma::getSystemId() const
	{
		return callMethod<jint>(
			"getSystemId",
			"()I"
		);
	}
	jint CellIdentityCdma::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CellIdentityCdma::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CellIdentityCdma::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

