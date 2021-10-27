#include "../../content/LocusId.hpp"
#include "./DataRemovalRequest.hpp"
#include "./DataRemovalRequest_Builder.hpp"

namespace android::view::contentcapture
{
	// Fields
	
	DataRemovalRequest_Builder::DataRemovalRequest_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DataRemovalRequest_Builder::DataRemovalRequest_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.view.contentcapture.DataRemovalRequest$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject DataRemovalRequest_Builder::addLocusId(android::content::LocusId arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"addLocusId",
			"(Landroid/content/LocusId;I)Landroid/view/contentcapture/DataRemovalRequest$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DataRemovalRequest_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/contentcapture/DataRemovalRequest;"
		);
	}
	QAndroidJniObject DataRemovalRequest_Builder::forEverything()
	{
		return __thiz.callObjectMethod(
			"forEverything",
			"()Landroid/view/contentcapture/DataRemovalRequest$Builder;"
		);
	}
} // namespace android::view::contentcapture

