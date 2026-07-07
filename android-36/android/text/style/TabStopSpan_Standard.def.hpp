#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::text::style
{
	class TabStopSpan_Standard : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TabStopSpan_Standard(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TabStopSpan_Standard(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TabStopSpan_Standard(jint arg0);
		
		// Methods
		jint getTabStop() const;
		JString toString() const;
	};
} // namespace android::text::style

