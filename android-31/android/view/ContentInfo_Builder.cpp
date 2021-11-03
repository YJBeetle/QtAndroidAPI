#include "../content/ClipData.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "./ContentInfo.hpp"
#include "./ContentInfo_Builder.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	ContentInfo_Builder::ContentInfo_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ContentInfo_Builder::ContentInfo_Builder(android::view::ContentInfo arg0)
		: JObject(
			"android.view.ContentInfo$Builder",
			"(Landroid/view/ContentInfo;)V",
			arg0.object()
		) {}
	ContentInfo_Builder::ContentInfo_Builder(android::content::ClipData arg0, jint arg1)
		: JObject(
			"android.view.ContentInfo$Builder",
			"(Landroid/content/ClipData;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	android::view::ContentInfo ContentInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/ContentInfo;"
		);
	}
	android::view::ContentInfo_Builder ContentInfo_Builder::setClip(android::content::ClipData arg0) const
	{
		return callObjectMethod(
			"setClip",
			"(Landroid/content/ClipData;)Landroid/view/ContentInfo$Builder;",
			arg0.object()
		);
	}
	android::view::ContentInfo_Builder ContentInfo_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/ContentInfo$Builder;",
			arg0.object()
		);
	}
	android::view::ContentInfo_Builder ContentInfo_Builder::setFlags(jint arg0) const
	{
		return callObjectMethod(
			"setFlags",
			"(I)Landroid/view/ContentInfo$Builder;",
			arg0
		);
	}
	android::view::ContentInfo_Builder ContentInfo_Builder::setLinkUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setLinkUri",
			"(Landroid/net/Uri;)Landroid/view/ContentInfo$Builder;",
			arg0.object()
		);
	}
	android::view::ContentInfo_Builder ContentInfo_Builder::setSource(jint arg0) const
	{
		return callObjectMethod(
			"setSource",
			"(I)Landroid/view/ContentInfo$Builder;",
			arg0
		);
	}
} // namespace android::view

