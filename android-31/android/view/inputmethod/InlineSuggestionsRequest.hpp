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
namespace android::widget::inline
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
		jint describeContents();
		jboolean equals(JObject arg0);
		android::os::Bundle getExtras();
		JString getHostPackageName();
		JObject getInlinePresentationSpecs();
		android::widget::inline::InlinePresentationSpec getInlineTooltipPresentationSpec();
		jint getMaxSuggestionCount();
		android::os::LocaleList getSupportedLocales();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

