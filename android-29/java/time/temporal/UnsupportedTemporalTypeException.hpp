#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../DateTimeException.hpp"


namespace java::time::temporal
{
	class UnsupportedTemporalTypeException : public java::time::DateTimeException
	{
	public:
		// Fields
		
		UnsupportedTemporalTypeException(QAndroidJniObject obj);
		// Constructors
		UnsupportedTemporalTypeException(jstring arg0);
		UnsupportedTemporalTypeException(jstring arg0, jthrowable arg1);
		UnsupportedTemporalTypeException() = default;
		
		// Methods
	};
} // namespace java::time::temporal

