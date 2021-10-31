#include "../os/Parcel.hpp"
#include "./CellIdentityGsm.hpp"

namespace android::telephony
{
	// Fields
	QAndroidJniObject CellIdentityGsm::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellIdentityGsm",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	CellIdentityGsm::CellIdentityGsm(QAndroidJniObject obj) : android::telephony::CellIdentity(obj) {}
	
	// Constructors
	
	// Methods
	jboolean CellIdentityGsm::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CellIdentityGsm::getArfcn()
	{
		return callMethod<jint>(
			"getArfcn",
			"()I"
		);
	}
	jint CellIdentityGsm::getBsic()
	{
		return callMethod<jint>(
			"getBsic",
			"()I"
		);
	}
	jint CellIdentityGsm::getCid()
	{
		return callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	jint CellIdentityGsm::getLac()
	{
		return callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	jint CellIdentityGsm::getMcc()
	{
		return callMethod<jint>(
			"getMcc",
			"()I"
		);
	}
	jstring CellIdentityGsm::getMccString()
	{
		return callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CellIdentityGsm::getMnc()
	{
		return callMethod<jint>(
			"getMnc",
			"()I"
		);
	}
	jstring CellIdentityGsm::getMncString()
	{
		return callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CellIdentityGsm::getMobileNetworkOperator()
	{
		return callObjectMethod(
			"getMobileNetworkOperator",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CellIdentityGsm::getPsc()
	{
		return callMethod<jint>(
			"getPsc",
			"()I"
		);
	}
	jint CellIdentityGsm::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellIdentityGsm::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellIdentityGsm::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

