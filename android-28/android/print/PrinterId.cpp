#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PrinterId.hpp"

namespace android::print
{
	// Fields
	JObject PrinterId::CREATOR()
	{
		return getStaticObjectField(
			"android.print.PrinterId",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	PrinterId::PrinterId(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint PrinterId::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PrinterId::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString PrinterId::getLocalId()
	{
		return callObjectMethod(
			"getLocalId",
			"()Ljava/lang/String;"
		);
	}
	jint PrinterId::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString PrinterId::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void PrinterId::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::print

