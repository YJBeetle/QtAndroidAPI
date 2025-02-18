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
		
		// QJniObject forward
		template<typename ...Ts> explicit UriMatcher(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UriMatcher(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		UriMatcher(jint arg0);
		
		// Methods
		void addURI(JString arg0, JString arg1, jint arg2) const;
		jint match(android::net::Uri arg0) const;
	};
} // namespace android::content

