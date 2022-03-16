#pragma once

#include "../../../JObject.hpp"

class JString;

namespace java::lang::reflect
{
	class Modifier : public JObject
	{
	public:
		// Fields
		static jint ABSTRACT();
		static jint FINAL();
		static jint INTERFACE();
		static jint NATIVE();
		static jint PRIVATE();
		static jint PROTECTED();
		static jint PUBLIC();
		static jint STATIC();
		static jint STRICT();
		static jint SYNCHRONIZED();
		static jint TRANSIENT();
		static jint VOLATILE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Modifier(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Modifier(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jint classModifiers();
		static jint constructorModifiers();
		static jint fieldModifiers();
		static jint interfaceModifiers();
		static jboolean isAbstract(jint arg0);
		static jboolean isFinal(jint arg0);
		static jboolean isInterface(jint arg0);
		static jboolean isNative(jint arg0);
		static jboolean isPrivate(jint arg0);
		static jboolean isProtected(jint arg0);
		static jboolean isPublic(jint arg0);
		static jboolean isStatic(jint arg0);
		static jboolean isStrict(jint arg0);
		static jboolean isSynchronized(jint arg0);
		static jboolean isTransient(jint arg0);
		static jboolean isVolatile(jint arg0);
		static jint methodModifiers();
		static jint parameterModifiers();
		static JString toString(jint arg0);
	};
} // namespace java::lang::reflect

