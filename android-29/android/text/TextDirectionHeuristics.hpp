#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::text
{
	class TextDirectionHeuristics : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ANYRTL_LTR();
		static QAndroidJniObject FIRSTSTRONG_LTR();
		static QAndroidJniObject FIRSTSTRONG_RTL();
		static QAndroidJniObject LOCALE();
		static QAndroidJniObject LTR();
		static QAndroidJniObject RTL();
		
		TextDirectionHeuristics(QAndroidJniObject obj);
		// Constructors
		TextDirectionHeuristics();
		
		// Methods
	};
} // namespace android::text

