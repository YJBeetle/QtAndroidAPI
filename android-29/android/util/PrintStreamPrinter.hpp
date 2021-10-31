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
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintStreamPrinter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrintStreamPrinter(QJniObject obj);
		
		// Constructors
		PrintStreamPrinter(java::io::PrintStream arg0);
		
		// Methods
		void println(jstring arg0);
	};
} // namespace android::util

