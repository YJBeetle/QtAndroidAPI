#include "../../os/Parcel.hpp"
#include "./CarrierIdentifier.hpp"

namespace android::service::carrier
{
	// Fields
	JObject CarrierIdentifier::CREATOR()
	{
		return getStaticObjectField(
			"android.service.carrier.CarrierIdentifier",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	CarrierIdentifier::CarrierIdentifier(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CarrierIdentifier::CarrierIdentifier(jbyteArray arg0, jstring arg1, jstring arg2)
		: JObject(
			"android.service.carrier.CarrierIdentifier",
			"([BLjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	CarrierIdentifier::CarrierIdentifier(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5)
		: JObject(
			"android.service.carrier.CarrierIdentifier",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	CarrierIdentifier::CarrierIdentifier(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5, jint arg6, jint arg7)
		: JObject(
			"android.service.carrier.CarrierIdentifier",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		) {}
	
	// Methods
	jint CarrierIdentifier::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CarrierIdentifier::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CarrierIdentifier::getCarrierId()
	{
		return callMethod<jint>(
			"getCarrierId",
			"()I"
		);
	}
	jstring CarrierIdentifier::getGid1()
	{
		return callObjectMethod(
			"getGid1",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierIdentifier::getGid2()
	{
		return callObjectMethod(
			"getGid2",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierIdentifier::getImsi()
	{
		return callObjectMethod(
			"getImsi",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierIdentifier::getMcc()
	{
		return callObjectMethod(
			"getMcc",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierIdentifier::getMnc()
	{
		return callObjectMethod(
			"getMnc",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CarrierIdentifier::getSpecificCarrierId()
	{
		return callMethod<jint>(
			"getSpecificCarrierId",
			"()I"
		);
	}
	jstring CarrierIdentifier::getSpn()
	{
		return callObjectMethod(
			"getSpn",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CarrierIdentifier::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CarrierIdentifier::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CarrierIdentifier::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::carrier

