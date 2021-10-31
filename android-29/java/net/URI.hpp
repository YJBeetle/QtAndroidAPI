#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::lang
{
	class StringBuilder;
}
namespace java::net
{
	class URL;
}
namespace java::nio::charset
{
	class CharsetEncoder;
}

namespace java::net
{
	class URI : public __JniBaseClass
	{
	public:
		// Fields
		
		URI(QAndroidJniObject obj);
		// Constructors
		URI(jstring arg0);
		URI(jstring arg0, jstring arg1, jstring arg2);
		URI(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		URI(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4);
		URI(jstring arg0, jstring arg1, jstring arg2, jint arg3, jstring arg4, jstring arg5, jstring arg6);
		URI() = default;
		
		// Methods
		static QAndroidJniObject create(jstring arg0);
		jint compareTo(jobject arg0);
		jint compareTo(java::net::URI arg0);
		jboolean equals(jobject arg0);
		jstring getAuthority();
		jstring getFragment();
		jstring getHost();
		jstring getPath();
		jint getPort();
		jstring getQuery();
		jstring getRawAuthority();
		jstring getRawFragment();
		jstring getRawPath();
		jstring getRawQuery();
		jstring getRawSchemeSpecificPart();
		jstring getRawUserInfo();
		jstring getScheme();
		jstring getSchemeSpecificPart();
		jstring getUserInfo();
		jint hashCode();
		jboolean isAbsolute();
		jboolean isOpaque();
		QAndroidJniObject normalize();
		QAndroidJniObject parseServerAuthority();
		QAndroidJniObject relativize(java::net::URI arg0);
		QAndroidJniObject resolve(jstring arg0);
		QAndroidJniObject resolve(java::net::URI arg0);
		jstring toASCIIString();
		jstring toString();
		QAndroidJniObject toURL();
	};
} // namespace java::net

