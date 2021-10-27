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
		
		TtsSpan_TelephoneBuilder(QAndroidJniObject obj);
		// Constructors
		TtsSpan_TelephoneBuilder();
		TtsSpan_TelephoneBuilder(jstring &arg0);
		TtsSpan_TelephoneBuilder(const QString &arg0);
		
		// Methods
		QAndroidJniObject setCountryCode(jstring arg0);
		QAndroidJniObject setCountryCode(const QString &arg0);
		QAndroidJniObject setExtension(jstring arg0);
		QAndroidJniObject setExtension(const QString &arg0);
		QAndroidJniObject setNumberParts(jstring arg0);
		QAndroidJniObject setNumberParts(const QString &arg0);
	};
} // namespace android::text::style

