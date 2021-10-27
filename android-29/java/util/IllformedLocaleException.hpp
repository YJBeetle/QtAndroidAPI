#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace java::util
{
	class IllformedLocaleException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		IllformedLocaleException(QAndroidJniObject obj);
		// Constructors
		IllformedLocaleException();
		IllformedLocaleException(jstring &arg0);
		IllformedLocaleException(const QString &arg0);
		IllformedLocaleException(jstring &arg0, jint &arg1);
		IllformedLocaleException(const QString &arg0, jint &arg1);
		
		// Methods
		jint getErrorIndex();
	};
} // namespace java::util

