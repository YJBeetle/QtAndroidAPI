#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"


namespace java::util
{
	class IllegalFormatWidthException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IllegalFormatWidthException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalFormatWidthException(QAndroidJniObject obj);
		
		// Constructors
		IllegalFormatWidthException(jint arg0);
		
		// Methods
		jstring getMessage();
		jint getWidth();
	};
} // namespace java::util

