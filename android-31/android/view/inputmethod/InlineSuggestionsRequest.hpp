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
namespace android::os
{
	class Parcel;
}
namespace android::widget::inline_
{
	class InlinePresentationSpec;
}
class JObject;
class JString;

namespace android::view::inputmethod
{
	class InlineSuggestionsRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint SUGGESTION_COUNT_UNLIMITED();
		
		// QJniObject forward
		template<typename ...Ts> explicit InlineSuggestionsRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InlineSuggestionsRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::os::Bundle getExtras() const;
		JString getHostPackageName() const;
		JObject getInlinePresentationSpecs() const;
		android::widget::inline_::InlinePresentationSpec getInlineTooltipPresentationSpec() const;
		jint getMaxSuggestionCount() const;
		android::os::LocaleList getSupportedLocales() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::inputmethod

