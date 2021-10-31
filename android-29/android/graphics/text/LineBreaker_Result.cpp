#include "./LineBreaker_Result.hpp"

namespace android::graphics::text
{
	// Fields
	
	// QAndroidJniObject forward
	LineBreaker_Result::LineBreaker_Result(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint LineBreaker_Result::getEndLineHyphenEdit(jint arg0)
	{
		return callMethod<jint>(
			"getEndLineHyphenEdit",
			"(I)I",
			arg0
		);
	}
	jfloat LineBreaker_Result::getLineAscent(jint arg0)
	{
		return callMethod<jfloat>(
			"getLineAscent",
			"(I)F",
			arg0
		);
	}
	jint LineBreaker_Result::getLineBreakOffset(jint arg0)
	{
		return callMethod<jint>(
			"getLineBreakOffset",
			"(I)I",
			arg0
		);
	}
	jint LineBreaker_Result::getLineCount()
	{
		return callMethod<jint>(
			"getLineCount",
			"()I"
		);
	}
	jfloat LineBreaker_Result::getLineDescent(jint arg0)
	{
		return callMethod<jfloat>(
			"getLineDescent",
			"(I)F",
			arg0
		);
	}
	jfloat LineBreaker_Result::getLineWidth(jint arg0)
	{
		return callMethod<jfloat>(
			"getLineWidth",
			"(I)F",
			arg0
		);
	}
	jint LineBreaker_Result::getStartLineHyphenEdit(jint arg0)
	{
		return callMethod<jint>(
			"getStartLineHyphenEdit",
			"(I)I",
			arg0
		);
	}
	jboolean LineBreaker_Result::hasLineTab(jint arg0)
	{
		return callMethod<jboolean>(
			"hasLineTab",
			"(I)Z",
			arg0
		);
	}
} // namespace android::graphics::text

