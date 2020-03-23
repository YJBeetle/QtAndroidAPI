#pragma once

#ifndef ORG_JSON_JSONEXCEPTION
#define ORG_JSON_JSONEXCEPTION

#include "../../java/lang/Exception.hpp"


namespace __jni_impl::org::json
{
	class JSONException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jthrowable arg0);
		
		// Methods
	};
} // namespace __jni_impl::org::json


namespace __jni_impl::org::json
{
	// Fields
	
	// Constructors
	void JSONException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void JSONException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void JSONException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::org::json

namespace org::json
{
	class JSONException : public __jni_impl::org::json::JSONException
	{
	public:
		JSONException(QAndroidJniObject obj) { __thiz = obj; }
		JSONException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		JSONException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		JSONException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace org::json

#endif // ORG_JSON_JSONEXCEPTION

