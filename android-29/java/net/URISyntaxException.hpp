#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"


namespace java::net
{
	class URISyntaxException : public java::lang::Exception
	{
	public:
		// Fields
		
		URISyntaxException(QAndroidJniObject obj);
		// Constructors
		URISyntaxException(jstring &arg0, jstring &arg1);
		URISyntaxException(const QString &arg0, const QString &arg1);
		URISyntaxException(jstring &arg0, jstring &arg1, jint &arg2);
		URISyntaxException(const QString &arg0, const QString &arg1, jint &arg2);
		URISyntaxException() = default;
		
		// Methods
		jint getIndex();
		jstring getInput();
		jstring getMessage();
		jstring getReason();
	};
} // namespace java::net

