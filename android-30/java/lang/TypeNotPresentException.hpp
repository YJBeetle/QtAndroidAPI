#pragma once

#include "./RuntimeException.hpp"

class JString;
class JThrowable;

namespace java::lang
{
	class TypeNotPresentException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TypeNotPresentException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		TypeNotPresentException(QAndroidJniObject obj);
		
		// Constructors
		TypeNotPresentException(JString arg0, JThrowable arg1);
		
		// Methods
		JString typeName();
	};
} // namespace java::lang

