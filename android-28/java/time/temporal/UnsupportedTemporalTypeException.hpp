#pragma once

#include "../DateTimeException.hpp"

class JString;
class JThrowable;

namespace java::time::temporal
{
	class UnsupportedTemporalTypeException : public java::time::DateTimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnsupportedTemporalTypeException(const char *className, const char *sig, Ts...agv) : java::time::DateTimeException(className, sig, std::forward<Ts>(agv)...) {}
		UnsupportedTemporalTypeException(QJniObject obj);
		
		// Constructors
		UnsupportedTemporalTypeException(JString arg0);
		UnsupportedTemporalTypeException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::time::temporal

