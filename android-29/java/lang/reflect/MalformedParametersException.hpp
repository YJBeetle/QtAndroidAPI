#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Exception.hpp"
#include "../RuntimeException.hpp"


namespace java::lang::reflect
{
	class MalformedParametersException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		MalformedParametersException(QAndroidJniObject obj);
		// Constructors
		MalformedParametersException();
		MalformedParametersException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang::reflect

