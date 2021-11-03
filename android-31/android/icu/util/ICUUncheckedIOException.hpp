#pragma once

#include "../../../java/lang/RuntimeException.hpp"

class JString;
class JThrowable;

namespace android::icu::util
{
	class ICUUncheckedIOException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ICUUncheckedIOException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ICUUncheckedIOException(QAndroidJniObject obj);
		
		// Constructors
		ICUUncheckedIOException();
		ICUUncheckedIOException(JString arg0);
		ICUUncheckedIOException(JThrowable arg0);
		ICUUncheckedIOException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::icu::util

