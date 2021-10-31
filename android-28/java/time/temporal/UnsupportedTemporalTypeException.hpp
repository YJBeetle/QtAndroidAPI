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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnsupportedTemporalTypeException(const char *className, const char *sig, Ts...agv) : java::time::DateTimeException(className, sig, std::forward<Ts>(agv)...) {}
		UnsupportedTemporalTypeException(QAndroidJniObject obj);
		
		// Constructors
		UnsupportedTemporalTypeException(jstring arg0);
		UnsupportedTemporalTypeException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::time::temporal

