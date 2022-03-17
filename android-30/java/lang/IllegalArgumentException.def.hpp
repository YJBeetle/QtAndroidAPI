#pragma once

#include "./RuntimeException.def.hpp"

class JString;
class JThrowable;

namespace java::lang
{
	class IllegalArgumentException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IllegalArgumentException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalArgumentException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		IllegalArgumentException();
		IllegalArgumentException(JString arg0);
		IllegalArgumentException(JThrowable arg0);
		IllegalArgumentException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::lang

