#pragma once

#include "../../../JFloatArray.hpp"
#include "../../../JIntArray.hpp"
#include "../../graphics/Matrix.def.hpp"
#include "../../text/SegmentFinder.def.hpp"
#include "./TextBoundsInfo.def.hpp"
#include "./TextBoundsInfo_Builder.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// Constructors
	inline TextBoundsInfo_Builder::TextBoundsInfo_Builder(jint arg0, jint arg1)
		: JObject(
			"android.view.inputmethod.TextBoundsInfo$Builder",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline android::view::inputmethod::TextBoundsInfo TextBoundsInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/inputmethod/TextBoundsInfo;"
		);
	}
	inline android::view::inputmethod::TextBoundsInfo_Builder TextBoundsInfo_Builder::clear() const
	{
		return callObjectMethod(
			"clear",
			"()Landroid/view/inputmethod/TextBoundsInfo$Builder;"
		);
	}
	inline android::view::inputmethod::TextBoundsInfo_Builder TextBoundsInfo_Builder::setCharacterBidiLevel(JIntArray arg0) const
	{
		return callObjectMethod(
			"setCharacterBidiLevel",
			"([I)Landroid/view/inputmethod/TextBoundsInfo$Builder;",
			arg0.object<jintArray>()
		);
	}
	inline android::view::inputmethod::TextBoundsInfo_Builder TextBoundsInfo_Builder::setCharacterBounds(JFloatArray arg0) const
	{
		return callObjectMethod(
			"setCharacterBounds",
			"([F)Landroid/view/inputmethod/TextBoundsInfo$Builder;",
			arg0.object<jfloatArray>()
		);
	}
	inline android::view::inputmethod::TextBoundsInfo_Builder TextBoundsInfo_Builder::setCharacterFlags(JIntArray arg0) const
	{
		return callObjectMethod(
			"setCharacterFlags",
			"([I)Landroid/view/inputmethod/TextBoundsInfo$Builder;",
			arg0.object<jintArray>()
		);
	}
	inline android::view::inputmethod::TextBoundsInfo_Builder TextBoundsInfo_Builder::setGraphemeSegmentFinder(android::text::SegmentFinder arg0) const
	{
		return callObjectMethod(
			"setGraphemeSegmentFinder",
			"(Landroid/text/SegmentFinder;)Landroid/view/inputmethod/TextBoundsInfo$Builder;",
			arg0.object()
		);
	}
	inline android::view::inputmethod::TextBoundsInfo_Builder TextBoundsInfo_Builder::setLineSegmentFinder(android::text::SegmentFinder arg0) const
	{
		return callObjectMethod(
			"setLineSegmentFinder",
			"(Landroid/text/SegmentFinder;)Landroid/view/inputmethod/TextBoundsInfo$Builder;",
			arg0.object()
		);
	}
	inline android::view::inputmethod::TextBoundsInfo_Builder TextBoundsInfo_Builder::setMatrix(android::graphics::Matrix arg0) const
	{
		return callObjectMethod(
			"setMatrix",
			"(Landroid/graphics/Matrix;)Landroid/view/inputmethod/TextBoundsInfo$Builder;",
			arg0.object()
		);
	}
	inline android::view::inputmethod::TextBoundsInfo_Builder TextBoundsInfo_Builder::setStartAndEnd(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setStartAndEnd",
			"(II)Landroid/view/inputmethod/TextBoundsInfo$Builder;",
			arg0,
			arg1
		);
	}
	inline android::view::inputmethod::TextBoundsInfo_Builder TextBoundsInfo_Builder::setWordSegmentFinder(android::text::SegmentFinder arg0) const
	{
		return callObjectMethod(
			"setWordSegmentFinder",
			"(Landroid/text/SegmentFinder;)Landroid/view/inputmethod/TextBoundsInfo$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
