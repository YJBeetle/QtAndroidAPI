#pragma once

#include "../../JObject.hpp"


namespace java::lang
{
	class Compiler : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Compiler(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Compiler(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jobject command(jobject arg0);
		static jboolean compileClass(jclass arg0);
		static jboolean compileClasses(jstring arg0);
		static void disable();
		static void enable();
	};
} // namespace java::lang

