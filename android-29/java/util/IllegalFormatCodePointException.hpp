#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"


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
		jstring getMessage();
	};
} // namespace java::util

