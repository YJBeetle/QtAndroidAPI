#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"


namespace java::util::prefs
{
	class InvalidPreferencesFormatException : public java::lang::Exception
	{
	public:
		// Fields
		
		InvalidPreferencesFormatException(QAndroidJniObject obj);
		// Constructors
		InvalidPreferencesFormatException(jstring arg0);
		InvalidPreferencesFormatException(jthrowable arg0);
		InvalidPreferencesFormatException(jstring arg0, jthrowable arg1);
		InvalidPreferencesFormatException() = default;
		
		// Methods
	};
} // namespace java::util::prefs

