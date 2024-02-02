#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}
class JString;
class JString;

namespace android::provider
{
	class Contacts_Organizations : public JObject
	{
	public:
		// Fields
		static JString CONTENT_DIRECTORY();
		static android::net::Uri CONTENT_URI();
		static JString DEFAULT_SORT_ORDER();
		
		// QJniObject forward
		template<typename ...Ts> explicit Contacts_Organizations(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_Organizations(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString getDisplayLabel(android::content::Context arg0, jint arg1, JString arg2);
	};
} // namespace android::provider

