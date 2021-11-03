#include "../os/Parcel.hpp"
#include "./ClosedSubscriberGroupInfo.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellIdentityWcdma.hpp"

namespace android::telephony
{
	// Fields
	JObject CellIdentityWcdma::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellIdentityWcdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	CellIdentityWcdma::CellIdentityWcdma(QAndroidJniObject obj) : android::telephony::CellIdentity(obj) {}
	
	// Constructors
	
	// Methods
	jboolean CellIdentityWcdma::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject CellIdentityWcdma::getAdditionalPlmns()
	{
		return callObjectMethod(
			"getAdditionalPlmns",
			"()Ljava/util/Set;"
		);
	}
	jint CellIdentityWcdma::getCid()
	{
		return callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	android::telephony::ClosedSubscriberGroupInfo CellIdentityWcdma::getClosedSubscriberGroupInfo()
	{
		return callObjectMethod(
			"getClosedSubscriberGroupInfo",
			"()Landroid/telephony/ClosedSubscriberGroupInfo;"
		);
	}
	jint CellIdentityWcdma::getLac()
	{
		return callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	jint CellIdentityWcdma::getMcc()
	{
		return callMethod<jint>(
			"getMcc",
			"()I"
		);
	}
	JString CellIdentityWcdma::getMccString()
	{
		return callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		);
	}
	jint CellIdentityWcdma::getMnc()
	{
		return callMethod<jint>(
			"getMnc",
			"()I"
		);
	}
	JString CellIdentityWcdma::getMncString()
	{
		return callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		);
	}
	JString CellIdentityWcdma::getMobileNetworkOperator()
	{
		return callObjectMethod(
			"getMobileNetworkOperator",
			"()Ljava/lang/String;"
		);
	}
	jint CellIdentityWcdma::getPsc()
	{
		return callMethod<jint>(
			"getPsc",
			"()I"
		);
	}
	jint CellIdentityWcdma::getUarfcn()
	{
		return callMethod<jint>(
			"getUarfcn",
			"()I"
		);
	}
	jint CellIdentityWcdma::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CellIdentityWcdma::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CellIdentityWcdma::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

