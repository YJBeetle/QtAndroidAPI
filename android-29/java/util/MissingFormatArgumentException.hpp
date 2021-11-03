#pragma once

#include "./IllegalFormatException.hpp"

class JString;

namespace java::util
{
	class MissingFormatArgumentException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MissingFormatArgumentException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		MissingFormatArgumentException(QAndroidJniObject obj);
		
		// Constructors
		MissingFormatArgumentException(JString arg0);
		
		// Methods
		JString getFormatSpecifier();
		JString getMessage();
	};
} // namespace java::util

