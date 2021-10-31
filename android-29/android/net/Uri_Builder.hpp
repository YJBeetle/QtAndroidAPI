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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Uri_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Uri_Builder(QAndroidJniObject obj);
		
		// Constructors
		Uri_Builder();
		
		// Methods
		QAndroidJniObject appendEncodedPath(jstring arg0);
		QAndroidJniObject appendPath(jstring arg0);
		QAndroidJniObject appendQueryParameter(jstring arg0, jstring arg1);
		QAndroidJniObject authority(jstring arg0);
		QAndroidJniObject build();
		QAndroidJniObject clearQuery();
		QAndroidJniObject encodedAuthority(jstring arg0);
		QAndroidJniObject encodedFragment(jstring arg0);
		QAndroidJniObject encodedOpaquePart(jstring arg0);
		QAndroidJniObject encodedPath(jstring arg0);
		QAndroidJniObject encodedQuery(jstring arg0);
		QAndroidJniObject fragment(jstring arg0);
		QAndroidJniObject opaquePart(jstring arg0);
		QAndroidJniObject path(jstring arg0);
		QAndroidJniObject query(jstring arg0);
		QAndroidJniObject scheme(jstring arg0);
		jstring toString();
	};
} // namespace android::net

