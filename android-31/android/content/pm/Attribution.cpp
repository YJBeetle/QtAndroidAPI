#include "../../os/Parcel.hpp"
#include "./Attribution.hpp"

namespace android::content::pm
{
	// Fields
	__JniBaseClass Attribution::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.Attribution",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	Attribution::Attribution(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint Attribution::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint Attribution::getLabel()
	{
		return callMethod<jint>(
			"getLabel",
			"()I"
		);
	}
	jstring Attribution::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Attribution::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

