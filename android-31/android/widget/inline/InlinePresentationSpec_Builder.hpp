#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../util/Size.def.hpp"
#include "./InlinePresentationSpec.def.hpp"
#include "./InlinePresentationSpec_Builder.def.hpp"

namespace android::widget::inline_
{
	// Fields
	
	// Constructors
	inline InlinePresentationSpec_Builder::InlinePresentationSpec_Builder(android::util::Size arg0, android::util::Size arg1)
		: JObject(
			"android.widget.inline.InlinePresentationSpec$Builder",
			"(Landroid/util/Size;Landroid/util/Size;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::widget::inline_::InlinePresentationSpec InlinePresentationSpec_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/widget/inline/InlinePresentationSpec;"
		);
	}
	inline android::widget::inline_::InlinePresentationSpec_Builder InlinePresentationSpec_Builder::setStyle(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setStyle",
			"(Landroid/os/Bundle;)Landroid/widget/inline/InlinePresentationSpec$Builder;",
			arg0.object()
		);
	}
} // namespace android::widget::inline_

// Base class headers

