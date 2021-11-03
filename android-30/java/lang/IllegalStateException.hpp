#pragma once

#include "./RuntimeException.hpp"

class JString;
class JThrowable;

namespace java::lang
{
	class IllegalStateException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IllegalStateException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalStateException(QJniObject obj);
		
		// Constructors
		IllegalStateException();
		IllegalStateException(JString arg0);
		IllegalStateException(JThrowable arg0);
		IllegalStateException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::lang

