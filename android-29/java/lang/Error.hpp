#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::lang
{
	class Error : public __JniBaseClass
	{
	public:
		// Fields
		
		Error(QAndroidJniObject obj);
		// Constructors
		Error();
		Error(jstring arg0);
		Error(jthrowable arg0);
		Error(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::lang

