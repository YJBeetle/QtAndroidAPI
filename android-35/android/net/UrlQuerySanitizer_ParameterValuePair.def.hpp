#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class UrlQuerySanitizer;
}
class JString;

namespace android::net
{
	class UrlQuerySanitizer_ParameterValuePair : public JObject
	{
	public:
		// Fields
		JString mParameter();
		JString mValue();
		
		// QJniObject forward
		template<typename ...Ts> explicit UrlQuerySanitizer_ParameterValuePair(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UrlQuerySanitizer_ParameterValuePair(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		UrlQuerySanitizer_ParameterValuePair(android::net::UrlQuerySanitizer arg0, JString arg1, JString arg2);
		
		// Methods
	};
} // namespace android::net

