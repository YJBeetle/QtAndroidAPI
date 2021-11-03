#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SyncNotedAppOp.hpp"

namespace android::app
{
	// Fields
	JObject SyncNotedAppOp::CREATOR()
	{
		return getStaticObjectField(
			"android.app.SyncNotedAppOp",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	SyncNotedAppOp::SyncNotedAppOp(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SyncNotedAppOp::SyncNotedAppOp(jint arg0, JString arg1)
		: JObject(
			"android.app.SyncNotedAppOp",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	
	// Methods
	jint SyncNotedAppOp::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SyncNotedAppOp::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString SyncNotedAppOp::getAttributionTag()
	{
		return callObjectMethod(
			"getAttributionTag",
			"()Ljava/lang/String;"
		);
	}
	JString SyncNotedAppOp::getOp()
	{
		return callObjectMethod(
			"getOp",
			"()Ljava/lang/String;"
		);
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

