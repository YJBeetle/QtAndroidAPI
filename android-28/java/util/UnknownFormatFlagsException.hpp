#pragma once

#include "./IllegalFormatException.hpp"

class JString;

namespace java::util
{
	class UnknownFormatFlagsException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnknownFormatFlagsException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		UnknownFormatFlagsException(QAndroidJniObject obj) : java::util::IllegalFormatException(obj) {}
		
		// Constructors
		UnknownFormatFlagsException(JString arg0);
		
		// Methods
		JString getFlags() const;
		JString getMessage() const;
	};
} // namespace java::util

