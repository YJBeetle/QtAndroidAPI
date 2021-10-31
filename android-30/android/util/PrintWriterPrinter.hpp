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
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintWriterPrinter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrintWriterPrinter(QJniObject obj);
		
		// Constructors
		PrintWriterPrinter(java::io::PrintWriter arg0);
		
		// Methods
		void println(jstring arg0);
	};
} // namespace android::util

