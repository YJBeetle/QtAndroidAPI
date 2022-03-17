#pragma once

#include "./IllegalArgumentException.def.hpp"

class JString;
class JString;

namespace java::lang
{
	class NumberFormatException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NumberFormatException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		NumberFormatException(QAndroidJniObject obj) : java::lang::IllegalArgumentException(obj) {}
		
		// Constructors
		NumberFormatException();
		NumberFormatException(JString arg0);
		
		// Methods
	};
} // namespace java::lang

