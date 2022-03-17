#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../util/Size.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./InlinePresentationSpec.def.hpp"

namespace android::widget::inline_
{
	// Fields
	inline JObject InlinePresentationSpec::CREATOR()
	{
		return getStaticObjectField(
			"android.widget.inline.InlinePresentationSpec",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint InlinePresentationSpec::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean InlinePresentationSpec::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::util::Size InlinePresentationSpec::getMaxSize() const
	{
		return callObjectMethod(
			"getMaxSize",
			"()Landroid/util/Size;"
		);
	}
	inline android::util::Size InlinePresentationSpec::getMinSize() const
	{
		return callObjectMethod(
			"getMinSize",
			"()Landroid/util/Size;"
		);
	}
	inline android::os::Bundle InlinePresentationSpec::getStyle() const
	{
		return callObjectMethod(
			"getStyle",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint InlinePresentationSpec::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString InlinePresentationSpec::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void InlinePresentationSpec::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::widget::inline_

// Base class headers

