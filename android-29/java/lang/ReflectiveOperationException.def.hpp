#pragma once

#include "./Exception.def.hpp"

class JString;
class JThrowable;

namespace java::lang
{
	class ReflectiveOperationException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ReflectiveOperationException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		ReflectiveOperationException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		ReflectiveOperationException();
		ReflectiveOperationException(JString arg0);
		ReflectiveOperationException(JThrowable arg0);
		ReflectiveOperationException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::lang

