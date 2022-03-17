#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./JSONException.def.hpp"

namespace org::json
{
	// Fields
	
	// Constructors
	inline JSONException::JSONException(JString arg0)
		: java::lang::Exception(
			"org.json.JSONException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline JSONException::JSONException(JThrowable arg0)
		: java::lang::Exception(
			"org.json.JSONException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline JSONException::JSONException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"org.json.JSONException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace org::json

// Base class headers
#include "../../java/lang/Exception.hpp"

