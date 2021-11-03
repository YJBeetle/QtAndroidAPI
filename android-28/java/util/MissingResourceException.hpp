#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace java::util
{
	class MissingResourceException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MissingResourceException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		MissingResourceException(QAndroidJniObject obj);
		
		// Constructors
		MissingResourceException(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
		jstring getClassName();
		jstring getKey();
	};
} // namespace java::util

