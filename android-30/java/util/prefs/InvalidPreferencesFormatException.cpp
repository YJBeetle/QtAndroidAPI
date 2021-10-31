#include "./InvalidPreferencesFormatException.hpp"

namespace java::util::prefs
{
	// Fields
	
	// QAndroidJniObject forward
	InvalidPreferencesFormatException::InvalidPreferencesFormatException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	InvalidPreferencesFormatException::InvalidPreferencesFormatException(jstring arg0)
		: java::lang::Exception(
			"java.util.prefs.InvalidPreferencesFormatException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	InvalidPreferencesFormatException::InvalidPreferencesFormatException(jthrowable arg0)
		: java::lang::Exception(
			"java.util.prefs.InvalidPreferencesFormatException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	InvalidPreferencesFormatException::InvalidPreferencesFormatException(jstring arg0, jthrowable arg1)
		: java::lang::Exception(
			"java.util.prefs.InvalidPreferencesFormatException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::util::prefs

