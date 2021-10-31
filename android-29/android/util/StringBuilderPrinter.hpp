#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::lang
{
	class StringBuilder;
}

namespace android::util
{
	class StringBuilderPrinter : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StringBuilderPrinter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StringBuilderPrinter(QAndroidJniObject obj);
		
		// Constructors
		StringBuilderPrinter(java::lang::StringBuilder arg0);
		
		// Methods
		void println(jstring arg0);
	};
} // namespace android::util

