#pragma once

#include "../../../JFloatArray.hpp"
#include "./LineBreaker_ParagraphConstraints.def.hpp"

namespace android::graphics::text
{
	// Fields
	
	// Constructors
	inline LineBreaker_ParagraphConstraints::LineBreaker_ParagraphConstraints()
		: JObject(
			"android.graphics.text.LineBreaker$ParagraphConstraints",
			"()V"
		) {}
	
	// Methods
	inline jfloat LineBreaker_ParagraphConstraints::getDefaultTabStop() const
	{
		return callMethod<jfloat>(
			"getDefaultTabStop",
			"()F"
		);
	}
	inline jfloat LineBreaker_ParagraphConstraints::getFirstWidth() const
	{
		return callMethod<jfloat>(
			"getFirstWidth",
			"()F"
		);
	}
	inline jint LineBreaker_ParagraphConstraints::getFirstWidthLineCount() const
	{
		return callMethod<jint>(
			"getFirstWidthLineCount",
			"()I"
		);
	}
	inline JFloatArray LineBreaker_ParagraphConstraints::getTabStops() const
	{
		return callObjectMethod(
			"getTabStops",
			"()[F"
		);
	}
	inline jfloat LineBreaker_ParagraphConstraints::getWidth() const
	{
		return callMethod<jfloat>(
			"getWidth",
			"()F"
		);
	}
	inline void LineBreaker_ParagraphConstraints::setIndent(jfloat arg0, jint arg1) const
	{
		callMethod<void>(
			"setIndent",
			"(FI)V",
			arg0,
			arg1
		);
	}
	inline void LineBreaker_ParagraphConstraints::setTabStops(JFloatArray arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setTabStops",
			"([FF)V",
			arg0.object<jfloatArray>(),
			arg1
		);
	}
	inline void LineBreaker_ParagraphConstraints::setWidth(jfloat arg0) const
	{
		callMethod<void>(
			"setWidth",
			"(F)V",
			arg0
		);
	}
} // namespace android::graphics::text

// Base class headers

