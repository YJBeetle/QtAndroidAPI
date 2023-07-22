#pragma once

#include "../../../JObject.hpp"

namespace android::util
{
	class SparseArray;
}
namespace android::view::translation
{
	class TranslationResponse;
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
	class TranslationResponse_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TranslationResponse_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TranslationResponse_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		TranslationResponse_Builder(jint arg0);
		
		// Methods
		android::view::translation::TranslationResponse build() const;
		android::view::translation::TranslationResponse_Builder setFinalResponse(jboolean arg0) const;
		android::view::translation::TranslationResponse_Builder setTranslationResponseValue(jint arg0, android::view::translation::TranslationResponseValue arg1) const;
		android::view::translation::TranslationResponse_Builder setTranslationResponseValues(android::util::SparseArray arg0) const;
		android::view::translation::TranslationResponse_Builder setViewTranslationResponse(jint arg0, android::view::translation::ViewTranslationResponse arg1) const;
		android::view::translation::TranslationResponse_Builder setViewTranslationResponses(android::util::SparseArray arg0) const;
	};
} // namespace android::view::translation

