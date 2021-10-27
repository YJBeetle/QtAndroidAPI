#include "./LineBreaker_ParagraphConstraints.hpp"

namespace android::graphics::text
{
	// Fields
	
	LineBreaker_ParagraphConstraints::LineBreaker_ParagraphConstraints(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LineBreaker_ParagraphConstraints::LineBreaker_ParagraphConstraints()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.text.LineBreaker$ParagraphConstraints",
			"()V"
		);
	}
	
	// Methods
	jfloat LineBreaker_ParagraphConstraints::getDefaultTabStop()
	{
		return __thiz.callMethod<jfloat>(
			"getDefaultTabStop",
			"()F"
		);
	}
	jfloat LineBreaker_ParagraphConstraints::getFirstWidth()
	{
		return __thiz.callMethod<jfloat>(
			"getFirstWidth",
			"()F"
		);
	}
	jint LineBreaker_ParagraphConstraints::getFirstWidthLineCount()
	{
		return __thiz.callMethod<jint>(
			"getFirstWidthLineCount",
			"()I"
		);
	}
	jfloatArray LineBreaker_ParagraphConstraints::getTabStops()
	{
		return __thiz.callObjectMethod(
			"getTabStops",
			"()[F"
		).object<jfloatArray>();
	}
	jfloat LineBreaker_ParagraphConstraints::getWidth()
	{
		return __thiz.callMethod<jfloat>(
			"getWidth",
			"()F"
		);
	}
	void LineBreaker_ParagraphConstraints::setIndent(jfloat arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setIndent",
			"(FI)V",
			arg0,
			arg1
		);
	}
	void LineBreaker_ParagraphConstraints::setTabStops(jfloatArray arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setTabStops",
			"([FF)V",
			arg0,
			arg1
		);
	}
	void LineBreaker_ParagraphConstraints::setWidth(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setWidth",
			"(F)V",
			arg0
		);
	}
} // namespace android::graphics::text

