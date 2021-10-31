#include "./JSONException.hpp"

namespace org::json
{
	// Fields
	
	// QAndroidJniObject forward
	JSONException::JSONException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	JSONException::JSONException(jstring arg0)
		: java::lang::Exception(
			"org.json.JSONException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	JSONException::JSONException(jthrowable arg0)
		: java::lang::Exception(
			"org.json.JSONException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	JSONException::JSONException(jstring arg0, jthrowable arg1)
		: java::lang::Exception(
			"org.json.JSONException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace org::json

