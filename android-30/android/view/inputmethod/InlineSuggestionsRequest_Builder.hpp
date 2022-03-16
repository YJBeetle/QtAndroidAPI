#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/LocaleList.def.hpp"
#include "./InlineSuggestionsRequest.def.hpp"
#include "../../widget/inline/InlinePresentationSpec.def.hpp"
#include "./InlineSuggestionsRequest_Builder.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// Constructors
	inline InlineSuggestionsRequest_Builder::InlineSuggestionsRequest_Builder(JObject arg0)
		: JObject(
			"android.view.inputmethod.InlineSuggestionsRequest$Builder",
			"(Ljava/util/List;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::view::inputmethod::InlineSuggestionsRequest_Builder InlineSuggestionsRequest_Builder::addInlinePresentationSpecs(android::widget::inline_::InlinePresentationSpec arg0) const
	{
		return callObjectMethod(
			"addInlinePresentationSpecs",
			"(Landroid/widget/inline/InlinePresentationSpec;)Landroid/view/inputmethod/InlineSuggestionsRequest$Builder;",
			arg0.object()
		);
	}
	inline android::view::inputmethod::InlineSuggestionsRequest InlineSuggestionsRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/inputmethod/InlineSuggestionsRequest;"
		);
	}
	inline android::view::inputmethod::InlineSuggestionsRequest_Builder InlineSuggestionsRequest_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/inputmethod/InlineSuggestionsRequest$Builder;",
			arg0.object()
		);
	}
	inline android::view::inputmethod::InlineSuggestionsRequest_Builder InlineSuggestionsRequest_Builder::setInlinePresentationSpecs(JObject arg0) const
	{
		return callObjectMethod(
			"setInlinePresentationSpecs",
			"(Ljava/util/List;)Landroid/view/inputmethod/InlineSuggestionsRequest$Builder;",
			arg0.object()
		);
	}
	inline android::view::inputmethod::InlineSuggestionsRequest_Builder InlineSuggestionsRequest_Builder::setMaxSuggestionCount(jint arg0) const
	{
		return callObjectMethod(
			"setMaxSuggestionCount",
			"(I)Landroid/view/inputmethod/InlineSuggestionsRequest$Builder;",
			arg0
		);
	}
	inline android::view::inputmethod::InlineSuggestionsRequest_Builder InlineSuggestionsRequest_Builder::setSupportedLocales(android::os::LocaleList arg0) const
	{
		return callObjectMethod(
			"setSupportedLocales",
			"(Landroid/os/LocaleList;)Landroid/view/inputmethod/InlineSuggestionsRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::inputmethod

// Base class headers

