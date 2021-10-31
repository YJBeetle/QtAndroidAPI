#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::lang
{
	class Compiler : public __JniBaseClass
	{
	public:
		// Fields
		
		Compiler(QAndroidJniObject obj);
		// Constructors
		Compiler() = default;
		
		// Methods
		static jobject command(jobject arg0);
		static jboolean compileClass(jclass arg0);
		static jboolean compileClasses(jstring arg0);
		static void disable();
		static void enable();
	};
} // namespace java::lang

