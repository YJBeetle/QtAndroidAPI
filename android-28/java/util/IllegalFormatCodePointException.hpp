#pragma once

#include "./IllegalFormatException.hpp"

class JString;

namespace java::util
{
	class IllegalFormatCodePointException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IllegalFormatCodePointException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalFormatCodePointException(QAndroidJniObject obj);
		
		// Constructors
		IllegalFormatCodePointException(jint arg0);
		
		// Methods
		jint getCodePoint();
		JString getMessage();
	};
} // namespace java::util

