#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::lang
{
	class Number : public __JniBaseClass
	{
	public:
		// Fields
		
		Number(QAndroidJniObject obj);
		// Constructors
		Number();
		
		// Methods
		jbyte byteValue();
		jdouble doubleValue();
		jfloat floatValue();
		jint intValue();
		jlong longValue();
		jshort shortValue();
	};
} // namespace java::lang

