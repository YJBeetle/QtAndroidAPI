#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::content
{
	class UriMatcher : public JObject
	{
	public:
		// Fields
		static jint NO_MATCH();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UriMatcher(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UriMatcher(QAndroidJniObject obj);
		
		// Constructors
		UriMatcher(jint arg0);
		
		// Methods
		void addURI(JString arg0, JString arg1, jint arg2);
		jint match(android::net::Uri arg0);
	};
} // namespace android::content

