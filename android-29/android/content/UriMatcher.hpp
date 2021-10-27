#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::content
{
	class UriMatcher : public __JniBaseClass
	{
	public:
		// Fields
		static jint NO_MATCH();
		
		UriMatcher(QAndroidJniObject obj);
		// Constructors
		UriMatcher(jint &arg0);
		UriMatcher() = default;
		
		// Methods
		void addURI(jstring arg0, jstring arg1, jint arg2);
		void addURI(const QString &arg0, const QString &arg1, jint arg2);
		jint match(android::net::Uri arg0);
	};
} // namespace android::content

