#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./FormatException.def.hpp"

namespace android::nfc
{
	// Fields
	
	// Constructors
	inline FormatException::FormatException()
		: java::lang::Exception(
			"android.nfc.FormatException",
			"()V"
		) {}
	inline FormatException::FormatException(JString arg0)
		: java::lang::Exception(
			"android.nfc.FormatException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline FormatException::FormatException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"android.nfc.FormatException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::nfc

// Base class headers
#include "../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::nfc;
#endif
