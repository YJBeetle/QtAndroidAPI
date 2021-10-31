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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextDirectionHeuristics(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextDirectionHeuristics(QAndroidJniObject obj);
		
		// Constructors
		TextDirectionHeuristics();
		
		// Methods
	};
} // namespace android::text

