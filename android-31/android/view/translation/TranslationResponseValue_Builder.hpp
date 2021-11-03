#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::view::translation
{
	class TranslationResponseValue;
}

namespace android::view::translation
{
	class TranslationResponseValue_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TranslationResponseValue_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TranslationResponseValue_Builder(QAndroidJniObject obj);
		
		// Constructors
		TranslationResponseValue_Builder(jint arg0);
		
		// Methods
		android::view::translation::TranslationResponseValue build();
		android::view::translation::TranslationResponseValue_Builder setExtras(android::os::Bundle arg0);
		android::view::translation::TranslationResponseValue_Builder setText(jstring arg0);
		android::view::translation::TranslationResponseValue_Builder setTransliteration(jstring arg0);
	};
} // namespace android::view::translation

