#pragma once

#include "./IllegalFormatException.def.hpp"

class JString;

namespace java::util
{
	class FormatFlagsConversionMismatchException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FormatFlagsConversionMismatchException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		FormatFlagsConversionMismatchException(QJniObject obj) : java::util::IllegalFormatException(obj) {}
		
		// Constructors
		FormatFlagsConversionMismatchException(JString arg0, jchar arg1);
		
		// Methods
		jchar getConversion() const;
		JString getFlags() const;
		JString getMessage() const;
	};
} // namespace java::util

