#pragma once

#include "../../content/LocusId.def.hpp"
#include "./DataRemovalRequest.def.hpp"
#include "./DataRemovalRequest_Builder.def.hpp"

namespace android::view::contentcapture
{
	// Fields
	
	// Constructors
	inline DataRemovalRequest_Builder::DataRemovalRequest_Builder()
		: JObject(
			"android.view.contentcapture.DataRemovalRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::contentcapture::DataRemovalRequest_Builder DataRemovalRequest_Builder::addLocusId(android::content::LocusId arg0, jint arg1) const
	{
		return callObjectMethod(
			"addLocusId",
			"(Landroid/content/LocusId;I)Landroid/view/contentcapture/DataRemovalRequest$Builder;",
			arg0.object(),
			arg1
		);
	}
	inline android::view::contentcapture::DataRemovalRequest DataRemovalRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/contentcapture/DataRemovalRequest;"
		);
	}
	inline android::view::contentcapture::DataRemovalRequest_Builder DataRemovalRequest_Builder::forEverything() const
	{
		return callObjectMethod(
			"forEverything",
			"()Landroid/view/contentcapture/DataRemovalRequest$Builder;"
		);
	}
} // namespace android::view::contentcapture

// Base class headers

