#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class UrlQuerySanitizer;
}

namespace android::net
{
	class UrlQuerySanitizer_ParameterValuePair : public JObject
	{
	public:
		// Fields
		jstring mParameter();
		jstring mValue();
		
		// QJniObject forward
		template<typename ...Ts> explicit UrlQuerySanitizer_ParameterValuePair(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UrlQuerySanitizer_ParameterValuePair(QJniObject obj);
		
		// Constructors
		UrlQuerySanitizer_ParameterValuePair(android::net::UrlQuerySanitizer arg0, jstring arg1, jstring arg2);
		
		// Methods
	};
} // namespace android::net

