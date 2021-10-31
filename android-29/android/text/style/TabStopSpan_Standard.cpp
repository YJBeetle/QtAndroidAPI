#include "./TabStopSpan_Standard.hpp"

namespace android::text::style
{
	// Fields
	
	TabStopSpan_Standard::TabStopSpan_Standard(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TabStopSpan_Standard::TabStopSpan_Standard(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TabStopSpan$Standard",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jint TabStopSpan_Standard::getTabStop()
	{
		return __thiz.callMethod<jint>(
			"getTabStop",
			"()I"
		);
	}
} // namespace android::text::style

