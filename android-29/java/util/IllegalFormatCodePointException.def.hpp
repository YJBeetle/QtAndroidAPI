#pragma once

#include "./IllegalFormatException.def.hpp"

class JString;

namespace java::util
{
	class IllegalFormatCodePointException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IllegalFormatCodePointException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalFormatCodePointException(QJniObject obj) : java::util::IllegalFormatException(obj) {}
		
		// Constructors
		IllegalFormatCodePointException(jint arg0);
		
		// Methods
		jint getCodePoint() const;
		JString getMessage() const;
	};
} // namespace java::util

