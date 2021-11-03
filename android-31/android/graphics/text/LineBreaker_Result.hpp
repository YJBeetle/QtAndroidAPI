#pragma once

#include "../../../JObject.hpp"

namespace android::graphics::text
{
	class LineBreaker_Result : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LineBreaker_Result(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LineBreaker_Result(QAndroidJniObject obj);
		
		// Constructors
		
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

