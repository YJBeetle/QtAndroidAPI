#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellIdentityNr.hpp"

namespace android::telephony
{
	// Fields
	JObject CellIdentityNr::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellIdentityNr",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	CellIdentityNr::CellIdentityNr(QJniObject obj) : android::telephony::CellIdentity(obj) {}
	
	// Constructors
	
	// Methods
	jboolean CellIdentityNr::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString CellIdentityNr::getMccString()
	{
		return callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		);
	}
	JString CellIdentityNr::getMncString()
	{
		return callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		);
	}
	jlong CellIdentityNr::getNci()
	{
		return callMethod<jlong>(
			"getNci",
			"()J"
		);
	}
	jint CellIdentityNr::getNrarfcn()
	{
		return callMethod<jint>(
			"getNrarfcn",
			"()I"
		);
	}
	jint CellIdentityNr::getPci()
	{
		return callMethod<jint>(
			"getPci",
			"()I"
		);
	}
	jint CellIdentityNr::getTac()
	{
		return callMethod<jint>(
			"getTac",
			"()I"
		);
	}
	jint CellIdentityNr::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CellIdentityNr::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CellIdentityNr::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

