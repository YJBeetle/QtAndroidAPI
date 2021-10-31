#pragma once

#include "../../__JniBaseClass.hpp"

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
	class PrecomputedText_Params_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrecomputedText_Params_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrecomputedText_Params_Builder(QAndroidJniObject obj);
		
		// Constructors
		PrecomputedText_Params_Builder(android::text::TextPaint arg0);
		
		// Methods
		android::text::PrecomputedText_Params build();
		android::text::PrecomputedText_Params_Builder setBreakStrategy(jint arg0);
		android::text::PrecomputedText_Params_Builder setHyphenationFrequency(jint arg0);
		android::text::PrecomputedText_Params_Builder setTextDirection(__JniBaseClass arg0);
	};
} // namespace android::text

