#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Exception.hpp"
#include "../RuntimeException.hpp"


namespace java::lang::reflect
{
	class MalformedParameterizedTypeException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		MalformedParameterizedTypeException(QAndroidJniObject obj);
		// Constructors
		MalformedParameterizedTypeException();
		MalformedParameterizedTypeException(jstring &arg0);
		MalformedParameterizedTypeException(const QString &arg0);
		
		// Methods
	};
} // namespace java::lang::reflect

