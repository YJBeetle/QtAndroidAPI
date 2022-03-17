#pragma once

#include "../../../JObject.hpp"

namespace android::view::translation
{
	class TranslationRequest;
}

namespace android::view::translation
{
	class TranslationRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TranslationRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TranslationRequest_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		TranslationRequest_Builder();
		
		// Methods
		android::view::translation::TranslationRequest build() const;
		android::view::translation::TranslationRequest_Builder setFlags(jint arg0) const;
		android::view::translation::TranslationRequest_Builder setTranslationRequestValues(JObject arg0) const;
		android::view::translation::TranslationRequest_Builder setViewTranslationRequests(JObject arg0) const;
	};
} // namespace android::view::translation

