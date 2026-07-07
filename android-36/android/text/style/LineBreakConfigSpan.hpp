#pragma once

#include "../../graphics/text/LineBreakConfig.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./LineBreakConfigSpan.def.hpp"

namespace android::text::style
{
	// Fields
	inline JObject LineBreakConfigSpan::CREATOR()
	{
		return getStaticObjectField(
			"android.text.style.LineBreakConfigSpan",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline LineBreakConfigSpan::LineBreakConfigSpan(android::graphics::text::LineBreakConfig arg0)
		: JObject(
			"android.text.style.LineBreakConfigSpan",
			"(Landroid/graphics/text/LineBreakConfig;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::text::style::LineBreakConfigSpan LineBreakConfigSpan::createNoBreakSpan()
	{
		return callStaticObjectMethod(
			"android.text.style.LineBreakConfigSpan",
			"createNoBreakSpan",
			"()Landroid/text/style/LineBreakConfigSpan;"
		);
	}
	inline android::text::style::LineBreakConfigSpan LineBreakConfigSpan::createNoHyphenationSpan()
	{
		return callStaticObjectMethod(
			"android.text.style.LineBreakConfigSpan",
			"createNoHyphenationSpan",
			"()Landroid/text/style/LineBreakConfigSpan;"
		);
	}
	inline jint LineBreakConfigSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean LineBreakConfigSpan::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::graphics::text::LineBreakConfig LineBreakConfigSpan::getLineBreakConfig() const
	{
		return callObjectMethod(
			"getLineBreakConfig",
			"()Landroid/graphics/text/LineBreakConfig;"
		);
	}
	inline jint LineBreakConfigSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline jint LineBreakConfigSpan::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString LineBreakConfigSpan::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void LineBreakConfigSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::style;
#endif
