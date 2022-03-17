#pragma once

#include "../DateTimeException.def.hpp"

class JString;
class JThrowable;

namespace java::time::temporal
{
	class UnsupportedTemporalTypeException : public java::time::DateTimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnsupportedTemporalTypeException(const char *className, const char *sig, Ts...agv) : java::time::DateTimeException(className, sig, std::forward<Ts>(agv)...) {}
		UnsupportedTemporalTypeException(QAndroidJniObject obj) : java::time::DateTimeException(obj) {}
		
		// Constructors
		UnsupportedTemporalTypeException(JString arg0);
		UnsupportedTemporalTypeException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::time::temporal

