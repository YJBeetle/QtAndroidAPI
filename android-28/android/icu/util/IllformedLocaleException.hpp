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
		
		// QJniObject forward
		template<typename ...Ts> explicit IllformedLocaleException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		IllformedLocaleException(QJniObject obj);
		
		// Constructors
		IllformedLocaleException();
		IllformedLocaleException(jstring arg0);
		IllformedLocaleException(jstring arg0, jint arg1);
		
		// Methods
		jint getErrorIndex();
	};
} // namespace android::icu::util

