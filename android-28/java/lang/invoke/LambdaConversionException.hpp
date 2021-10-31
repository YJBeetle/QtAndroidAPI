#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Exception.hpp"


namespace java::lang::invoke
{
	class LambdaConversionException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LambdaConversionException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		LambdaConversionException(QJniObject obj);
		
		// Constructors
		LambdaConversionException();
		LambdaConversionException(jstring arg0);
		LambdaConversionException(jthrowable arg0);
		LambdaConversionException(jstring arg0, jthrowable arg1);
		LambdaConversionException(jstring arg0, jthrowable arg1, jboolean arg2, jboolean arg3);
		
		// Methods
	};
} // namespace java::lang::invoke

