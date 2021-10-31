#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::lang
{
	class Number : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Number(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
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

