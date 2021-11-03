#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view::autofill
{
	class AutofillId;
}
namespace android::view::translation
{
	class TranslationRequestValue;
}
class JObject;
class JString;

namespace android::view::translation
{
	class ViewTranslationRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString ID_TEXT();
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewTranslationRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ViewTranslationRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::view::autofill::AutofillId getAutofillId() const;
		JObject getKeys() const;
		android::view::translation::TranslationRequestValue getValue(JString arg0) const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::translation

