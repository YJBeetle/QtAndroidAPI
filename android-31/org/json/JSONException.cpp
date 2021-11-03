#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./JSONException.hpp"

namespace org::json
{
	// Fields
	
	// QAndroidJniObject forward
	JSONException::JSONException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	JSONException::JSONException(JString arg0)
		: java::lang::Exception(
			"org.json.JSONException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	JSONException::JSONException(JThrowable arg0)
		: java::lang::Exception(
			"org.json.JSONException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	JSONException::JSONException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"org.json.JSONException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace org::json

