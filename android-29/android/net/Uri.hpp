#pragma once

#include "../../__JniBaseClass.hpp"

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
	class Uri : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static QAndroidJniObject EMPTY();
		
		Uri(QAndroidJniObject obj);
		// Constructors
		Uri() = default;
		
		// Methods
		static jstring decode(jstring arg0);
		static jstring encode(jstring arg0);
		static jstring encode(jstring arg0, jstring arg1);
		static QAndroidJniObject fromFile(java::io::File arg0);
		static QAndroidJniObject fromParts(jstring arg0, jstring arg1, jstring arg2);
		static QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject withAppendedPath(android::net::Uri arg0, jstring arg1);
		static void writeToParcel(android::os::Parcel arg0, android::net::Uri arg1);
		QAndroidJniObject buildUpon();
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
		QAndroidJniObject getPathSegments();
		jint getPort();
		jstring getQuery();
		jstring getQueryParameter(jstring arg0);
		QAndroidJniObject getQueryParameterNames();
		QAndroidJniObject getQueryParameters(jstring arg0);
		jstring getScheme();
		jstring getSchemeSpecificPart();
		jstring getUserInfo();
		jint hashCode();
		jboolean isAbsolute();
		jboolean isHierarchical();
		jboolean isOpaque();
		jboolean isRelative();
		QAndroidJniObject normalizeScheme();
		jstring toString();
	};
} // namespace android::net

