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
		static jstring decode(jstring arg0);
		static jstring encode(jstring arg0);
		static jstring encode(jstring arg0, jstring arg1);
		static android::net::Uri fromFile(java::io::File arg0);
		static android::net::Uri fromParts(jstring arg0, jstring arg1, jstring arg2);
		static android::net::Uri parse(jstring arg0);
		static android::net::Uri withAppendedPath(android::net::Uri arg0, jstring arg1);
		static void writeToParcel(android::os::Parcel arg0, android::net::Uri arg1);
		android::net::Uri_Builder buildUpon();
		jint compareTo(android::net::Uri arg0);
		jint compareTo(jobject arg0);
		jboolean equals(jobject arg0);
		jstring getAuthority();
		jboolean getBooleanQueryParameter(jstring arg0, jboolean arg1);
		jstring getEncodedAuthority();
		jstring getEncodedFragment();
		jstring getEncodedPath();
		jstring getEncodedQuery();
		jstring getEncodedSchemeSpecificPart();
		jstring getEncodedUserInfo();
		jstring getFragment();
		jstring getHost();
		jstring getLastPathSegment();
		jstring getPath();
		JObject getPathSegments();
		jint getPort();
		jstring getQuery();
		jstring getQueryParameter(jstring arg0);
		JObject getQueryParameterNames();
		JObject getQueryParameters(jstring arg0);
		jstring getScheme();
		jstring getSchemeSpecificPart();
		jstring getUserInfo();
		jint hashCode();
		jboolean isAbsolute();
		jboolean isHierarchical();
		jboolean isOpaque();
		jboolean isRelative();
		android::net::Uri normalizeScheme();
		jstring toString();
	};
} // namespace android::net

