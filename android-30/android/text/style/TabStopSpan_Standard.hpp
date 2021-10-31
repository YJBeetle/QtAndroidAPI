#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::text::style
{
	class TabStopSpan_Standard : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TabStopSpan_Standard(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TabStopSpan_Standard(QJniObject obj);
		
		// Constructors
		TabStopSpan_Standard(jint arg0);
		
		// Methods
		jint getTabStop();
	};
} // namespace android::text::style

