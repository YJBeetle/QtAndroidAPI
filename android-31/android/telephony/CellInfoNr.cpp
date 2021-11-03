#include "../os/Parcel.hpp"
#include "./CellIdentity.hpp"
#include "./CellSignalStrength.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellInfoNr.hpp"

namespace android::telephony
{
	// Fields
	JObject CellInfoNr::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellInfoNr",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	CellInfoNr::CellInfoNr(QJniObject obj) : android::telephony::CellInfo(obj) {}
	
	// Constructors
	
	// Methods
	jboolean CellInfoNr::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::telephony::CellIdentity CellInfoNr::getCellIdentity()
	{
		return callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentity;"
		);
	}
	android::telephony::CellSignalStrength CellInfoNr::getCellSignalStrength()
	{
		return callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrength;"
		);
	}
	jint CellInfoNr::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CellInfoNr::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CellInfoNr::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

