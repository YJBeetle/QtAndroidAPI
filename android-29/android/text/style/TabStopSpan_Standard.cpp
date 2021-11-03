#include "./TabStopSpan_Standard.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	TabStopSpan_Standard::TabStopSpan_Standard(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TabStopSpan_Standard::TabStopSpan_Standard(jint arg0)
		: JObject(
			"android.text.style.TabStopSpan$Standard",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint TabStopSpan_Standard::getTabStop() const
	{
		return callMethod<jint>(
			"getTabStop",
			"()I"
		);
	}
} // namespace android::text::style

