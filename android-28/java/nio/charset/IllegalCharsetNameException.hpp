#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"


namespace java::nio::charset
{
	class IllegalCharsetNameException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IllegalCharsetNameException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalCharsetNameException(QAndroidJniObject obj);
		
		// Constructors
		IllegalCharsetNameException(jstring arg0);
		
		// Methods
		jstring getCharsetName();
	};
} // namespace java::nio::charset

