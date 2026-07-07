#pragma once

#include "../../JObject.hpp"

namespace android::ranging
{
	class RangingConfig;
}
namespace android::ranging
{
	class RangingPreference;
}
namespace android::ranging
{
	class SessionConfig;
}

namespace android::ranging
{
	class RangingPreference_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RangingPreference_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RangingPreference_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RangingPreference_Builder(jint arg0, android::ranging::RangingConfig arg1);
		
		// Methods
		android::ranging::RangingPreference build() const;
		android::ranging::RangingPreference_Builder setSessionConfig(android::ranging::SessionConfig arg0) const;
	};
} // namespace android::ranging

