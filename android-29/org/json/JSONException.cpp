#include "./JSONException.hpp"

namespace org::json
{
	// Fields
	
	JSONException::JSONException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	JSONException::JSONException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	JSONException::JSONException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	JSONException::JSONException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	JSONException::JSONException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	JSONException::JSONException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace org::json

