#pragma once

#include "./IllegalFormatException.def.hpp"

class JString;

namespace java::util
{
	class IllegalFormatFlagsException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IllegalFormatFlagsException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalFormatFlagsException(QAndroidJniObject obj) : java::util::IllegalFormatException(obj) {}
		
		// Constructors
		IllegalFormatFlagsException(JString arg0);
		
		// Methods
		JString getFlags() const;
		JString getMessage() const;
	};
} // namespace java::util

