#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace java::util
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
} // namespace java::util

