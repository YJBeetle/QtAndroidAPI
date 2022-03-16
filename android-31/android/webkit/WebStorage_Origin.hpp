#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::webkit
{
	class WebStorage_Origin : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebStorage_Origin(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebStorage_Origin(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString getOrigin() const;
		jlong getQuota() const;
		jlong getUsage() const;
	};
} // namespace android::webkit

