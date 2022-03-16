#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class LocaleList;
}
namespace android::view::inputmethod
{
	class InlineSuggestionsRequest;
}
namespace android::widget::inline_
{
	class InlinePresentationSpec;
}

namespace android::view::inputmethod
{
	class InlineSuggestionsRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InlineSuggestionsRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InlineSuggestionsRequest_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		InlineSuggestionsRequest_Builder(JObject arg0);
		
		// Methods
		android::view::inputmethod::InlineSuggestionsRequest_Builder addInlinePresentationSpecs(android::widget::inline_::InlinePresentationSpec arg0) const;
		android::view::inputmethod::InlineSuggestionsRequest build() const;
		android::view::inputmethod::InlineSuggestionsRequest_Builder setExtras(android::os::Bundle arg0) const;
		android::view::inputmethod::InlineSuggestionsRequest_Builder setInlinePresentationSpecs(JObject arg0) const;
		android::view::inputmethod::InlineSuggestionsRequest_Builder setInlineTooltipPresentationSpec(android::widget::inline_::InlinePresentationSpec arg0) const;
		android::view::inputmethod::InlineSuggestionsRequest_Builder setMaxSuggestionCount(jint arg0) const;
		android::view::inputmethod::InlineSuggestionsRequest_Builder setSupportedLocales(android::os::LocaleList arg0) const;
	};
} // namespace android::view::inputmethod

