#pragma once

#include "../../../JObject.hpp"

class JArray;
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
	class InlineSuggestionInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString SOURCE_AUTOFILL();
		static JString SOURCE_PLATFORM();
		static JString TYPE_ACTION();
		static JString TYPE_SUGGESTION();
		
		// QJniObject forward
		template<typename ...Ts> explicit InlineSuggestionInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InlineSuggestionInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		JArray getAutofillHints();
		android::widget::inline::InlinePresentationSpec getInlinePresentationSpec();
		JString getSource();
		JString getType();
		jint hashCode();
		jboolean isPinned();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

