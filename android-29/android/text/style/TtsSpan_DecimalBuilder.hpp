#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TtsSpan_Builder.hpp"
#include "./TtsSpan_SemioticClassBuilder.hpp"


namespace android::text::style
{
	class TtsSpan_DecimalBuilder : public android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		TtsSpan_DecimalBuilder(QAndroidJniObject obj);
		// Constructors
		TtsSpan_DecimalBuilder();
		TtsSpan_DecimalBuilder(jstring &arg0, jstring &arg1);
		TtsSpan_DecimalBuilder(const QString &arg0, const QString &arg1);
		TtsSpan_DecimalBuilder(jdouble &arg0, jint &arg1, jint &arg2);
		
		// Methods
		QAndroidJniObject setArgumentsFromDouble(jdouble arg0, jint arg1, jint arg2);
		QAndroidJniObject setFractionalPart(jstring arg0);
		QAndroidJniObject setFractionalPart(const QString &arg0);
		QAndroidJniObject setIntegerPart(jstring arg0);
		QAndroidJniObject setIntegerPart(const QString &arg0);
		QAndroidJniObject setIntegerPart(jlong arg0);
	};
} // namespace android::text::style

