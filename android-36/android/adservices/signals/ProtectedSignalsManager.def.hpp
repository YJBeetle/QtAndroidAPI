#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::signals
{
	class UpdateSignalsRequest;
}
namespace android::content
{
	class Context;
}

namespace android::adservices::signals
{
	class ProtectedSignalsManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ProtectedSignalsManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ProtectedSignalsManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::adservices::signals::ProtectedSignalsManager get(android::content::Context arg0);
		void updateSignals(android::adservices::signals::UpdateSignalsRequest arg0, JObject arg1, JObject arg2) const;
	};
} // namespace android::adservices::signals

