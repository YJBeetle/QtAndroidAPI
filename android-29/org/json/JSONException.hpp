#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace org::json
{
	class JSONException : public java::lang::Exception
	{
	public:
		// Fields
		
		JSONException(QAndroidJniObject obj);
		// Constructors
		JSONException(jstring &arg0);
		JSONException(const QString &arg0);
		JSONException(jthrowable &arg0);
		JSONException(jstring &arg0, jthrowable &arg1);
		JSONException(const QString &arg0, jthrowable &arg1);
		JSONException() = default;
		
		// Methods
	};
} // namespace org::json

