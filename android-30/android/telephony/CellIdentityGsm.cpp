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
	
	// QAndroidJniObject forward
	CellIdentityGsm::CellIdentityGsm(QAndroidJniObject obj) : android::telephony::CellIdentity(obj) {}
	
	// Constructors
	
	// Methods
	jboolean CellIdentityGsm::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject CellIdentityGsm::getAdditionalPlmns()
	{
		return callObjectMethod(
			"getAdditionalPlmns",
			"()Ljava/util/Set;"
		);
	}
	jint CellIdentityGsm::getArfcn()
	{
		return callMethod<jint>(
			"getArfcn",
			"()I"
		);
	}
	jint CellIdentityGsm::getBsic()
	{
		return callMethod<jint>(
			"getBsic",
			"()I"
		);
	}
	jint CellIdentityGsm::getCid()
	{
		return callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	jint CellIdentityGsm::getLac()
	{
		return callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	jint CellIdentityGsm::getMcc()
	{
		return callMethod<jint>(
			"getMcc",
			"()I"
		);
	}
	JString CellIdentityGsm::getMccString()
	{
		return callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		);
	}
	jint CellIdentityGsm::getMnc()
	{
		return callMethod<jint>(
			"getMnc",
			"()I"
		);
	}
	JString CellIdentityGsm::getMncString()
	{
		return callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		);
	}
	JString CellIdentityGsm::getMobileNetworkOperator()
	{
		return callObjectMethod(
			"getMobileNetworkOperator",
			"()Ljava/lang/String;"
		);
	}
	jint CellIdentityGsm::getPsc()
	{
		return callMethod<jint>(
			"getPsc",
			"()I"
		);
	}
	jint CellIdentityGsm::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CellIdentityGsm::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CellIdentityGsm::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

