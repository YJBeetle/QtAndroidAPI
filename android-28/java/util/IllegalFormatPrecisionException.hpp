#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"


namespace java::util
{
	class IllegalFormatPrecisionException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IllegalFormatPrecisionException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalFormatPrecisionException(QJniObject obj);
		
		// Constructors
		IllegalFormatPrecisionException(jint arg0);
		
		// Methods
		jstring getMessage();
		jint getPrecision();
	};
} // namespace java::util

