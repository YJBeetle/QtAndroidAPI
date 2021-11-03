#pragma once

#include "../../JObject.hpp"

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
	class StaticLayout_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StaticLayout_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StaticLayout_Builder(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::text::StaticLayout_Builder obtain(jstring arg0, jint arg1, jint arg2, android::text::TextPaint arg3, jint arg4);
		android::text::StaticLayout build();
		android::text::StaticLayout_Builder setAlignment(android::text::Layout_Alignment arg0);
		android::text::StaticLayout_Builder setBreakStrategy(jint arg0);
		android::text::StaticLayout_Builder setEllipsize(android::text::TextUtils_TruncateAt arg0);
		android::text::StaticLayout_Builder setEllipsizedWidth(jint arg0);
		android::text::StaticLayout_Builder setHyphenationFrequency(jint arg0);
		android::text::StaticLayout_Builder setIncludePad(jboolean arg0);
		android::text::StaticLayout_Builder setIndents(jintArray arg0, jintArray arg1);
		android::text::StaticLayout_Builder setJustificationMode(jint arg0);
		android::text::StaticLayout_Builder setLineSpacing(jfloat arg0, jfloat arg1);
		android::text::StaticLayout_Builder setMaxLines(jint arg0);
		android::text::StaticLayout_Builder setText(jstring arg0);
		android::text::StaticLayout_Builder setTextDirection(JObject arg0);
		android::text::StaticLayout_Builder setUseLineSpacingFromFallbacks(jboolean arg0);
	};
} // namespace android::text

