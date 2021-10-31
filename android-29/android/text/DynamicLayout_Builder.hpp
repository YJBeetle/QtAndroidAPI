#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::text
{
	class DynamicLayout;
}
namespace android::text
{
	class Layout_Alignment;
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
	class DynamicLayout_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		DynamicLayout_Builder(QAndroidJniObject obj);
		// Constructors
		DynamicLayout_Builder() = default;
		
		// Methods
		static QAndroidJniObject obtain(jstring arg0, android::text::TextPaint arg1, jint arg2);
		QAndroidJniObject build();
		QAndroidJniObject setAlignment(android::text::Layout_Alignment arg0);
		QAndroidJniObject setBreakStrategy(jint arg0);
		QAndroidJniObject setDisplayText(jstring arg0);
		QAndroidJniObject setEllipsize(android::text::TextUtils_TruncateAt arg0);
		QAndroidJniObject setEllipsizedWidth(jint arg0);
		QAndroidJniObject setHyphenationFrequency(jint arg0);
		QAndroidJniObject setIncludePad(jboolean arg0);
		QAndroidJniObject setJustificationMode(jint arg0);
		QAndroidJniObject setLineSpacing(jfloat arg0, jfloat arg1);
		QAndroidJniObject setTextDirection(__JniBaseClass arg0);
		QAndroidJniObject setUseLineSpacingFromFallbacks(jboolean arg0);
	};
} // namespace android::text

