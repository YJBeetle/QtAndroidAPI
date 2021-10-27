#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace java::util
{
	class MissingResourceException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		MissingResourceException(QAndroidJniObject obj);
		// Constructors
		MissingResourceException(jstring &arg0, jstring &arg1, jstring &arg2);
		MissingResourceException(const QString &arg0, const QString &arg1, const QString &arg2);
		MissingResourceException() = default;
		
		// Methods
		jstring getClassName();
		jstring getKey();
	};
} // namespace java::util

