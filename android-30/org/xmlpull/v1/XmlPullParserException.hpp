#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"


namespace org::xmlpull::v1
{
	class XmlPullParserException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit XmlPullParserException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		XmlPullParserException(QAndroidJniObject obj);
		
		// Constructors
		XmlPullParserException(jstring arg0);
		XmlPullParserException(jstring arg0, __JniBaseClass arg1, jthrowable arg2);
		
		// Methods
		jint getColumnNumber();
		jthrowable getDetail();
		jint getLineNumber();
		void printStackTrace();
	};
} // namespace org::xmlpull::v1

