#pragma once

#include "./IllegalFormatException.def.hpp"

class JString;

namespace java::util
{
	class DuplicateFormatFlagsException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DuplicateFormatFlagsException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		DuplicateFormatFlagsException(QAndroidJniObject obj) : java::util::IllegalFormatException(obj) {}
		
		// Constructors
		DuplicateFormatFlagsException(JString arg0);
		
		// Methods
		JString getFlags() const;
		JString getMessage() const;
	};
} // namespace java::util

