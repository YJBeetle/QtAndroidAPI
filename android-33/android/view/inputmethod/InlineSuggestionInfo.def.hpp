#pragma once

#include "../../../JObject.hpp"

class JArray;
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
	class InlineSuggestionInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString SOURCE_AUTOFILL();
		static JString SOURCE_PLATFORM();
		static JString TYPE_ACTION();
		static JString TYPE_SUGGESTION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InlineSuggestionInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InlineSuggestionInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JArray getAutofillHints() const;
		android::widget::inline_::InlinePresentationSpec getInlinePresentationSpec() const;
		JString getSource() const;
		JString getType() const;
		jint hashCode() const;
		jboolean isPinned() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::inputmethod

