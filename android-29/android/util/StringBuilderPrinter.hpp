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
		
		StringBuilderPrinter(QAndroidJniObject obj);
		// Constructors
		StringBuilderPrinter(java::lang::StringBuilder arg0);
		StringBuilderPrinter() = default;
		
		// Methods
		void println(jstring arg0);
	};
} // namespace android::util

