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
		
		Uri_Builder(QAndroidJniObject obj);
		// Constructors
		Uri_Builder();
		
		// Methods
		QAndroidJniObject appendEncodedPath(jstring arg0);
		QAndroidJniObject appendEncodedPath(const QString &arg0);
		QAndroidJniObject appendPath(jstring arg0);
		QAndroidJniObject appendPath(const QString &arg0);
		QAndroidJniObject appendQueryParameter(jstring arg0, jstring arg1);
		QAndroidJniObject appendQueryParameter(const QString &arg0, const QString &arg1);
		QAndroidJniObject authority(jstring arg0);
		QAndroidJniObject authority(const QString &arg0);
		QAndroidJniObject build();
		QAndroidJniObject clearQuery();
		QAndroidJniObject encodedAuthority(jstring arg0);
		QAndroidJniObject encodedAuthority(const QString &arg0);
		QAndroidJniObject encodedFragment(jstring arg0);
		QAndroidJniObject encodedFragment(const QString &arg0);
		QAndroidJniObject encodedOpaquePart(jstring arg0);
		QAndroidJniObject encodedOpaquePart(const QString &arg0);
		QAndroidJniObject encodedPath(jstring arg0);
		QAndroidJniObject encodedPath(const QString &arg0);
		QAndroidJniObject encodedQuery(jstring arg0);
		QAndroidJniObject encodedQuery(const QString &arg0);
		QAndroidJniObject fragment(jstring arg0);
		QAndroidJniObject fragment(const QString &arg0);
		QAndroidJniObject opaquePart(jstring arg0);
		QAndroidJniObject opaquePart(const QString &arg0);
		QAndroidJniObject path(jstring arg0);
		QAndroidJniObject path(const QString &arg0);
		QAndroidJniObject query(jstring arg0);
		QAndroidJniObject query(const QString &arg0);
		QAndroidJniObject scheme(jstring arg0);
		QAndroidJniObject scheme(const QString &arg0);
		jstring toString();
	};
} // namespace android::net

