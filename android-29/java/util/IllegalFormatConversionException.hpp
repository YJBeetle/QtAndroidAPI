#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"


namespace java::util
{
	class IllegalFormatConversionException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IllegalFormatConversionException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalFormatConversionException(QJniObject obj);
		
		// Constructors
		IllegalFormatConversionException(jchar arg0, jclass arg1);
		
		// Methods
		jclass getArgumentClass();
		jchar getConversion();
		jstring getMessage();
	};
} // namespace java::util

