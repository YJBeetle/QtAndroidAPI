#include "../os/Parcel.hpp"
#include "./CellIdentityWcdma.hpp"
#include "./CellSignalStrengthWcdma.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellInfoWcdma.hpp"

namespace android::telephony
{
	// Fields
	JObject CellInfoWcdma::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellInfoWcdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	CellInfoWcdma::CellInfoWcdma(QJniObject obj) : android::telephony::CellInfo(obj) {}
	
	// Constructors
	
	// Methods
	jint CellInfoWcdma::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellInfoWcdma::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::telephony::CellIdentityWcdma CellInfoWcdma::getCellIdentity()
	{
		return callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentityWcdma;"
		);
	}
	android::telephony::CellSignalStrengthWcdma CellInfoWcdma::getCellSignalStrength()
	{
		return callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrengthWcdma;"
		);
	}
	jint CellInfoWcdma::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CellInfoWcdma::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CellInfoWcdma::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

