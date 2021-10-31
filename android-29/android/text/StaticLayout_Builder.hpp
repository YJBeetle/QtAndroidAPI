#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::text
{
	class Layout_Alignment;
}
namespace android::text
{
	class StaticLayout;
}
namespace android::text
{
	class TextPaint;
}
namespace android::text
{
	class TextUtils_TruncateAt;
}

namespace android::text
{
	class StaticLayout_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StaticLayout_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StaticLayout_Builder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject obtain(jstring arg0, jint arg1, jint arg2, android::text::TextPaint arg3, jint arg4);
		QAndroidJniObject build();
		QAndroidJniObject setAlignment(android::text::Layout_Alignment arg0);
		QAndroidJniObject setBreakStrategy(jint arg0);
		QAndroidJniObject setEllipsize(android::text::TextUtils_TruncateAt arg0);
		QAndroidJniObject setEllipsizedWidth(jint arg0);
		QAndroidJniObject setHyphenationFrequency(jint arg0);
		QAndroidJniObject setIncludePad(jboolean arg0);
		QAndroidJniObject setIndents(jintArray arg0, jintArray arg1);
		QAndroidJniObject setJustificationMode(jint arg0);
		QAndroidJniObject setLineSpacing(jfloat arg0, jfloat arg1);
		QAndroidJniObject setMaxLines(jint arg0);
		QAndroidJniObject setText(jstring arg0);
		QAndroidJniObject setTextDirection(__JniBaseClass arg0);
		QAndroidJniObject setUseLineSpacingFromFallbacks(jboolean arg0);
	};
} // namespace android::text

