#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TextClassifierEvent_Builder.hpp"

namespace android::view::textclassifier
{
	class TextClassifierEvent_LanguageDetectionEvent;
}

namespace android::view::textclassifier
{
	class TextClassifierEvent_LanguageDetectionEvent_Builder : public android::view::textclassifier::TextClassifierEvent_Builder
	{
	public:
		// Fields
		
		TextClassifierEvent_LanguageDetectionEvent_Builder(QAndroidJniObject obj);
		// Constructors
		TextClassifierEvent_LanguageDetectionEvent_Builder(jint arg0);
		TextClassifierEvent_LanguageDetectionEvent_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
	};
} // namespace android::view::textclassifier

