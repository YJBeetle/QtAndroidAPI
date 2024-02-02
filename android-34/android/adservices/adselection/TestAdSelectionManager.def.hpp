#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::adselection
{
	class AddAdSelectionOverrideRequest;
}
namespace android::adservices::adselection
{
	class RemoveAdSelectionOverrideRequest;
}

namespace android::adservices::adselection
{
	class TestAdSelectionManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TestAdSelectionManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TestAdSelectionManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void overrideAdSelectionConfigRemoteInfo(android::adservices::adselection::AddAdSelectionOverrideRequest arg0, JObject arg1, JObject arg2) const;
		void removeAdSelectionConfigRemoteInfoOverride(android::adservices::adselection::RemoveAdSelectionOverrideRequest arg0, JObject arg1, JObject arg2) const;
		void resetAllAdSelectionConfigRemoteOverrides(JObject arg0, JObject arg1) const;
	};
} // namespace android::adservices::adselection

