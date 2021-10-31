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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Contacts(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Contacts(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

