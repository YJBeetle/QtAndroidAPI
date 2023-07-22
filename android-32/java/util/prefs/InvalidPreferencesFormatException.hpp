#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./InvalidPreferencesFormatException.def.hpp"

namespace java::util::prefs
{
	// Fields
	
	// Constructors
	inline InvalidPreferencesFormatException::InvalidPreferencesFormatException(JString arg0)
		: java::lang::Exception(
			"java.util.prefs.InvalidPreferencesFormatException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline InvalidPreferencesFormatException::InvalidPreferencesFormatException(JThrowable arg0)
		: java::lang::Exception(
			"java.util.prefs.InvalidPreferencesFormatException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline InvalidPreferencesFormatException::InvalidPreferencesFormatException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"java.util.prefs.InvalidPreferencesFormatException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::util::prefs

// Base class headers
#include "../../lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::prefs;
#endif
