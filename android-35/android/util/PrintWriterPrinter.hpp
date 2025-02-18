#pragma once

#include "../../java/io/PrintWriter.def.hpp"
#include "../../JString.hpp"
#include "./PrintWriterPrinter.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline PrintWriterPrinter::PrintWriterPrinter(java::io::PrintWriter arg0)
		: JObject(
			"android.util.PrintWriterPrinter",
			"(Ljava/io/PrintWriter;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void PrintWriterPrinter::println(JString arg0) const
	{
		callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
