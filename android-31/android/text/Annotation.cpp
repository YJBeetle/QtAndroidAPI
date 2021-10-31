#include "../os/Parcel.hpp"
#include "./Annotation.hpp"

namespace android::text
{
	// Fields
	
	// QJniObject forward
	Annotation::Annotation(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Annotation::Annotation(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.text.Annotation",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	Annotation::Annotation(jstring arg0, jstring arg1)
		: __JniBaseClass(
			"android.text.Annotation",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint Annotation::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring Annotation::getKey()
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Annotation::getSpanTypeId()
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	jstring Annotation::getValue()
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		).object<jstring>();
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

