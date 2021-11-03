#include "../os/Parcel.hpp"
#include "./ClosedSubscriberGroupInfo.hpp"
#include "./CellIdentityLte.hpp"

namespace android::telephony
{
	// Fields
	JObject CellIdentityLte::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellIdentityLte",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	CellIdentityLte::CellIdentityLte(QAndroidJniObject obj) : android::telephony::CellIdentity(obj) {}
	
	// Constructors
	
	// Methods
	jboolean CellIdentityLte::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	JObject CellIdentityLte::getAdditionalPlmns()
	{
		return callObjectMethod(
			"getAdditionalPlmns",
			"()Ljava/util/Set;"
		);
	}
	jintArray CellIdentityLte::getBands()
	{
		return callObjectMethod(
			"getBands",
			"()[I"
		).object<jintArray>();
	}
	jint CellIdentityLte::getBandwidth()
	{
		return callMethod<jint>(
			"getBandwidth",
			"()I"
		);
	}
	jint CellIdentityLte::getCi()
	{
		return callMethod<jint>(
			"getCi",
			"()I"
		);
	}
	android::telephony::ClosedSubscriberGroupInfo CellIdentityLte::getClosedSubscriberGroupInfo()
	{
		return callObjectMethod(
			"getClosedSubscriberGroupInfo",
			"()Landroid/telephony/ClosedSubscriberGroupInfo;"
		);
	}
	jint CellIdentityLte::getEarfcn()
	{
		return callMethod<jint>(
			"getEarfcn",
			"()I"
		);
	}
	jint CellIdentityLte::getMcc()
	{
		return callMethod<jint>(
			"getMcc",
			"()I"
		);
	}
	jstring CellIdentityLte::getMccString()
	{
		return callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CellIdentityLte::getMnc()
	{
		return callMethod<jint>(
			"getMnc",
			"()I"
		);
	}
	jstring CellIdentityLte::getMncString()
	{
		return callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CellIdentityLte::getMobileNetworkOperator()
	{
		return callObjectMethod(
			"getMobileNetworkOperator",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CellIdentityLte::getPci()
	{
		return callMethod<jint>(
			"getPci",
			"()I"
		);
	}
	jint CellIdentityLte::getTac()
	{
		return callMethod<jint>(
			"getTac",
			"()I"
		);
	}
	jint CellIdentityLte::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellIdentityLte::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellIdentityLte::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

