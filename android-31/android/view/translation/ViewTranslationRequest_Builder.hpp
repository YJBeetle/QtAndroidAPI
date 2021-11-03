#pragma once

#include "../../../JObject.hpp"

namespace android::view::autofill
{
	class AutofillId;
}
namespace android::view::translation
{
	class TranslationRequestValue;
}
namespace android::view::translation
{
	class ViewTranslationRequest;
}
class JString;

namespace android::view::translation
{
	class ViewTranslationRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewTranslationRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ViewTranslationRequest_Builder(QJniObject obj);
		
		// Constructors
		ViewTranslationRequest_Builder(android::view::autofill::AutofillId arg0);
		ViewTranslationRequest_Builder(android::view::autofill::AutofillId arg0, jlong arg1);
		
		// Methods
		android::view::translation::ViewTranslationRequest build() const;
		android::view::translation::ViewTranslationRequest_Builder setValue(JString arg0, android::view::translation::TranslationRequestValue arg1) const;
	};
} // namespace android::view::translation

