#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class PrintStream;
}

namespace android::util
{
	class PrintStreamPrinter : public __JniBaseClass
	{
	public:
		// Fields
		
		PrintStreamPrinter(QAndroidJniObject obj);
		// Constructors
		PrintStreamPrinter(java::io::PrintStream &arg0);
		PrintStreamPrinter() = default;
		
		// Methods
		void println(jstring arg0);
		void println(const QString &arg0);
	};
} // namespace android::util

