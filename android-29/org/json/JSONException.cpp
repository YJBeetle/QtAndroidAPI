#include "./JSONException.hpp"

namespace org::json
{
	// Fields
	
	JSONException::JSONException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	JSONException::JSONException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	JSONException::JSONException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	JSONException::JSONException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace org::json

