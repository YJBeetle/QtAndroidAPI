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
		StringTokenizer(jstring arg0);
		StringTokenizer(jstring arg0, jstring arg1);
		StringTokenizer(jstring arg0, jstring arg1, jboolean arg2);
		StringTokenizer() = default;
		
		// Methods
		jint countTokens();
		jboolean hasMoreElements();
		jboolean hasMoreTokens();
		jobject nextElement();
		jstring nextToken();
		jstring nextToken(jstring arg0);
	};
} // namespace java::util

