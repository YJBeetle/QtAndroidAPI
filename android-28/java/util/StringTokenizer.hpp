#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class StringTokenizer : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StringTokenizer(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StringTokenizer(QJniObject obj);
		
		// Constructors
		StringTokenizer(jstring arg0);
		StringTokenizer(jstring arg0, jstring arg1);
		StringTokenizer(jstring arg0, jstring arg1, jboolean arg2);
		
		// Methods
		jint countTokens();
		jboolean hasMoreElements();
		jboolean hasMoreTokens();
		jobject nextElement();
		jstring nextToken();
		jstring nextToken(jstring arg0);
	};
} // namespace java::util

