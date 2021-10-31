#include "../os/Parcel.hpp"
#include "./PrintJobId.hpp"

namespace android::print
{
	// Fields
	__JniBaseClass PrintJobId::CREATOR()
	{
		return getStaticObjectField(
			"android.print.PrintJobId",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	PrintJobId::PrintJobId(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint PrintJobId::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PrintJobId::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PrintJobId::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void PrintJobId::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::print

