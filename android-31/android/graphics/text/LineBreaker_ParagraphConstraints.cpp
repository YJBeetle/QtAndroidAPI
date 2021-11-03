#include "../../../JFloatArray.hpp"
#include "./LineBreaker_ParagraphConstraints.hpp"

namespace android::graphics::text
{
	// Fields
	
	// QAndroidJniObject forward
	LineBreaker_ParagraphConstraints::LineBreaker_ParagraphConstraints(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	LineBreaker_ParagraphConstraints::LineBreaker_ParagraphConstraints()
		: JObject(
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
	JFloatArray LineBreaker_ParagraphConstraints::getTabStops()
	{
		return callObjectMethod(
			"getTabStops",
			"()[F"
		);
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
	void LineBreaker_ParagraphConstraints::setTabStops(JFloatArray arg0, jfloat arg1)
	{
		callMethod<void>(
			"setTabStops",
			"([FF)V",
			arg0.object<jfloatArray>(),
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

