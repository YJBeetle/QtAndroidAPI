#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


namespace android::text::style
{
	class TtsSpan_OrdinalBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		TtsSpan_OrdinalBuilder(QAndroidJniObject obj);
		// Constructors
		TtsSpan_OrdinalBuilder();
		TtsSpan_OrdinalBuilder(jstring &arg0);
		TtsSpan_OrdinalBuilder(const QString &arg0);
		TtsSpan_OrdinalBuilder(jlong &arg0);
		
		// Methods
		QAndroidJniObject setNumber(jstring arg0);
		QAndroidJniObject setNumber(const QString &arg0);
		QAndroidJniObject setNumber(jlong arg0);
	};
} // namespace android::text::style

