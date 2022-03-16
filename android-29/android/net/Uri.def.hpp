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
		
		// QJniObject forward
		template<typename ...Ts> explicit Uri(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Uri(QJniObject obj) : JObject(obj) {}
		
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
		android::net::Uri_Builder buildUpon() const;
		jint compareTo(android::net::Uri arg0) const;
		jint compareTo(JObject arg0) const;
		jboolean equals(JObject arg0) const;
		JString getAuthority() const;
		jboolean getBooleanQueryParameter(JString arg0, jboolean arg1) const;
		JString getEncodedAuthority() const;
		JString getEncodedFragment() const;
		JString getEncodedPath() const;
		JString getEncodedQuery() const;
		JString getEncodedSchemeSpecificPart() const;
		JString getEncodedUserInfo() const;
		JString getFragment() const;
		JString getHost() const;
		JString getLastPathSegment() const;
		JString getPath() const;
		JObject getPathSegments() const;
		jint getPort() const;
		JString getQuery() const;
		JString getQueryParameter(JString arg0) const;
		JObject getQueryParameterNames() const;
		JObject getQueryParameters(JString arg0) const;
		JString getScheme() const;
		JString getSchemeSpecificPart() const;
		JString getUserInfo() const;
		jint hashCode() const;
		jboolean isAbsolute() const;
		jboolean isHierarchical() const;
		jboolean isOpaque() const;
		jboolean isRelative() const;
		android::net::Uri normalizeScheme() const;
		JString toString() const;
	};
} // namespace android::net

