#pragma once

#include "../../../JObject.hpp"

namespace android::content::pm
{
	class Capability;
}
class JString;

namespace android::content::pm
{
	class Capability_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Capability_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Capability_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Capability_Builder(JString arg0);
		
		// Methods
		android::content::pm::Capability build() const;
	};
} // namespace android::content::pm

