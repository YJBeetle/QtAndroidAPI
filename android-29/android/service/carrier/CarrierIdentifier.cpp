#include "../../../JByteArray.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	
	// QAndroidJniObject forward
	CarrierIdentifier::CarrierIdentifier(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	CarrierIdentifier::CarrierIdentifier(JByteArray arg0, JString arg1, JString arg2)
		: JObject(
			"android.service.carrier.CarrierIdentifier",
			"([BLjava/lang/String;Ljava/lang/String;)V",
			arg0.object<jbyteArray>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	CarrierIdentifier::CarrierIdentifier(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4, JString arg5)
		: JObject(
			"android.service.carrier.CarrierIdentifier",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5.object<jstring>()
		) {}
	CarrierIdentifier::CarrierIdentifier(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4, JString arg5, jint arg6, jint arg7)
		: JObject(
			"android.service.carrier.CarrierIdentifier",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5.object<jstring>(),
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
	jboolean CarrierIdentifier::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint CarrierIdentifier::getCarrierId()
	{
		return callMethod<jint>(
			"getCarrierId",
			"()I"
		);
	}
	JString CarrierIdentifier::getGid1()
	{
		return callObjectMethod(
			"getGid1",
			"()Ljava/lang/String;"
		);
	}
	JString CarrierIdentifier::getGid2()
	{
		return callObjectMethod(
			"getGid2",
			"()Ljava/lang/String;"
		);
	}
	JString CarrierIdentifier::getImsi()
	{
		return callObjectMethod(
			"getImsi",
			"()Ljava/lang/String;"
		);
	}
	JString CarrierIdentifier::getMcc()
	{
		return callObjectMethod(
			"getMcc",
			"()Ljava/lang/String;"
		);
	}
	JString CarrierIdentifier::getMnc()
	{
		return callObjectMethod(
			"getMnc",
			"()Ljava/lang/String;"
		);
	}
	jint CarrierIdentifier::getSpecificCarrierId()
	{
		return callMethod<jint>(
			"getSpecificCarrierId",
			"()I"
		);
	}
	JString CarrierIdentifier::getSpn()
	{
		return callObjectMethod(
			"getSpn",
			"()Ljava/lang/String;"
		);
	}
	jint CarrierIdentifier::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CarrierIdentifier::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

