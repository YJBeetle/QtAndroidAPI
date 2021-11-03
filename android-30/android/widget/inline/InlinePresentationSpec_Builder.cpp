#include "../../os/Bundle.hpp"
#include "../../util/Size.hpp"
#include "./InlinePresentationSpec.hpp"
#include "./InlinePresentationSpec_Builder.hpp"

namespace android::widget::inline
{
	// Fields
	
	// QJniObject forward
	InlinePresentationSpec_Builder::InlinePresentationSpec_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	InlinePresentationSpec_Builder::InlinePresentationSpec_Builder(android::util::Size arg0, android::util::Size arg1)
		: JObject(
			"android.widget.inline.InlinePresentationSpec$Builder",
			"(Landroid/util/Size;Landroid/util/Size;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::widget::inline::InlinePresentationSpec InlinePresentationSpec_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/widget/inline/InlinePresentationSpec;"
		);
	}
	android::widget::inline::InlinePresentationSpec_Builder InlinePresentationSpec_Builder::setStyle(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setStyle",
			"(Landroid/os/Bundle;)Landroid/widget/inline/InlinePresentationSpec$Builder;",
			arg0.object()
		);
	}
} // namespace android::widget::inline

