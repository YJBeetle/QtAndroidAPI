#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"


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
		MissingFormatArgumentException(jstring arg0);
		
		// Methods
		jstring getFormatSpecifier();
		jstring getMessage();
	};
} // namespace java::util

