#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::net
{
	class Uri_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Uri_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Uri_Builder(QJniObject obj);
		
		// Constructors
		Uri_Builder();
		
		// Methods
		android::net::Uri_Builder appendEncodedPath(JString arg0);
		android::net::Uri_Builder appendPath(JString arg0);
		android::net::Uri_Builder appendQueryParameter(JString arg0, JString arg1);
		android::net::Uri_Builder authority(JString arg0);
		android::net::Uri build();
		android::net::Uri_Builder clearQuery();
		android::net::Uri_Builder encodedAuthority(JString arg0);
		android::net::Uri_Builder encodedFragment(JString arg0);
		android::net::Uri_Builder encodedOpaquePart(JString arg0);
		android::net::Uri_Builder encodedPath(JString arg0);
		android::net::Uri_Builder encodedQuery(JString arg0);
		android::net::Uri_Builder fragment(JString arg0);
		android::net::Uri_Builder opaquePart(JString arg0);
		android::net::Uri_Builder path(JString arg0);
		android::net::Uri_Builder query(JString arg0);
		android::net::Uri_Builder scheme(JString arg0);
		JString toString();
	};
} // namespace android::net

