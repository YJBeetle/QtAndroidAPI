#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AsyncNotedAppOp.hpp"

namespace android::app
{
	// Fields
	JObject AsyncNotedAppOp::CREATOR()
	{
		return getStaticObjectField(
			"android.app.AsyncNotedAppOp",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint AsyncNotedAppOp::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AsyncNotedAppOp::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString AsyncNotedAppOp::getAttributionTag() const
	{
		return callObjectMethod(
			"getAttributionTag",
			"()Ljava/lang/String;"
		);
	}
	JString AsyncNotedAppOp::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	jint AsyncNotedAppOp::getNotingUid() const
	{
		return callMethod<jint>(
			"getNotingUid",
			"()I"
		);
	}
	JString AsyncNotedAppOp::getOp() const
	{
		return callObjectMethod(
			"getOp",
			"()Ljava/lang/String;"
		);
	}
	jlong AsyncNotedAppOp::getTime() const
	{
		return callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	jint AsyncNotedAppOp::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void AsyncNotedAppOp::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

