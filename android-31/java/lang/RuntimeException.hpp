#pragma once

#include "./Exception.hpp"

class JString;
class JThrowable;

namespace java::lang
{
	class RuntimeException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RuntimeException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		RuntimeException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		RuntimeException();
		RuntimeException(JString arg0);
		RuntimeException(JThrowable arg0);
		RuntimeException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::lang

