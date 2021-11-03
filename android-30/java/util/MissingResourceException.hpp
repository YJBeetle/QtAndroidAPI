#pragma once

#include "../lang/RuntimeException.hpp"

class JString;
class JThrowable;

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
		MissingResourceException(JString arg0, JString arg1, JString arg2);
		
		// Methods
		JString getClassName();
		JString getKey();
	};
} // namespace java::util

