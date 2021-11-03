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
		
		// QJniObject forward
		template<typename ...Ts> explicit UserDictionary(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UserDictionary(QJniObject obj);
		
		// Constructors
		UserDictionary();
		
		// Methods
	};
} // namespace android::provider

