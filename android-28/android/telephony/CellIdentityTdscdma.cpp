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
	
	// QJniObject forward
	CellIdentityTdscdma::CellIdentityTdscdma(QJniObject obj) : android::telephony::CellIdentity(obj) {}
	
	// Constructors
	
	// Methods
	jboolean CellIdentityTdscdma::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint CellIdentityTdscdma::getCid()
	{
		return callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	jint CellIdentityTdscdma::getCpid()
	{
		return callMethod<jint>(
			"getCpid",
			"()I"
		);
	}
	jint CellIdentityTdscdma::getLac()
	{
		return callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	JString CellIdentityTdscdma::getMccString()
	{
		return callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		);
	}
	JString CellIdentityTdscdma::getMncString()
	{
		return callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		);
	}
	jint CellIdentityTdscdma::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CellIdentityTdscdma::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CellIdentityTdscdma::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

