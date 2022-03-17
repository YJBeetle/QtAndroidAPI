#pragma once

#include "../../java/io/PrintStream.def.hpp"
#include "../../JString.hpp"
#include "./PrintStreamPrinter.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline PrintStreamPrinter::PrintStreamPrinter(java::io::PrintStream arg0)
		: JObject(
			"android.util.PrintStreamPrinter",
			"(Ljava/io/PrintStream;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void PrintStreamPrinter::println(JString arg0) const
	{
		callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::util

// Base class headers

