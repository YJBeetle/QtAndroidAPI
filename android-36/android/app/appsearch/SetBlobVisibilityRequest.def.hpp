#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class SetBlobVisibilityRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SetBlobVisibilityRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SetBlobVisibilityRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getNamespacesNotDisplayedBySystem() const;
		JObject getNamespacesVisibleToConfigs() const;
	};
} // namespace android::app::appsearch

