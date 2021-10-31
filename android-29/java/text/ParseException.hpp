#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"


namespace java::text
{
	class ParseException : public java::lang::Exception
	{
	public:
		// Fields
		
		ParseException(QAndroidJniObject obj);
		// Constructors
		ParseException(jstring arg0, jint arg1);
		ParseException() = default;
		
		// Methods
		jint getErrorOffset();
	};
} // namespace java::text

