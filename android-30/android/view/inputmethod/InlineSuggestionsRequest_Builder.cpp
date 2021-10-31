#include "../../os/Bundle.hpp"
#include "../../os/LocaleList.hpp"
#include "./InlineSuggestionsRequest.hpp"
#include "../../widget/inline/InlinePresentationSpec.hpp"
#include "./InlineSuggestionsRequest_Builder.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// QJniObject forward
	InlineSuggestionsRequest_Builder::InlineSuggestionsRequest_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	InlineSuggestionsRequest_Builder::InlineSuggestionsRequest_Builder(__JniBaseClass arg0)
		: __JniBaseClass(
			"android.view.inputmethod.InlineSuggestionsRequest$Builder",
			"(Ljava/util/List;)V",
			arg0.object()
		) {}
	
	// Methods
	android::view::inputmethod::InlineSuggestionsRequest_Builder InlineSuggestionsRequest_Builder::addInlinePresentationSpecs(android::widget::inline::InlinePresentationSpec arg0)
	{
		return callObjectMethod(
			"addInlinePresentationSpecs",
			"(Landroid/widget/inline/InlinePresentationSpec;)Landroid/view/inputmethod/InlineSuggestionsRequest$Builder;",
			arg0.object()
		);
	}
	android::view::inputmethod::InlineSuggestionsRequest InlineSuggestionsRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/inputmethod/InlineSuggestionsRequest;"
		);
	}
	android::view::inputmethod::InlineSuggestionsRequest_Builder InlineSuggestionsRequest_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/inputmethod/InlineSuggestionsRequest$Builder;",
			arg0.object()
		);
	}
	android::view::inputmethod::InlineSuggestionsRequest_Builder InlineSuggestionsRequest_Builder::setInlinePresentationSpecs(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setInlinePresentationSpecs",
			"(Ljava/util/List;)Landroid/view/inputmethod/InlineSuggestionsRequest$Builder;",
			arg0.object()
		);
	}
	android::view::inputmethod::InlineSuggestionsRequest_Builder InlineSuggestionsRequest_Builder::setMaxSuggestionCount(jint arg0)
	{
		return callObjectMethod(
			"setMaxSuggestionCount",
			"(I)Landroid/view/inputmethod/InlineSuggestionsRequest$Builder;",
			arg0
		);
	}
	android::view::inputmethod::InlineSuggestionsRequest_Builder InlineSuggestionsRequest_Builder::setSupportedLocales(android::os::LocaleList arg0)
	{
		return callObjectMethod(
			"setSupportedLocales",
			"(Landroid/os/LocaleList;)Landroid/view/inputmethod/InlineSuggestionsRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::inputmethod

