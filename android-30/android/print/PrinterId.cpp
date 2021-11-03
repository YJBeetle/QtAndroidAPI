#include "../os/Parcel.hpp"
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
	
	// QJniObject forward
	PrinterId::PrinterId(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint PrinterId::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PrinterId::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring PrinterId::getLocalId()
	{
		return callObjectMethod(
			"getLocalId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PrinterId::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PrinterId::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

