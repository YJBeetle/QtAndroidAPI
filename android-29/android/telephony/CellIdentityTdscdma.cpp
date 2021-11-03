#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellIdentityTdscdma.hpp"

namespace android::telephony
{
	// Fields
	JObject CellIdentityTdscdma::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellIdentityTdscdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	CellIdentityTdscdma::CellIdentityTdscdma(QAndroidJniObject obj) : android::telephony::CellIdentity(obj) {}
	
	// Constructors
	
	// Methods
	jint CellIdentityTdscdma::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellIdentityTdscdma::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint CellIdentityTdscdma::getCid() const
	{
		return callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	jint CellIdentityTdscdma::getCpid() const
	{
		return callMethod<jint>(
			"getCpid",
			"()I"
		);
	}
	jint CellIdentityTdscdma::getLac() const
	{
		return callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	JString CellIdentityTdscdma::getMccString() const
	{
		return callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		);
	}
	JString CellIdentityTdscdma::getMncString() const
	{
		return callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		);
	}
	JString CellIdentityTdscdma::getMobileNetworkOperator() const
	{
		return callObjectMethod(
			"getMobileNetworkOperator",
			"()Ljava/lang/String;"
		);
	}
	jint CellIdentityTdscdma::getUarfcn() const
	{
		return callMethod<jint>(
			"getUarfcn",
			"()I"
		);
	}
	jint CellIdentityTdscdma::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CellIdentityTdscdma::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CellIdentityTdscdma::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

