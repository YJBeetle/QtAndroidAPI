#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JObject;
class JString;

namespace android::content
{
	class IntentFilter_AuthorityEntry : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IntentFilter_AuthorityEntry(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IntentFilter_AuthorityEntry(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		IntentFilter_AuthorityEntry(JString arg0, JString arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getHost() const;
		jint getPort() const;
		jint match(android::net::Uri arg0) const;
	};
} // namespace android::content

