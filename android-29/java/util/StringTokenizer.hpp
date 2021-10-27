#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class StringTokenizer : public __JniBaseClass
	{
	public:
		// Fields
		
		StringTokenizer(QAndroidJniObject obj);
		// Constructors
		StringTokenizer(jstring &arg0);
		StringTokenizer(const QString &arg0);
		StringTokenizer(jstring &arg0, jstring &arg1);
		StringTokenizer(const QString &arg0, const QString &arg1);
		StringTokenizer(jstring &arg0, jstring &arg1, jboolean &arg2);
		StringTokenizer(const QString &arg0, const QString &arg1, jboolean &arg2);
		StringTokenizer() = default;
		
		// Methods
		jint countTokens();
		jboolean hasMoreElements();
		jboolean hasMoreTokens();
		jobject nextElement();
		jstring nextToken();
		jstring nextToken(jstring arg0);
		jstring nextToken(const QString &arg0);
	};
} // namespace java::util

