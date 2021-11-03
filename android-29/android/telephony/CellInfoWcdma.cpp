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
	
	// QAndroidJniObject forward
	CellInfoWcdma::CellInfoWcdma(QAndroidJniObject obj) : android::telephony::CellInfo(obj) {}
	
	// Constructors
	
	// Methods
	jint CellInfoWcdma::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellInfoWcdma::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::telephony::CellIdentityWcdma CellInfoWcdma::getCellIdentity() const
	{
		return callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentityWcdma;"
		);
	}
	android::telephony::CellSignalStrengthWcdma CellInfoWcdma::getCellSignalStrength() const
	{
		return callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrengthWcdma;"
		);
	}
	jint CellInfoWcdma::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CellInfoWcdma::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CellInfoWcdma::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

