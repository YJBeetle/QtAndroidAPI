#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class PrintWriter;
}

namespace android::util
{
	class PrintWriterPrinter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintWriterPrinter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintWriterPrinter(QJniObject obj);
		
		// Constructors
		PrintWriterPrinter(java::io::PrintWriter arg0);
		
		// Methods
		void println(jstring arg0);
	};
} // namespace android::util

