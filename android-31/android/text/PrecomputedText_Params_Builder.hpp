#pragma once

#include "../../JObject.hpp"

namespace android::text
{
	class PrecomputedText_Params;
}
namespace android::text
{
	class TextPaint;
}

namespace android::text
{
	class PrecomputedText_Params_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrecomputedText_Params_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrecomputedText_Params_Builder(QAndroidJniObject obj);
		
		// Constructors
		PrecomputedText_Params_Builder(android::text::PrecomputedText_Params arg0);
		PrecomputedText_Params_Builder(android::text::TextPaint arg0);
		
		// Methods
		android::text::PrecomputedText_Params build();
		android::text::PrecomputedText_Params_Builder setBreakStrategy(jint arg0);
		android::text::PrecomputedText_Params_Builder setHyphenationFrequency(jint arg0);
		android::text::PrecomputedText_Params_Builder setTextDirection(JObject arg0);
	};
} // namespace android::text

