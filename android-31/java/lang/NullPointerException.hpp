#pragma once

#include "./RuntimeException.hpp"

class JString;
class JThrowable;

namespace java::lang
{
	class NullPointerException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NullPointerException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		NullPointerException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		NullPointerException();
		NullPointerException(JString arg0);
		
		// Methods
		JThrowable fillInStackTrace() const;
		JString getMessage() const;
	};
} // namespace java::lang

