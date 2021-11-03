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
	
	// QJniObject forward
	AsyncNotedAppOp::AsyncNotedAppOp(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint AsyncNotedAppOp::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AsyncNotedAppOp::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString AsyncNotedAppOp::getAttributionTag()
	{
		return callObjectMethod(
			"getAttributionTag",
			"()Ljava/lang/String;"
		);
	}
	JString AsyncNotedAppOp::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	jint AsyncNotedAppOp::getNotingUid()
	{
		return callMethod<jint>(
			"getNotingUid",
			"()I"
		);
	}
	JString AsyncNotedAppOp::getOp()
	{
		return callObjectMethod(
			"getOp",
			"()Ljava/lang/String;"
		);
	}
	jlong AsyncNotedAppOp::getTime()
	{
		return callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	jint AsyncNotedAppOp::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void AsyncNotedAppOp::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

