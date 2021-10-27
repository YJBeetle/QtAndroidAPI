#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"


namespace android::icu::util
{
	class ICUUncheckedIOException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		ICUUncheckedIOException(QAndroidJniObject obj);
		// Constructors
		ICUUncheckedIOException();
		ICUUncheckedIOException(jstring &arg0);
		ICUUncheckedIOException(const QString &arg0);
		ICUUncheckedIOException(jthrowable &arg0);
		ICUUncheckedIOException(jstring &arg0, jthrowable &arg1);
		ICUUncheckedIOException(const QString &arg0, jthrowable &arg1);
		
		// Methods
	};
} // namespace android::icu::util

