#pragma once

#include "../../../JObject.hpp"

namespace android::text::style
{
	class TabStopSpan_Standard : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TabStopSpan_Standard(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TabStopSpan_Standard(QJniObject obj);
		
		// Constructors
		TabStopSpan_Standard(jint arg0);
		
		// Methods
		jint getTabStop();
	};
} // namespace android::text::style

