#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TextClassifierEvent.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::textclassifier
{
	class TextClassifierEvent_LanguageDetectionEvent : public android::view::textclassifier::TextClassifierEvent
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		TextClassifierEvent_LanguageDetectionEvent(QAndroidJniObject obj);
		// Constructors
		TextClassifierEvent_LanguageDetectionEvent() = default;
		
		// Methods
	};
} // namespace android::view::textclassifier

