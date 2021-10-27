#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class UserDictionary : public __JniBaseClass
	{
	public:
		// Fields
		static jstring AUTHORITY();
		static QAndroidJniObject CONTENT_URI();
		
		UserDictionary(QAndroidJniObject obj);
		// Constructors
		UserDictionary();
		
		// Methods
	};
} // namespace android::provider

