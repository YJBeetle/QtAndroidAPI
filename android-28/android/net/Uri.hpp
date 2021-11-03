#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri_Builder;
}
namespace android::os
{
	class Parcel;
}
namespace java::io
{
	class File;
}
class JObject;
class JString;

namespace android::net
{
	class Uri : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static android::net::Uri EMPTY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Uri(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Uri(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JString decode(JString arg0);
		static JString encode(JString arg0);
		static JString encode(JString arg0, JString arg1);
		static android::net::Uri fromFile(java::io::File arg0);
		static android::net::Uri fromParts(JString arg0, JString arg1, JString arg2);
		static android::net::Uri parse(JString arg0);
		static android::net::Uri withAppendedPath(android::net::Uri arg0, JString arg1);
		static void writeToParcel(android::os::Parcel arg0, android::net::Uri arg1);
		android::net::Uri_Builder buildUpon();
		jint compareTo(android::net::Uri arg0);
		jint compareTo(JObject arg0);
		jboolean equals(JObject arg0);
		JString getAuthority();
		jboolean getBooleanQueryParameter(JString arg0, jboolean arg1);
		JString getEncodedAuthority();
		JString getEncodedFragment();
		JString getEncodedPath();
		JString getEncodedQuery();
		JString getEncodedSchemeSpecificPart();
		JString getEncodedUserInfo();
		JString getFragment();
		JString getHost();
		JString getLastPathSegment();
		JString getPath();
		JObject getPathSegments();
		jint getPort();
		JString getQuery();
		JString getQueryParameter(JString arg0);
		JObject getQueryParameterNames();
		JObject getQueryParameters(JString arg0);
		JString getScheme();
		JString getSchemeSpecificPart();
		JString getUserInfo();
		jint hashCode();
		jboolean isAbsolute();
		jboolean isHierarchical();
		jboolean isOpaque();
		jboolean isRelative();
		android::net::Uri normalizeScheme();
		JString toString();
	};
} // namespace android::net

