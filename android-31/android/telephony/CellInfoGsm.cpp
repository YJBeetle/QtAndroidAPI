#include "../os/Parcel.hpp"
#include "./CellIdentity.hpp"
#include "./CellIdentityGsm.hpp"
#include "./CellSignalStrength.hpp"
#include "./CellSignalStrengthGsm.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellInfoGsm.hpp"

namespace android::telephony
{
	// Fields
	JObject CellInfoGsm::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellInfoGsm",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	CellInfoGsm::CellInfoGsm(QJniObject obj) : android::telephony::CellInfo(obj) {}
	
	// Constructors
	
	// Methods
	jint CellInfoGsm::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellInfoGsm::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::telephony::CellIdentityGsm CellInfoGsm::getCellIdentity()
	{
		return callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentityGsm;"
		);
	}
	android::telephony::CellSignalStrengthGsm CellInfoGsm::getCellSignalStrength()
	{
		return callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrengthGsm;"
		);
	}
	jint CellInfoGsm::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CellInfoGsm::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CellInfoGsm::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

