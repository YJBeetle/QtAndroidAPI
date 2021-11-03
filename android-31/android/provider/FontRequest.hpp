#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class FontRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FontRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FontRequest(QJniObject obj);
		
		// Constructors
		FontRequest(jstring arg0, jstring arg1, jstring arg2);
		FontRequest(jstring arg0, jstring arg1, jstring arg2, JObject arg3);
		
		// Methods
		JObject getCertificates();
		jstring getProviderAuthority();
		jstring getProviderPackage();
		jstring getQuery();
		jstring toString();
	};
} // namespace android::provider

