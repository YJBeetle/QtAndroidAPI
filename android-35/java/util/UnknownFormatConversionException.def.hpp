#pragma once

#include "./IllegalFormatException.def.hpp"

class JString;

namespace java::util
{
	class UnknownFormatConversionException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnknownFormatConversionException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		UnknownFormatConversionException(QJniObject obj) : java::util::IllegalFormatException(obj) {}
		
		// Constructors
		UnknownFormatConversionException(JString arg0);
		
		// Methods
		JString getConversion() const;
		JString getMessage() const;
	};
} // namespace java::util

