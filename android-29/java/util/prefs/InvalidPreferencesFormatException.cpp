#include "./InvalidPreferencesFormatException.hpp"

namespace java::util::prefs
{
	// Fields
	
	InvalidPreferencesFormatException::InvalidPreferencesFormatException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InvalidPreferencesFormatException::InvalidPreferencesFormatException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.prefs.InvalidPreferencesFormatException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	InvalidPreferencesFormatException::InvalidPreferencesFormatException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.prefs.InvalidPreferencesFormatException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	InvalidPreferencesFormatException::InvalidPreferencesFormatException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.prefs.InvalidPreferencesFormatException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::util::prefs

