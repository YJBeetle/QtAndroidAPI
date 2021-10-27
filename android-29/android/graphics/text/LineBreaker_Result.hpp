#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::graphics::text
{
	class LineBreaker_Result : public __JniBaseClass
	{
	public:
		// Fields
		
		LineBreaker_Result(QAndroidJniObject obj);
		// Constructors
		LineBreaker_Result() = default;
		
		// Methods
		jint getEndLineHyphenEdit(jint arg0);
		jfloat getLineAscent(jint arg0);
		jint getLineBreakOffset(jint arg0);
		jint getLineCount();
		jfloat getLineDescent(jint arg0);
		jfloat getLineWidth(jint arg0);
		jint getStartLineHyphenEdit(jint arg0);
		jboolean hasLineTab(jint arg0);
	};
} // namespace android::graphics::text

