#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class Contacts : public JObject
	{
	public:
		// Fields
		static JString AUTHORITY();
		static android::net::Uri CONTENT_URI();
		static jint KIND_EMAIL();
		static jint KIND_IM();
		static jint KIND_ORGANIZATION();
		static jint KIND_PHONE();
		static jint KIND_POSTAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Contacts(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Contacts(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

