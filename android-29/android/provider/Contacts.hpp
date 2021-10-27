#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Contacts : public __JniBaseClass
	{
	public:
		// Fields
		static jstring AUTHORITY();
		static QAndroidJniObject CONTENT_URI();
		static jint KIND_EMAIL();
		static jint KIND_IM();
		static jint KIND_ORGANIZATION();
		static jint KIND_PHONE();
		static jint KIND_POSTAL();
		
		Contacts(QAndroidJniObject obj);
		// Constructors
		Contacts() = default;
		
		// Methods
	};
} // namespace android::provider

