#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::graphics::text
{
	class LineBreakConfig;
}
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
class JString;

namespace android::text
{
	class StaticLayout_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StaticLayout_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StaticLayout_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::text::StaticLayout_Builder obtain(JString arg0, jint arg1, jint arg2, android::text::TextPaint arg3, jint arg4);
		android::text::StaticLayout build() const;
		android::text::StaticLayout_Builder setAlignment(android::text::Layout_Alignment arg0) const;
		android::text::StaticLayout_Builder setBreakStrategy(jint arg0) const;
		android::text::StaticLayout_Builder setEllipsize(android::text::TextUtils_TruncateAt arg0) const;
		android::text::StaticLayout_Builder setEllipsizedWidth(jint arg0) const;
		android::text::StaticLayout_Builder setHyphenationFrequency(jint arg0) const;
		android::text::StaticLayout_Builder setIncludePad(jboolean arg0) const;
		android::text::StaticLayout_Builder setIndents(JIntArray arg0, JIntArray arg1) const;
		android::text::StaticLayout_Builder setJustificationMode(jint arg0) const;
		android::text::StaticLayout_Builder setLineBreakConfig(android::graphics::text::LineBreakConfig arg0) const;
		android::text::StaticLayout_Builder setLineSpacing(jfloat arg0, jfloat arg1) const;
		android::text::StaticLayout_Builder setMaxLines(jint arg0) const;
		android::text::StaticLayout_Builder setText(JString arg0) const;
		android::text::StaticLayout_Builder setTextDirection(JObject arg0) const;
		android::text::StaticLayout_Builder setUseLineSpacingFromFallbacks(jboolean arg0) const;
	};
} // namespace android::text

