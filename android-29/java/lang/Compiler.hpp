#pragma once

#include "../../JObject.hpp"

class JClass;
class JObject;
class JString;

namespace java::lang
{
	class Compiler : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Compiler(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Compiler(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject command(JObject arg0);
		static jboolean compileClass(JClass arg0);
		static jboolean compileClasses(JString arg0);
		static void disable();
		static void enable();
	};
} // namespace java::lang

