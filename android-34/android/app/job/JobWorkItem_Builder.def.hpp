#pragma once

#include "../../../JObject.hpp"

namespace android::app::job
{
	class JobWorkItem;
}
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class PersistableBundle;
}

namespace android::app::job
{
	class JobWorkItem_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JobWorkItem_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JobWorkItem_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		JobWorkItem_Builder();
		
		// Methods
		android::app::job::JobWorkItem build() const;
		android::app::job::JobWorkItem_Builder setEstimatedNetworkBytes(jlong arg0, jlong arg1) const;
		android::app::job::JobWorkItem_Builder setExtras(android::os::PersistableBundle arg0) const;
		android::app::job::JobWorkItem_Builder setIntent(android::content::Intent arg0) const;
		android::app::job::JobWorkItem_Builder setMinimumNetworkChunkBytes(jlong arg0) const;
	};
} // namespace android::app::job

