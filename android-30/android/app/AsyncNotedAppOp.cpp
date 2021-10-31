#include "../os/Parcel.hpp"
#include "./AsyncNotedAppOp.hpp"

namespace android::app
{
	// Fields
	__JniBaseClass AsyncNotedAppOp::CREATOR()
	{
		return getStaticObjectField(
			"android.app.AsyncNotedAppOp",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	AsyncNotedAppOp::AsyncNotedAppOp(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint AsyncNotedAppOp::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AsyncNotedAppOp::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring AsyncNotedAppOp::getAttributionTag()
	{
		return callObjectMethod(
			"getAttributionTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AsyncNotedAppOp::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AsyncNotedAppOp::getNotingUid()
	{
		return callMethod<jint>(
			"getNotingUid",
			"()I"
		);
	}
	jstring AsyncNotedAppOp::getOp()
	{
		return callObjectMethod(
			"getOp",
			"()Ljava/lang/String;"
		).object<jstring>();
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

