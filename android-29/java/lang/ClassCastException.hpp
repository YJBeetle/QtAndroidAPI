#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


namespace java::lang
{
	class ClassCastException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		ClassCastException(QAndroidJniObject obj);
		// Constructors
		ClassCastException();
		ClassCastException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

