#pragma once

#include "./Error.def.hpp"

class JObject;
class JString;
class JThrowable;

namespace java::lang
{
	class AssertionError : public java::lang::Error
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AssertionError(const char *className, const char *sig, Ts...agv) : java::lang::Error(className, sig, std::forward<Ts>(agv)...) {}
		AssertionError(QAndroidJniObject obj) : java::lang::Error(obj) {}
		
		// Constructors
		AssertionError();
		AssertionError(jboolean arg0);
		AssertionError(jchar arg0);
		AssertionError(jdouble arg0);
		AssertionError(jfloat arg0);
		AssertionError(jint arg0);
		AssertionError(JObject arg0);
		AssertionError(jlong arg0);
		AssertionError(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::lang

