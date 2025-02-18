#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class PersistableBundle;
}
class JString;

namespace android::adservices::ondevicepersonalization
{
	class ExecuteInput : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExecuteInput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExecuteInput(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString getAppPackageName() const;
		android::os::PersistableBundle getAppParams() const;
	};
} // namespace android::adservices::ondevicepersonalization

