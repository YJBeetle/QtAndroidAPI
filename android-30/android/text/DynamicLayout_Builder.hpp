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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DynamicLayout_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DynamicLayout_Builder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::text::DynamicLayout_Builder obtain(jstring arg0, android::text::TextPaint arg1, jint arg2);
		android::text::DynamicLayout build();
		android::text::DynamicLayout_Builder setAlignment(android::text::Layout_Alignment arg0);
		android::text::DynamicLayout_Builder setBreakStrategy(jint arg0);
		android::text::DynamicLayout_Builder setDisplayText(jstring arg0);
		android::text::DynamicLayout_Builder setEllipsize(android::text::TextUtils_TruncateAt arg0);
		android::text::DynamicLayout_Builder setEllipsizedWidth(jint arg0);
		android::text::DynamicLayout_Builder setHyphenationFrequency(jint arg0);
		android::text::DynamicLayout_Builder setIncludePad(jboolean arg0);
		android::text::DynamicLayout_Builder setJustificationMode(jint arg0);
		android::text::DynamicLayout_Builder setLineSpacing(jfloat arg0, jfloat arg1);
		android::text::DynamicLayout_Builder setTextDirection(__JniBaseClass arg0);
		android::text::DynamicLayout_Builder setUseLineSpacingFromFallbacks(jboolean arg0);
	};
} // namespace android::text

