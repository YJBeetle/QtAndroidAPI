#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


namespace android::text::style
{
	class TtsSpan_TelephoneBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TtsSpan_TelephoneBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_SemioticClassBuilder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_TelephoneBuilder(QAndroidJniObject obj);
		
		// Constructors
		TtsSpan_TelephoneBuilder();
		TtsSpan_TelephoneBuilder(jstring arg0);
		
		// Methods
		QAndroidJniObject setCountryCode(jstring arg0);
		QAndroidJniObject setExtension(jstring arg0);
		QAndroidJniObject setNumberParts(jstring arg0);
	};
} // namespace android::text::style

