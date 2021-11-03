#pragma once

#include "../../../JObject.hpp"

namespace android::view::autofill
{
	class AutofillId;
}
namespace android::view::translation
{
	class TranslationResponseValue;
}
namespace android::view::translation
{
	class ViewTranslationResponse;
}

namespace android::view::translation
{
	class ViewTranslationResponse_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewTranslationResponse_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ViewTranslationResponse_Builder(QAndroidJniObject obj);
		
		// Constructors
		ViewTranslationResponse_Builder(android::view::autofill::AutofillId arg0);
		
		// Methods
		android::view::translation::ViewTranslationResponse build();
		android::view::translation::ViewTranslationResponse_Builder setValue(jstring arg0, android::view::translation::TranslationResponseValue arg1);
	};
} // namespace android::view::translation

