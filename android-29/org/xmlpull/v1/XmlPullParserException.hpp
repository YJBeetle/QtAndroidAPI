#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"


namespace org::xmlpull::v1
{
	class XmlPullParserException : public java::lang::Exception
	{
	public:
		// Fields
		
		XmlPullParserException(QAndroidJniObject obj);
		// Constructors
		XmlPullParserException(jstring arg0);
		XmlPullParserException(jstring arg0, __JniBaseClass arg1, jthrowable arg2);
		XmlPullParserException() = default;
		
		// Methods
		jint getColumnNumber();
		jthrowable getDetail();
		jint getLineNumber();
		void printStackTrace();
	};
} // namespace org::xmlpull::v1

