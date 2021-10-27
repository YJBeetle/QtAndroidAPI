#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}
namespace android::net
{
	class Uri_Builder;
}

namespace android::content
{
	class ContentUris : public __JniBaseClass
	{
	public:
		// Fields
		
		ContentUris(QAndroidJniObject obj);
		// Constructors
		ContentUris();
		
		// Methods
		static QAndroidJniObject appendId(android::net::Uri_Builder arg0, jlong arg1);
		static jlong parseId(android::net::Uri arg0);
		static QAndroidJniObject removeId(android::net::Uri arg0);
		static QAndroidJniObject withAppendedId(android::net::Uri arg0, jlong arg1);
	};
} // namespace android::content

