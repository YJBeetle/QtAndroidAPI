#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./Annotation.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	Annotation::Annotation(QAndroidJniObject obj) : JObject(obj) {}
	
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
	jint Annotation::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString Annotation::getKey()
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	jint Annotation::getSpanTypeId()
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	JString Annotation::getValue()
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		);
	}
	void Annotation::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text

