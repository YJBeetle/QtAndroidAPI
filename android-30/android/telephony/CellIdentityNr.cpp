#include "../../JIntArray.hpp"
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
	
	// Constructors
	
	// Methods
	jboolean CellIdentityNr::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject CellIdentityNr::getAdditionalPlmns() const
	{
		return callObjectMethod(
			"getAdditionalPlmns",
			"()Ljava/util/Set;"
		);
	}
	JIntArray CellIdentityNr::getBands() const
	{
		return callObjectMethod(
			"getBands",
			"()[I"
		);
	}
	JString CellIdentityNr::getMccString() const
	{
		return callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		);
	}
	JString CellIdentityNr::getMncString() const
	{
		return callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		);
	}
	jlong CellIdentityNr::getNci() const
	{
		return callMethod<jlong>(
			"getNci",
			"()J"
		);
	}
	jint CellIdentityNr::getNrarfcn() const
	{
		return callMethod<jint>(
			"getNrarfcn",
			"()I"
		);
	}
	jint CellIdentityNr::getPci() const
	{
		return callMethod<jint>(
			"getPci",
			"()I"
		);
	}
	jint CellIdentityNr::getTac() const
	{
		return callMethod<jint>(
			"getTac",
			"()I"
		);
	}
	jint CellIdentityNr::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CellIdentityNr::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CellIdentityNr::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

