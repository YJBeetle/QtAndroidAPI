#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


namespace java::lang
{
	class ArrayStoreException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		ArrayStoreException(QAndroidJniObject obj);
		// Constructors
		ArrayStoreException();
		ArrayStoreException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

