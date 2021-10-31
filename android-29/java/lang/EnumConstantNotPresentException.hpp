#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


namespace java::lang
{
	class EnumConstantNotPresentException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		EnumConstantNotPresentException(QAndroidJniObject obj);
		// Constructors
		EnumConstantNotPresentException(jclass arg0, jstring arg1);
		EnumConstantNotPresentException() = default;
		
		// Methods
		jstring constantName();
		jclass enumType();
	};
} // namespace java::lang

