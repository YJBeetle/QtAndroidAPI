#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"


namespace java::util
{
	class UnknownFormatConversionException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnknownFormatConversionException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		UnknownFormatConversionException(QJniObject obj);
		
		// Constructors
		UnknownFormatConversionException(jstring arg0);
		
		// Methods
		jstring getConversion();
		jstring getMessage();
	};
} // namespace java::util

