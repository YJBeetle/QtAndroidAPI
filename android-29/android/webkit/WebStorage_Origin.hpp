#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::webkit
{
	class WebStorage_Origin : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebStorage_Origin(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebStorage_Origin(QJniObject obj);
		
		// Constructors
		
		// Methods
		JString getOrigin();
		jlong getQuota();
		jlong getUsage();
	};
} // namespace android::webkit

