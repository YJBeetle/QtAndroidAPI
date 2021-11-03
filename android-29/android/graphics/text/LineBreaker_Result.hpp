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
		jint getEndLineHyphenEdit(jint arg0) const;
		jfloat getLineAscent(jint arg0) const;
		jint getLineBreakOffset(jint arg0) const;
		jint getLineCount() const;
		jfloat getLineDescent(jint arg0) const;
		jfloat getLineWidth(jint arg0) const;
		jint getStartLineHyphenEdit(jint arg0) const;
		jboolean hasLineTab(jint arg0) const;
	};
} // namespace android::graphics::text

