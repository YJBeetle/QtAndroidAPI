#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
namespace android::telecom
{
	class CallAttributes;
}
namespace android::telecom
{
	class PhoneAccountHandle;
}
class JString;

namespace android::telecom
{
	class CallAttributes_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CallAttributes_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CallAttributes_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CallAttributes_Builder(android::telecom::PhoneAccountHandle arg0, jint arg1, JString arg2, android::net::Uri arg3);
		
		// Methods
		android::telecom::CallAttributes build() const;
		android::telecom::CallAttributes_Builder setCallCapabilities(jint arg0) const;
		android::telecom::CallAttributes_Builder setCallType(jint arg0) const;
	};
} // namespace android::telecom

