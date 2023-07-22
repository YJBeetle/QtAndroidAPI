#pragma once

#include "../../../JObject.hpp"

namespace android::content::pm
{
	class CapabilityParams;
}
class JString;

namespace android::content::pm
{
	class CapabilityParams_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CapabilityParams_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CapabilityParams_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		CapabilityParams_Builder(JString arg0, JString arg1);
		
		// Methods
		android::content::pm::CapabilityParams_Builder addAlias(JString arg0) const;
		android::content::pm::CapabilityParams build() const;
	};
} // namespace android::content::pm

