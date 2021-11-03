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
	
	// QJniObject forward
	CellIdentityCdma::CellIdentityCdma(QJniObject obj) : android::telephony::CellIdentity(obj) {}
	
	// Constructors
	
	// Methods
	jboolean CellIdentityCdma::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint CellIdentityCdma::getBasestationId()
	{
		return callMethod<jint>(
			"getBasestationId",
			"()I"
		);
	}
	jint CellIdentityCdma::getLatitude()
	{
		return callMethod<jint>(
			"getLatitude",
			"()I"
		);
	}
	jint CellIdentityCdma::getLongitude()
	{
		return callMethod<jint>(
			"getLongitude",
			"()I"
		);
	}
	jint CellIdentityCdma::getNetworkId()
	{
		return callMethod<jint>(
			"getNetworkId",
			"()I"
		);
	}
	jint CellIdentityCdma::getSystemId()
	{
		return callMethod<jint>(
			"getSystemId",
			"()I"
		);
	}
	jint CellIdentityCdma::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CellIdentityCdma::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CellIdentityCdma::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

