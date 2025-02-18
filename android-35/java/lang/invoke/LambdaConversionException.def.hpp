#pragma once

#include "../Exception.def.hpp"

class JString;
class JThrowable;

namespace java::lang::invoke
{
	class LambdaConversionException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LambdaConversionException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		LambdaConversionException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		LambdaConversionException();
		LambdaConversionException(JString arg0);
		LambdaConversionException(JThrowable arg0);
		LambdaConversionException(JString arg0, JThrowable arg1);
		LambdaConversionException(JString arg0, JThrowable arg1, jboolean arg2, jboolean arg3);
		
		// Methods
	};
} // namespace java::lang::invoke

