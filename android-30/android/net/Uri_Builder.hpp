#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::net
{
	class Uri_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Uri_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Uri_Builder(QJniObject obj);
		
		// Constructors
		Uri_Builder();
		
		// Methods
		android::net::Uri_Builder appendEncodedPath(jstring arg0);
		android::net::Uri_Builder appendPath(jstring arg0);
		android::net::Uri_Builder appendQueryParameter(jstring arg0, jstring arg1);
		android::net::Uri_Builder authority(jstring arg0);
		android::net::Uri build();
		android::net::Uri_Builder clearQuery();
		android::net::Uri_Builder encodedAuthority(jstring arg0);
		android::net::Uri_Builder encodedFragment(jstring arg0);
		android::net::Uri_Builder encodedOpaquePart(jstring arg0);
		android::net::Uri_Builder encodedPath(jstring arg0);
		android::net::Uri_Builder encodedQuery(jstring arg0);
		android::net::Uri_Builder fragment(jstring arg0);
		android::net::Uri_Builder opaquePart(jstring arg0);
		android::net::Uri_Builder path(jstring arg0);
		android::net::Uri_Builder query(jstring arg0);
		android::net::Uri_Builder scheme(jstring arg0);
		jstring toString();
	};
} // namespace android::net

