#include "./LineBreaker_ParagraphConstraints.hpp"

namespace android::graphics::text
{
	// Fields
	
	// QJniObject forward
	LineBreaker_ParagraphConstraints::LineBreaker_ParagraphConstraints(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	LineBreaker_ParagraphConstraints::LineBreaker_ParagraphConstraints()
		: __JniBaseClass(
			"android.graphics.text.LineBreaker$ParagraphConstraints",
			"()V"
		) {}
	
	// Methods
	jfloat LineBreaker_ParagraphConstraints::getDefaultTabStop()
	{
		return callMethod<jfloat>(
			"getDefaultTabStop",
			"()F"
		);
	}
	jfloat LineBreaker_ParagraphConstraints::getFirstWidth()
	{
		return callMethod<jfloat>(
			"getFirstWidth",
			"()F"
		);
	}
	jint LineBreaker_ParagraphConstraints::getFirstWidthLineCount()
	{
		return callMethod<jint>(
			"getFirstWidthLineCount",
			"()I"
		);
	}
	jfloatArray LineBreaker_ParagraphConstraints::getTabStops()
	{
		return callObjectMethod(
			"getTabStops",
			"()[F"
		).object<jfloatArray>();
	}
	jfloat LineBreaker_ParagraphConstraints::getWidth()
	{
		return callMethod<jfloat>(
			"getWidth",
			"()F"
		);
	}
	void LineBreaker_ParagraphConstraints::setIndent(jfloat arg0, jint arg1)
	{
		callMethod<void>(
			"setIndent",
			"(FI)V",
			arg0,
			arg1
		);
	}
	void LineBreaker_ParagraphConstraints::setTabStops(jfloatArray arg0, jfloat arg1)
	{
		callMethod<void>(
			"setTabStops",
			"([FF)V",
			arg0,
			arg1
		);
	}
	void LineBreaker_ParagraphConstraints::setWidth(jfloat arg0)
	{
		callMethod<void>(
			"setWidth",
			"(F)V",
			arg0
		);
	}
} // namespace android::graphics::text

