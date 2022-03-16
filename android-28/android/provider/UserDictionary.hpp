#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class UserDictionary : public JObject
	{
	public:
		// Fields
		static JString AUTHORITY();
		static android::net::Uri CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UserDictionary(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UserDictionary(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		UserDictionary();
		
		// Methods
	};
} // namespace android::provider

