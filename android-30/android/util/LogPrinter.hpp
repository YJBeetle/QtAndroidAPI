#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class LogPrinter : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LogPrinter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LogPrinter(QAndroidJniObject obj);
		
		// Constructors
		LogPrinter(jint arg0, jstring arg1);
		
		// Methods
		void println(jstring arg0);
	};
} // namespace android::util

