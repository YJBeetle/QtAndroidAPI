#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class UnicodeSetSpanner_CountMethod : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject MIN_ELEMENTS();
		static QAndroidJniObject WHOLE_SPAN();
		
		UnicodeSetSpanner_CountMethod(QAndroidJniObject obj);
		// Constructors
		UnicodeSetSpanner_CountMethod() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

