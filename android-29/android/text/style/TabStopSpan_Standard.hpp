#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::text::style
{
	class TabStopSpan_Standard : public __JniBaseClass
	{
	public:
		// Fields
		
		TabStopSpan_Standard(QAndroidJniObject obj);
		// Constructors
		TabStopSpan_Standard(jint &arg0);
		TabStopSpan_Standard() = default;
		
		// Methods
		jint getTabStop();
	};
} // namespace android::text::style

