#include "../../app/slice/Slice.hpp"
#include "../../os/Parcel.hpp"
#include "../../widget/inline/InlinePresentationSpec.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./InlinePresentation.hpp"

namespace android::service::autofill
{
	// Fields
	JObject InlinePresentation::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.InlinePresentation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	InlinePresentation::InlinePresentation(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	InlinePresentation::InlinePresentation(android::app::slice::Slice arg0, android::widget::inline::InlinePresentationSpec arg1, jboolean arg2)
		: JObject(
			"android.service.autofill.InlinePresentation",
			"(Landroid/app/slice/Slice;Landroid/widget/inline/InlinePresentationSpec;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	jint InlinePresentation::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean InlinePresentation::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::widget::inline::InlinePresentationSpec InlinePresentation::getInlinePresentationSpec()
	{
		return callObjectMethod(
			"getInlinePresentationSpec",
			"()Landroid/widget/inline/InlinePresentationSpec;"
		);
	}
	android::app::slice::Slice InlinePresentation::getSlice()
	{
		return callObjectMethod(
			"getSlice",
			"()Landroid/app/slice/Slice;"
		);
	}
	jint InlinePresentation::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean InlinePresentation::isPinned()
	{
		return callMethod<jboolean>(
			"isPinned",
			"()Z"
		);
	}
	JString InlinePresentation::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void InlinePresentation::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

