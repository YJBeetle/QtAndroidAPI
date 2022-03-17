#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class FontRequest : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FontRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FontRequest(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		FontRequest(JString arg0, JString arg1, JString arg2);
		FontRequest(JString arg0, JString arg1, JString arg2, JObject arg3);
		
		// Methods
		JObject getCertificates() const;
		JString getProviderAuthority() const;
		JString getProviderPackage() const;
		JString getQuery() const;
		JString toString() const;
	};
} // namespace android::provider

