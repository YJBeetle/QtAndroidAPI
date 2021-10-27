#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::lang
{
	class Exception : public __JniBaseClass
	{
	public:
		// Fields
		
		Exception(QAndroidJniObject obj);
		// Constructors
		Exception();
		Exception(jstring &arg0);
		Exception(const QString &arg0);
		Exception(jthrowable &arg0);
		Exception(jstring &arg0, jthrowable &arg1);
		Exception(const QString &arg0, jthrowable &arg1);
		
		// Methods
	};
} // namespace java::lang

