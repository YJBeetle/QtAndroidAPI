#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::text
{
	class PrecomputedText_Params;
}

namespace android::text
{
	class PrecomputedText : public __JniBaseClass
	{
	public:
		// Fields
		
		PrecomputedText(QAndroidJniObject obj);
		// Constructors
		PrecomputedText() = default;
		
		// Methods
		static QAndroidJniObject create(jstring arg0, android::text::PrecomputedText_Params arg1);
		static QAndroidJniObject create(const QString &arg0, android::text::PrecomputedText_Params arg1);
		jchar charAt(jint arg0);
		void getBounds(jint arg0, jint arg1, android::graphics::Rect arg2);
		jint getParagraphCount();
		jint getParagraphEnd(jint arg0);
		jint getParagraphStart(jint arg0);
		QAndroidJniObject getParams();
		jint getSpanEnd(jobject arg0);
		jint getSpanFlags(jobject arg0);
		jint getSpanStart(jobject arg0);
		jobjectArray getSpans(jint arg0, jint arg1, jclass arg2);
		jfloat getWidth(jint arg0, jint arg1);
		jint length();
		jint nextSpanTransition(jint arg0, jint arg1, jclass arg2);
		void removeSpan(jobject arg0);
		void setSpan(jobject arg0, jint arg1, jint arg2, jint arg3);
		jstring subSequence(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace android::text

