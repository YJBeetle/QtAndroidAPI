#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class PrintStream;
}
class JString;

namespace android::util
{
	class PrintStreamPrinter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintStreamPrinter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintStreamPrinter(QJniObject obj);
		
		// Constructors
		PrintStreamPrinter(java::io::PrintStream arg0);
		
		// Methods
		void println(JString arg0) const;
	};
} // namespace android::util

