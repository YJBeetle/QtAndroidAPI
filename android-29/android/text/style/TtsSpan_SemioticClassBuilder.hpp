#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"


namespace android::text::style
{
	class TtsSpan_SemioticClassBuilder : public android::text::style::TtsSpan_Builder
	{
	public:
		// Fields
		
		TtsSpan_SemioticClassBuilder(QAndroidJniObject obj);
		// Constructors
		TtsSpan_SemioticClassBuilder(jstring &arg0);
		TtsSpan_SemioticClassBuilder(const QString &arg0);
		TtsSpan_SemioticClassBuilder() = default;
		
		// Methods
		QAndroidJniObject setAnimacy(jstring arg0);
		QAndroidJniObject setAnimacy(const QString &arg0);
		QAndroidJniObject setCase(jstring arg0);
		QAndroidJniObject setCase(const QString &arg0);
		QAndroidJniObject setGender(jstring arg0);
		QAndroidJniObject setGender(const QString &arg0);
		QAndroidJniObject setMultiplicity(jstring arg0);
		QAndroidJniObject setMultiplicity(const QString &arg0);
	};
} // namespace android::text::style

