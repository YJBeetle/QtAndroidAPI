#pragma once

#include "../../app/slice/Slice.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../widget/inline/InlinePresentationSpec.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./InlinePresentation.def.hpp"

namespace android::service::autofill
{
	// Fields
	inline JObject InlinePresentation::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.InlinePresentation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline InlinePresentation::InlinePresentation(android::app::slice::Slice arg0, android::widget::inline_::InlinePresentationSpec arg1, jboolean arg2)
		: JObject(
			"android.service.autofill.InlinePresentation",
			"(Landroid/app/slice/Slice;Landroid/widget/inline/InlinePresentationSpec;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	inline jint InlinePresentation::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean InlinePresentation::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::widget::inline_::InlinePresentationSpec InlinePresentation::getInlinePresentationSpec() const
	{
		return callObjectMethod(
			"getInlinePresentationSpec",
			"()Landroid/widget/inline/InlinePresentationSpec;"
		);
	}
	inline android::app::slice::Slice InlinePresentation::getSlice() const
	{
		return callObjectMethod(
			"getSlice",
			"()Landroid/app/slice/Slice;"
		);
	}
	inline jint InlinePresentation::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean InlinePresentation::isPinned() const
	{
		return callMethod<jboolean>(
			"isPinned",
			"()Z"
		);
	}
	inline JString InlinePresentation::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void InlinePresentation::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

// Base class headers

