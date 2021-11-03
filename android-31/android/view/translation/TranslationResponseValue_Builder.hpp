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
class JString;

namespace android::view::translation
{
	class TranslationResponseValue_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TranslationResponseValue_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TranslationResponseValue_Builder(QJniObject obj);
		
		// Constructors
		TranslationResponseValue_Builder(jint arg0);
		
		// Methods
		android::view::translation::TranslationResponseValue build() const;
		android::view::translation::TranslationResponseValue_Builder setExtras(android::os::Bundle arg0) const;
		android::view::translation::TranslationResponseValue_Builder setText(JString arg0) const;
		android::view::translation::TranslationResponseValue_Builder setTransliteration(JString arg0) const;
	};
} // namespace android::view::translation

