#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"


namespace java::util
{
	class DuplicateFormatFlagsException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DuplicateFormatFlagsException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		DuplicateFormatFlagsException(QJniObject obj);
		
		// Constructors
		DuplicateFormatFlagsException(jstring arg0);
		
		// Methods
		jstring getFlags();
		jstring getMessage();
	};
} // namespace java::util

