#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class Settings_NameValueTable : public JObject
	{
	public:
		// Fields
		static JString NAME();
		static JString VALUE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Settings_NameValueTable(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Settings_NameValueTable(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Settings_NameValueTable();
		
		// Methods
		static android::net::Uri getUriFor(android::net::Uri arg0, JString arg1);
	};
} // namespace android::provider

