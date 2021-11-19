#include "../../os/Bundle.hpp"
#include "../../os/LocaleList.hpp"
#include "./InlineSuggestionsRequest.hpp"
#include "../../widget/inline/InlinePresentationSpec.hpp"
#include "./InlineSuggestionsRequest_Builder.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// QJniObject forward
	InlineSuggestionsRequest_Builder::InlineSuggestionsRequest_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	InlineSuggestionsRequest_Builder::InlineSuggestionsRequest_Builder(JObject arg0)
		: JObject(
			"android.view.inputmethod.InlineSuggestionsRequest$Builder",
			"(Ljava/util/List;)V",
			arg0.object()
		) {}
	
	// Methods
	android::view::inputmethod::InlineSuggestionsRequest_Builder InlineSuggestionsRequest_Builder::addInlinePresentationSpecs(android::widget::inline_::InlinePresentationSpec arg0) const
	{
		return callObjectMethod(
			"addInlinePresentationSpecs",
			"(Landroid/widget/inline/InlinePresentationSpec;)Landroid/view/inputmethod/InlineSuggestionsRequest$Builder;",
			arg0.object()
		);
	}
	android::view::inputmethod::InlineSuggestionsRequest InlineSuggestionsRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/inputmethod/InlineSuggestionsRequest;"
		);
	}
	android::view::inputmethod::InlineSuggestionsRequest_Builder InlineSuggestionsRequest_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/inputmethod/InlineSuggestionsRequest$Builder;",
			arg0.object()
		);
	}
	android::view::inputmethod::InlineSuggestionsRequest_Builder InlineSuggestionsRequest_Builder::setInlinePresentationSpecs(JObject arg0) const
	{
		return callObjectMethod(
			"setInlinePresentationSpecs",
			"(Ljava/util/List;)Landroid/view/inputmethod/InlineSuggestionsRequest$Builder;",
			arg0.object()
		);
	}
	android::view::inputmethod::InlineSuggestionsRequest_Builder InlineSuggestionsRequest_Builder::setInlineTooltipPresentationSpec(android::widget::inline_::InlinePresentationSpec arg0) const
	{
		return callObjectMethod(
			"setInlineTooltipPresentationSpec",
			"(Landroid/widget/inline/InlinePresentationSpec;)Landroid/view/inputmethod/InlineSuggestionsRequest$Builder;",
			arg0.object()
		);
	}
	android::view::inputmethod::InlineSuggestionsRequest_Builder InlineSuggestionsRequest_Builder::setMaxSuggestionCount(jint arg0) const
	{
		return callObjectMethod(
			"setMaxSuggestionCount",
			"(I)Landroid/view/inputmethod/InlineSuggestionsRequest$Builder;",
			arg0
		);
	}
	android::view::inputmethod::InlineSuggestionsRequest_Builder InlineSuggestionsRequest_Builder::setSupportedLocales(android::os::LocaleList arg0) const
	{
		return callObjectMethod(
			"setSupportedLocales",
			"(Landroid/os/LocaleList;)Landroid/view/inputmethod/InlineSuggestionsRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::inputmethod

