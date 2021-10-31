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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UriMatcher(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UriMatcher(QAndroidJniObject obj);
		
		// Constructors
		UriMatcher(jint arg0);
		
		// Methods
		void addURI(jstring arg0, jstring arg1, jint arg2);
		jint match(android::net::Uri arg0);
	};
} // namespace android::content

