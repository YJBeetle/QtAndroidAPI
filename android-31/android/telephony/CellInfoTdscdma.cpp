#include "../os/Parcel.hpp"
#include "./CellIdentity.hpp"
#include "./CellIdentityTdscdma.hpp"
#include "./CellSignalStrength.hpp"
#include "./CellSignalStrengthTdscdma.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellInfoTdscdma.hpp"

namespace android::telephony
{
	// Fields
	JObject CellInfoTdscdma::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellInfoTdscdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint CellInfoTdscdma::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellInfoTdscdma::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::telephony::CellIdentityTdscdma CellInfoTdscdma::getCellIdentity() const
	{
		return callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentityTdscdma;"
		);
	}
	android::telephony::CellSignalStrengthTdscdma CellInfoTdscdma::getCellSignalStrength() const
	{
		return callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrengthTdscdma;"
		);
	}
	jint CellInfoTdscdma::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CellInfoTdscdma::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CellInfoTdscdma::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

