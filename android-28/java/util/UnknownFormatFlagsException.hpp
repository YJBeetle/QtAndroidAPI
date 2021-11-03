#pragma once

#include "./IllegalFormatException.hpp"

class JString;

namespace java::util
{
	class UnknownFormatFlagsException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnknownFormatFlagsException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		UnknownFormatFlagsException(QJniObject obj);
		
		// Constructors
		UnknownFormatFlagsException(JString arg0);
		
		// Methods
		JString getFlags();
		JString getMessage();
	};
} // namespace java::util

