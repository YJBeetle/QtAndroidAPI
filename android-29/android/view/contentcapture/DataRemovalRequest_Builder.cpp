#include "../../content/LocusId.hpp"
#include "./DataRemovalRequest.hpp"
#include "./DataRemovalRequest_Builder.hpp"

namespace android::view::contentcapture
{
	// Fields
	
	// QAndroidJniObject forward
	DataRemovalRequest_Builder::DataRemovalRequest_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DataRemovalRequest_Builder::DataRemovalRequest_Builder()
		: __JniBaseClass(
			"android.view.contentcapture.DataRemovalRequest$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject DataRemovalRequest_Builder::addLocusId(android::content::LocusId arg0, jint arg1)
	{
		return callObjectMethod(
			"addLocusId",
			"(Landroid/content/LocusId;I)Landroid/view/contentcapture/DataRemovalRequest$Builder;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject DataRemovalRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/contentcapture/DataRemovalRequest;"
		);
	}
	QAndroidJniObject DataRemovalRequest_Builder::forEverything()
	{
		return callObjectMethod(
			"forEverything",
			"()Landroid/view/contentcapture/DataRemovalRequest$Builder;"
		);
	}
} // namespace android::view::contentcapture

