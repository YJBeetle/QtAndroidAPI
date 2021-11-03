#pragma once

#include "../../JObject.hpp"

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
class JString;

namespace android::text
{
	class DynamicLayout_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DynamicLayout_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DynamicLayout_Builder(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::text::DynamicLayout_Builder obtain(JString arg0, android::text::TextPaint arg1, jint arg2);
		android::text::DynamicLayout build() const;
		android::text::DynamicLayout_Builder setAlignment(android::text::Layout_Alignment arg0) const;
		android::text::DynamicLayout_Builder setBreakStrategy(jint arg0) const;
		android::text::DynamicLayout_Builder setDisplayText(JString arg0) const;
		android::text::DynamicLayout_Builder setEllipsize(android::text::TextUtils_TruncateAt arg0) const;
		android::text::DynamicLayout_Builder setEllipsizedWidth(jint arg0) const;
		android::text::DynamicLayout_Builder setHyphenationFrequency(jint arg0) const;
		android::text::DynamicLayout_Builder setIncludePad(jboolean arg0) const;
		android::text::DynamicLayout_Builder setJustificationMode(jint arg0) const;
		android::text::DynamicLayout_Builder setLineSpacing(jfloat arg0, jfloat arg1) const;
		android::text::DynamicLayout_Builder setTextDirection(JObject arg0) const;
		android::text::DynamicLayout_Builder setUseLineSpacingFromFallbacks(jboolean arg0) const;
	};
} // namespace android::text

