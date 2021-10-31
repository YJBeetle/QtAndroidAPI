#pragma once

#include "../../../__JniBaseClass.hpp"

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
namespace android::widget::inline
{
	class InlinePresentationSpec;
}

namespace android::view::inputmethod
{
	class InlineSuggestionsRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InlineSuggestionsRequest_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		InlineSuggestionsRequest_Builder(QJniObject obj);
		
		// Constructors
		InlineSuggestionsRequest_Builder(__JniBaseClass arg0);
		
		// Methods
		android::view::inputmethod::InlineSuggestionsRequest_Builder addInlinePresentationSpecs(android::widget::inline::InlinePresentationSpec arg0);
		android::view::inputmethod::InlineSuggestionsRequest build();
		android::view::inputmethod::InlineSuggestionsRequest_Builder setExtras(android::os::Bundle arg0);
		android::view::inputmethod::InlineSuggestionsRequest_Builder setInlinePresentationSpecs(__JniBaseClass arg0);
		android::view::inputmethod::InlineSuggestionsRequest_Builder setInlineTooltipPresentationSpec(android::widget::inline::InlinePresentationSpec arg0);
		android::view::inputmethod::InlineSuggestionsRequest_Builder setMaxSuggestionCount(jint arg0);
		android::view::inputmethod::InlineSuggestionsRequest_Builder setSupportedLocales(android::os::LocaleList arg0);
	};
} // namespace android::view::inputmethod

