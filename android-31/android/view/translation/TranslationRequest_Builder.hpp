#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::view::translation
{
	class TranslationRequest;
}

namespace android::view::translation
{
	class TranslationRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TranslationRequest_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TranslationRequest_Builder(QAndroidJniObject obj);
		
		// Constructors
		TranslationRequest_Builder();
		
		// Methods
		android::view::translation::TranslationRequest build();
		android::view::translation::TranslationRequest_Builder setFlags(jint arg0);
		android::view::translation::TranslationRequest_Builder setTranslationRequestValues(__JniBaseClass arg0);
		android::view::translation::TranslationRequest_Builder setViewTranslationRequests(__JniBaseClass arg0);
	};
} // namespace android::view::translation

