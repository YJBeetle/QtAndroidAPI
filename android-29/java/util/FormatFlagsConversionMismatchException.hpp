#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"


namespace java::util
{
	class FormatFlagsConversionMismatchException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FormatFlagsConversionMismatchException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		FormatFlagsConversionMismatchException(QAndroidJniObject obj);
		
		// Constructors
		FormatFlagsConversionMismatchException(jstring arg0, jchar arg1);
		
		// Methods
		jchar getConversion();
		jstring getFlags();
		jstring getMessage();
	};
} // namespace java::util

