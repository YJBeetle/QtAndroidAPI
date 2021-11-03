#pragma once

#include "./IllegalFormatException.hpp"

class JString;

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
		FormatFlagsConversionMismatchException(JString arg0, jchar arg1);
		
		// Methods
		jchar getConversion();
		JString getFlags();
		JString getMessage();
	};
} // namespace java::util

