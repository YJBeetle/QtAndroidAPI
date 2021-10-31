#include "../os/Parcel.hpp"
#include "./CellIdentityTdscdma.hpp"

namespace android::telephony
{
	// Fields
	QAndroidJniObject CellIdentityTdscdma::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellIdentityTdscdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	CellIdentityTdscdma::CellIdentityTdscdma(QAndroidJniObject obj) : android::telephony::CellIdentity(obj) {}
	
	// Constructors
	
	// Methods
	jint CellIdentityTdscdma::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellIdentityTdscdma::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CellIdentityTdscdma::getCid()
	{
		return callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	jint CellIdentityTdscdma::getCpid()
	{
		return callMethod<jint>(
			"getCpid",
			"()I"
		);
	}
	jint CellIdentityTdscdma::getLac()
	{
		return callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	jstring CellIdentityTdscdma::getMccString()
	{
		return callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CellIdentityTdscdma::getMncString()
	{
		return callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CellIdentityTdscdma::getMobileNetworkOperator()
	{
		return callObjectMethod(
			"getMobileNetworkOperator",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CellIdentityTdscdma::getUarfcn()
	{
		return callMethod<jint>(
			"getUarfcn",
			"()I"
		);
	}
	jint CellIdentityTdscdma::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellIdentityTdscdma::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellIdentityTdscdma::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony
