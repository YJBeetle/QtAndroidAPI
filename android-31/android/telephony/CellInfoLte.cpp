#include "../os/Parcel.hpp"
#include "./CellIdentity.hpp"
#include "./CellIdentityLte.hpp"
#include "./CellSignalStrength.hpp"
#include "./CellSignalStrengthLte.hpp"
#include "./CellInfoLte.hpp"

namespace android::telephony
{
	// Fields
	JObject CellInfoLte::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellInfoLte",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	CellInfoLte::CellInfoLte(QAndroidJniObject obj) : android::telephony::CellInfo(obj) {}
	
	// Constructors
	
	// Methods
	jint CellInfoLte::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellInfoLte::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::telephony::CellIdentityLte CellInfoLte::getCellIdentity()
	{
		return callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentityLte;"
		);
	}
	android::telephony::CellSignalStrengthLte CellInfoLte::getCellSignalStrength()
	{
		return callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrengthLte;"
		);
	}
	jint CellInfoLte::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellInfoLte::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellInfoLte::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

