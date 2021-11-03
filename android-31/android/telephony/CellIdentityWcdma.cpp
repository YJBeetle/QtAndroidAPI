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
	jboolean CellIdentityWcdma::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject CellIdentityWcdma::getAdditionalPlmns() const
	{
		return callObjectMethod(
			"getAdditionalPlmns",
			"()Ljava/util/Set;"
		);
	}
	jint CellIdentityWcdma::getCid() const
	{
		return callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	android::telephony::ClosedSubscriberGroupInfo CellIdentityWcdma::getClosedSubscriberGroupInfo() const
	{
		return callObjectMethod(
			"getClosedSubscriberGroupInfo",
			"()Landroid/telephony/ClosedSubscriberGroupInfo;"
		);
	}
	jint CellIdentityWcdma::getLac() const
	{
		return callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	jint CellIdentityWcdma::getMcc() const
	{
		return callMethod<jint>(
			"getMcc",
			"()I"
		);
	}
	JString CellIdentityWcdma::getMccString() const
	{
		return callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		);
	}
	jint CellIdentityWcdma::getMnc() const
	{
		return callMethod<jint>(
			"getMnc",
			"()I"
		);
	}
	JString CellIdentityWcdma::getMncString() const
	{
		return callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		);
	}
	JString CellIdentityWcdma::getMobileNetworkOperator() const
	{
		return callObjectMethod(
			"getMobileNetworkOperator",
			"()Ljava/lang/String;"
		);
	}
	jint CellIdentityWcdma::getPsc() const
	{
		return callMethod<jint>(
			"getPsc",
			"()I"
		);
	}
	jint CellIdentityWcdma::getUarfcn() const
	{
		return callMethod<jint>(
			"getUarfcn",
			"()I"
		);
	}
	jint CellIdentityWcdma::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CellIdentityWcdma::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CellIdentityWcdma::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

