#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./Annotation.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	Annotation::Annotation(android::os::Parcel arg0)
		: JObject(
			"android.text.Annotation",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	Annotation::Annotation(JString arg0, JString arg1)
		: JObject(
			"android.text.Annotation",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	jint Annotation::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString Annotation::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	jint Annotation::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	JString Annotation::getValue() const
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		);
	}
	void Annotation::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text

