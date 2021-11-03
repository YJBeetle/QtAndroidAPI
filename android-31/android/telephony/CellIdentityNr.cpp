#include "../os/Parcel.hpp"
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
	jboolean CellIdentityNr::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	JObject CellIdentityNr::getAdditionalPlmns()
	{
		return callObjectMethod(
			"getAdditionalPlmns",
			"()Ljava/util/Set;"
		);
	}
	jintArray CellIdentityNr::getBands()
	{
		return callObjectMethod(
			"getBands",
			"()[I"
		).object<jintArray>();
	}
	jstring CellIdentityNr::getMccString()
	{
		return callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CellIdentityNr::getMncString()
	{
		return callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring CellIdentityNr::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

