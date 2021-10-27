#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"


namespace android::icu::util
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
} // namespace android::icu::util

