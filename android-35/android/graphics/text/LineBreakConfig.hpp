#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./LineBreakConfig.def.hpp"

namespace android::graphics::text
{
	// Fields
	inline JObject LineBreakConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.text.LineBreakConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint LineBreakConfig::HYPHENATION_DISABLED()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreakConfig",
			"HYPHENATION_DISABLED"
		);
	}
	inline jint LineBreakConfig::HYPHENATION_ENABLED()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreakConfig",
			"HYPHENATION_ENABLED"
		);
	}
	inline jint LineBreakConfig::HYPHENATION_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreakConfig",
			"HYPHENATION_UNSPECIFIED"
		);
	}
	inline jint LineBreakConfig::LINE_BREAK_STYLE_AUTO()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreakConfig",
			"LINE_BREAK_STYLE_AUTO"
		);
	}
	inline jint LineBreakConfig::LINE_BREAK_STYLE_LOOSE()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreakConfig",
			"LINE_BREAK_STYLE_LOOSE"
		);
	}
	inline jint LineBreakConfig::LINE_BREAK_STYLE_NONE()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreakConfig",
			"LINE_BREAK_STYLE_NONE"
		);
	}
	inline jint LineBreakConfig::LINE_BREAK_STYLE_NORMAL()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreakConfig",
			"LINE_BREAK_STYLE_NORMAL"
		);
	}
	inline jint LineBreakConfig::LINE_BREAK_STYLE_NO_BREAK()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreakConfig",
			"LINE_BREAK_STYLE_NO_BREAK"
		);
	}
	inline jint LineBreakConfig::LINE_BREAK_STYLE_STRICT()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreakConfig",
			"LINE_BREAK_STYLE_STRICT"
		);
	}
	inline jint LineBreakConfig::LINE_BREAK_STYLE_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreakConfig",
			"LINE_BREAK_STYLE_UNSPECIFIED"
		);
	}
	inline jint LineBreakConfig::LINE_BREAK_WORD_STYLE_AUTO()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreakConfig",
			"LINE_BREAK_WORD_STYLE_AUTO"
		);
	}
	inline jint LineBreakConfig::LINE_BREAK_WORD_STYLE_NONE()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreakConfig",
			"LINE_BREAK_WORD_STYLE_NONE"
		);
	}
	inline jint LineBreakConfig::LINE_BREAK_WORD_STYLE_PHRASE()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreakConfig",
			"LINE_BREAK_WORD_STYLE_PHRASE"
		);
	}
	inline jint LineBreakConfig::LINE_BREAK_WORD_STYLE_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.graphics.text.LineBreakConfig",
			"LINE_BREAK_WORD_STYLE_UNSPECIFIED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint LineBreakConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean LineBreakConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint LineBreakConfig::getHyphenation() const
	{
		return callMethod<jint>(
			"getHyphenation",
			"()I"
		);
	}
	inline jint LineBreakConfig::getLineBreakStyle() const
	{
		return callMethod<jint>(
			"getLineBreakStyle",
			"()I"
		);
	}
	inline jint LineBreakConfig::getLineBreakWordStyle() const
	{
		return callMethod<jint>(
			"getLineBreakWordStyle",
			"()I"
		);
	}
	inline jint LineBreakConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline android::graphics::text::LineBreakConfig LineBreakConfig::merge(android::graphics::text::LineBreakConfig arg0) const
	{
		return callObjectMethod(
			"merge",
			"(Landroid/graphics/text/LineBreakConfig;)Landroid/graphics/text/LineBreakConfig;",
			arg0.object()
		);
	}
	inline JString LineBreakConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void LineBreakConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::text;
#endif
