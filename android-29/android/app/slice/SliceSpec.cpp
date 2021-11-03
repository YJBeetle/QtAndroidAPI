#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SliceSpec.hpp"

namespace android::app::slice
{
	// Fields
	JObject SliceSpec::CREATOR()
	{
		return getStaticObjectField(
			"android.app.slice.SliceSpec",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	SliceSpec::SliceSpec(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SliceSpec::SliceSpec(JString arg0, jint arg1)
		: JObject(
			"android.app.slice.SliceSpec",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	jboolean SliceSpec::canRender(android::app::slice::SliceSpec arg0) const
	{
		return callMethod<jboolean>(
			"canRender",
			"(Landroid/app/slice/SliceSpec;)Z",
			arg0.object()
		);
	}
	jint SliceSpec::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SliceSpec::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint SliceSpec::getRevision() const
	{
		return callMethod<jint>(
			"getRevision",
			"()I"
		);
	}
	JString SliceSpec::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	JString SliceSpec::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void SliceSpec::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::slice

