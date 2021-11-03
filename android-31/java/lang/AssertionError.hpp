#pragma once

#include "../../JObject.hpp"
#include "./Error.hpp"


namespace java::lang
{
	class AssertionError : public java::lang::Error
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AssertionError(const char *className, const char *sig, Ts...agv) : java::lang::Error(className, sig, std::forward<Ts>(agv)...) {}
		AssertionError(QJniObject obj);
		
		// Constructors
		AssertionError();
		AssertionError(jboolean arg0);
		AssertionError(jchar arg0);
		AssertionError(jdouble arg0);
		AssertionError(jfloat arg0);
		AssertionError(jint arg0);
		AssertionError(jobject arg0);
		AssertionError(jlong arg0);
		AssertionError(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::lang

