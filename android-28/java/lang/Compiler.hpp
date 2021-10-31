#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::lang
{
	class Compiler : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Compiler(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Compiler(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jobject command(jobject arg0);
		static jboolean compileClass(jclass arg0);
		static jboolean compileClasses(jstring arg0);
		static void disable();
		static void enable();
	};
} // namespace java::lang

