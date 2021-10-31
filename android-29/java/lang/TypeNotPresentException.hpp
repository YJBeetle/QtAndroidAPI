#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


namespace java::lang
{
	class TypeNotPresentException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		TypeNotPresentException(QAndroidJniObject obj);
		// Constructors
		TypeNotPresentException(jstring arg0, jthrowable arg1);
		TypeNotPresentException() = default;
		
		// Methods
		jstring typeName();
	};
} // namespace java::lang

