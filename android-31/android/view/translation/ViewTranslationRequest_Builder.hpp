#pragma once

#include "../../../__JniBaseClass.hpp"

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

namespace android::view::translation
{
	class ViewTranslationRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewTranslationRequest_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ViewTranslationRequest_Builder(QJniObject obj);
		
		// Constructors
		ViewTranslationRequest_Builder(android::view::autofill::AutofillId arg0);
		ViewTranslationRequest_Builder(android::view::autofill::AutofillId arg0, jlong arg1);
		
		// Methods
		android::view::translation::ViewTranslationRequest build();
		android::view::translation::ViewTranslationRequest_Builder setValue(jstring arg0, android::view::translation::TranslationRequestValue arg1);
	};
} // namespace android::view::translation

