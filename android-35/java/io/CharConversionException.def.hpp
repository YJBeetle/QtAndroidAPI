#pragma once

#include "./IOException.def.hpp"

class JString;

namespace java::io
{
	class CharConversionException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CharConversionException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		CharConversionException(QJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		CharConversionException();
		CharConversionException(JString arg0);
		
		// Methods
	};
} // namespace java::io

