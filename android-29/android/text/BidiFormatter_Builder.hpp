#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::text
{
	class BidiFormatter;
}
namespace java::util
{
	class Locale;
}

namespace android::text
{
	class BidiFormatter_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		BidiFormatter_Builder(QAndroidJniObject obj);
		// Constructors
		BidiFormatter_Builder();
		BidiFormatter_Builder(jboolean arg0);
		BidiFormatter_Builder(java::util::Locale arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setTextDirectionHeuristic(__JniBaseClass arg0);
		QAndroidJniObject stereoReset(jboolean arg0);
	};
} // namespace android::text

