#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"


namespace java::util::regex
{
	class PatternSyntaxException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		PatternSyntaxException(QAndroidJniObject obj);
		// Constructors
		PatternSyntaxException(jstring arg0, jstring arg1, jint arg2);
		PatternSyntaxException() = default;
		
		// Methods
		jstring getDescription();
		jint getIndex();
		jstring getMessage();
		jstring getPattern();
	};
} // namespace java::util::regex

