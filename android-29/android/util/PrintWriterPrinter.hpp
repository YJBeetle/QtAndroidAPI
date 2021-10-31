#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class PrintWriter;
}

namespace android::util
{
	class PrintWriterPrinter : public __JniBaseClass
	{
	public:
		// Fields
		
		PrintWriterPrinter(QAndroidJniObject obj);
		// Constructors
		PrintWriterPrinter(java::io::PrintWriter arg0);
		PrintWriterPrinter() = default;
		
		// Methods
		void println(jstring arg0);
	};
} // namespace android::util

