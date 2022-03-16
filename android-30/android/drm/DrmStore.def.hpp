#pragma once

#include "../../JObject.hpp"

namespace android::drm
{
	class DrmStore : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DrmStore(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmStore(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DrmStore();
		
		// Methods
	};
} // namespace android::drm

