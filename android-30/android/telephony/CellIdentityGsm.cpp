#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellIdentityGsm.hpp"

namespace android::telephony
{
	// Fields
	JObject CellIdentityGsm::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellIdentityGsm",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jboolean CellIdentityGsm::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject CellIdentityGsm::getAdditionalPlmns() const
	{
		return callObjectMethod(
			"getAdditionalPlmns",
			"()Ljava/util/Set;"
		);
	}
	jint CellIdentityGsm::getArfcn() const
	{
		return callMethod<jint>(
			"getArfcn",
			"()I"
		);
	}
	jint CellIdentityGsm::getBsic() const
	{
		return callMethod<jint>(
			"getBsic",
			"()I"
		);
	}
	jint CellIdentityGsm::getCid() const
	{
		return callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	jint CellIdentityGsm::getLac() const
	{
		return callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	jint CellIdentityGsm::getMcc() const
	{
		return callMethod<jint>(
			"getMcc",
			"()I"
		);
	}
	JString CellIdentityGsm::getMccString() const
	{
		return callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		);
	}
	jint CellIdentityGsm::getMnc() const
	{
		return callMethod<jint>(
			"getMnc",
			"()I"
		);
	}
	JString CellIdentityGsm::getMncString() const
	{
		return callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		);
	}
	JString CellIdentityGsm::getMobileNetworkOperator() const
	{
		return callObjectMethod(
			"getMobileNetworkOperator",
			"()Ljava/lang/String;"
		);
	}
	jint CellIdentityGsm::getPsc() const
	{
		return callMethod<jint>(
			"getPsc",
			"()I"
		);
	}
	jint CellIdentityGsm::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CellIdentityGsm::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CellIdentityGsm::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

