#pragma once

#include "./RuntimeException.def.hpp"

class JString;
class JThrowable;

namespace java::lang
{
	class NullPointerException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NullPointerException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		NullPointerException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		NullPointerException();
		NullPointerException(JString arg0);
		
		// Methods
		JThrowable fillInStackTrace() const;
		JString getMessage() const;
	};
} // namespace java::lang

