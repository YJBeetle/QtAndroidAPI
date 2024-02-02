#pragma once

#include "./JobWorkItem.def.hpp"
#include "../../content/Intent.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "./JobWorkItem_Builder.def.hpp"

namespace android::app::job
{
	// Fields
	
	// Constructors
	inline JobWorkItem_Builder::JobWorkItem_Builder()
		: JObject(
			"android.app.job.JobWorkItem$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::app::job::JobWorkItem JobWorkItem_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/job/JobWorkItem;"
		);
	}
	inline android::app::job::JobWorkItem_Builder JobWorkItem_Builder::setEstimatedNetworkBytes(jlong arg0, jlong arg1) const
	{
		return callObjectMethod(
			"setEstimatedNetworkBytes",
			"(JJ)Landroid/app/job/JobWorkItem$Builder;",
			arg0,
			arg1
		);
	}
	inline android::app::job::JobWorkItem_Builder JobWorkItem_Builder::setExtras(android::os::PersistableBundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/PersistableBundle;)Landroid/app/job/JobWorkItem$Builder;",
			arg0.object()
		);
	}
	inline android::app::job::JobWorkItem_Builder JobWorkItem_Builder::setIntent(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"setIntent",
			"(Landroid/content/Intent;)Landroid/app/job/JobWorkItem$Builder;",
			arg0.object()
		);
	}
	inline android::app::job::JobWorkItem_Builder JobWorkItem_Builder::setMinimumNetworkChunkBytes(jlong arg0) const
	{
		return callObjectMethod(
			"setMinimumNetworkChunkBytes",
			"(J)Landroid/app/job/JobWorkItem$Builder;",
			arg0
		);
	}
} // namespace android::app::job

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::job;
#endif
