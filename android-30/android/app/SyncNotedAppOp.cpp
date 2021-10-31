#include "../os/Parcel.hpp"
#include "./SyncNotedAppOp.hpp"

namespace android::app
{
	// Fields
	__JniBaseClass SyncNotedAppOp::CREATOR()
	{
		return getStaticObjectField(
			"android.app.SyncNotedAppOp",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	SyncNotedAppOp::SyncNotedAppOp(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SyncNotedAppOp::SyncNotedAppOp(jint arg0, jstring arg1)
		: __JniBaseClass(
			"android.app.SyncNotedAppOp",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint SyncNotedAppOp::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SyncNotedAppOp::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring SyncNotedAppOp::getAttributionTag()
	{
		return callObjectMethod(
			"getAttributionTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SyncNotedAppOp::getOp()
	{
		return callObjectMethod(
			"getOp",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SyncNotedAppOp::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void SyncNotedAppOp::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

