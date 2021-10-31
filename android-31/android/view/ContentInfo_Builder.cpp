#include "../content/ClipData.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "./ContentInfo.hpp"
#include "./ContentInfo_Builder.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	ContentInfo_Builder::ContentInfo_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ContentInfo_Builder::ContentInfo_Builder(android::view::ContentInfo arg0)
		: __JniBaseClass(
			"android.view.ContentInfo$Builder",
			"(Landroid/view/ContentInfo;)V",
			arg0.object()
		) {}
	ContentInfo_Builder::ContentInfo_Builder(android::content::ClipData arg0, jint arg1)
		: __JniBaseClass(
			"android.view.ContentInfo$Builder",
			"(Landroid/content/ClipData;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	android::view::ContentInfo ContentInfo_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/ContentInfo;"
		);
	}
	android::view::ContentInfo_Builder ContentInfo_Builder::setClip(android::content::ClipData arg0)
	{
		return callObjectMethod(
			"setClip",
			"(Landroid/content/ClipData;)Landroid/view/ContentInfo$Builder;",
			arg0.object()
		);
	}
	android::view::ContentInfo_Builder ContentInfo_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/ContentInfo$Builder;",
			arg0.object()
		);
	}
	android::view::ContentInfo_Builder ContentInfo_Builder::setFlags(jint arg0)
	{
		return callObjectMethod(
			"setFlags",
			"(I)Landroid/view/ContentInfo$Builder;",
			arg0
		);
	}
	android::view::ContentInfo_Builder ContentInfo_Builder::setLinkUri(android::net::Uri arg0)
	{
		return callObjectMethod(
			"setLinkUri",
			"(Landroid/net/Uri;)Landroid/view/ContentInfo$Builder;",
			arg0.object()
		);
	}
	android::view::ContentInfo_Builder ContentInfo_Builder::setSource(jint arg0)
	{
		return callObjectMethod(
			"setSource",
			"(I)Landroid/view/ContentInfo$Builder;",
			arg0
		);
	}
} // namespace android::view

