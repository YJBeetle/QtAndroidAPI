#include "../../content/LocusId.hpp"
#include "./DataRemovalRequest.hpp"
#include "./DataRemovalRequest_Builder.hpp"

namespace android::view::contentcapture
{
	// Fields
	
	// QJniObject forward
	DataRemovalRequest_Builder::DataRemovalRequest_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DataRemovalRequest_Builder::DataRemovalRequest_Builder()
		: JObject(
			"android.view.contentcapture.DataRemovalRequest$Builder",
			"()V"
		) {}
	
	// Methods
	android::view::contentcapture::DataRemovalRequest_Builder DataRemovalRequest_Builder::addLocusId(android::content::LocusId arg0, jint arg1)
	{
		return callObjectMethod(
			"addLocusId",
			"(Landroid/content/LocusId;I)Landroid/view/contentcapture/DataRemovalRequest$Builder;",
			arg0.object(),
			arg1
		);
	}
	android::view::contentcapture::DataRemovalRequest DataRemovalRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/contentcapture/DataRemovalRequest;"
		);
	}
	android::view::contentcapture::DataRemovalRequest_Builder DataRemovalRequest_Builder::forEverything()
	{
		return callObjectMethod(
			"forEverything",
			"()Landroid/view/contentcapture/DataRemovalRequest$Builder;"
		);
	}
} // namespace android::view::contentcapture

