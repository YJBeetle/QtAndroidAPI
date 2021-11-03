#include "../os/Parcel.hpp"
#include "./CellIdentityWcdma.hpp"

namespace android::telephony
{
	// Fields
	JObject CellIdentityWcdma::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellIdentityWcdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	CellIdentityWcdma::CellIdentityWcdma(QJniObject obj) : android::telephony::CellIdentity(obj) {}
	
	// Constructors
	
	// Methods
	jboolean CellIdentityWcdma::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CellIdentityWcdma::getCid()
	{
		return callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	jint CellIdentityWcdma::getLac()
	{
		return callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	jint CellIdentityWcdma::getMcc()
	{
		return callMethod<jint>(
			"getMcc",
			"()I"
		);
	}
	jstring CellIdentityWcdma::getMccString()
	{
		return callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CellIdentityWcdma::getMnc()
	{
		return callMethod<jint>(
			"getMnc",
			"()I"
		);
	}
	jstring CellIdentityWcdma::getMncString()
	{
		return callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CellIdentityWcdma::getMobileNetworkOperator()
	{
		return callObjectMethod(
			"getMobileNetworkOperator",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CellIdentityWcdma::getPsc()
	{
		return callMethod<jint>(
			"getPsc",
			"()I"
		);
	}
	jint CellIdentityWcdma::getUarfcn()
	{
		return callMethod<jint>(
			"getUarfcn",
			"()I"
		);
	}
	jint CellIdentityWcdma::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellIdentityWcdma::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellIdentityWcdma::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

