#include "../../content/LocusId.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ContentCaptureCondition.hpp"

namespace android::view::contentcapture
{
	// Fields
	JObject ContentCaptureCondition::CREATOR()
	{
		return getStaticObjectField(
			"android.view.contentcapture.ContentCaptureCondition",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ContentCaptureCondition::FLAG_IS_REGEX()
	{
		return getStaticField<jint>(
			"android.view.contentcapture.ContentCaptureCondition",
			"FLAG_IS_REGEX"
		);
	}
	
	// Constructors
	ContentCaptureCondition::ContentCaptureCondition(android::content::LocusId arg0, jint arg1)
		: JObject(
			"android.view.contentcapture.ContentCaptureCondition",
			"(Landroid/content/LocusId;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint ContentCaptureCondition::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ContentCaptureCondition::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint ContentCaptureCondition::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	android::content::LocusId ContentCaptureCondition::getLocusId() const
	{
		return callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
	jint ContentCaptureCondition::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString ContentCaptureCondition::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ContentCaptureCondition::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::contentcapture

