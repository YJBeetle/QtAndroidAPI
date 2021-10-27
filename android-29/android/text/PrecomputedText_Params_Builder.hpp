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
		
		PrecomputedText_Params_Builder(QAndroidJniObject obj);
		// Constructors
		PrecomputedText_Params_Builder(android::text::PrecomputedText_Params &arg0);
		PrecomputedText_Params_Builder(android::text::TextPaint &arg0);
		PrecomputedText_Params_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setBreakStrategy(jint arg0);
		QAndroidJniObject setHyphenationFrequency(jint arg0);
		QAndroidJniObject setTextDirection(__JniBaseClass arg0);
	};
} // namespace android::text

