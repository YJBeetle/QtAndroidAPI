#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./InvalidPreferencesFormatException.hpp"

namespace java::util::prefs
{
	// Fields
	
	// Constructors
	InvalidPreferencesFormatException::InvalidPreferencesFormatException(JString arg0)
		: java::lang::Exception(
			"java.util.prefs.InvalidPreferencesFormatException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	InvalidPreferencesFormatException::InvalidPreferencesFormatException(JThrowable arg0)
		: java::lang::Exception(
			"java.util.prefs.InvalidPreferencesFormatException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	InvalidPreferencesFormatException::InvalidPreferencesFormatException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"java.util.prefs.InvalidPreferencesFormatException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::util::prefs

