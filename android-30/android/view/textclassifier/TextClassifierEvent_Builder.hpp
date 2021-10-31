#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::util
{
	class ULocale;
}
namespace android::os
{
	class Bundle;
}
namespace android::view::textclassifier
{
	class TextClassificationContext;
}
namespace android::view::textclassifier
{
	class TextClassifierEvent_1;
}

namespace android::view::textclassifier
{
	class TextClassifierEvent_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassifierEvent_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifierEvent_Builder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::view::textclassifier::TextClassifierEvent_Builder setActionIndices(jintArray arg0);
		android::view::textclassifier::TextClassifierEvent_Builder setEntityTypes(jarray arg0);
		android::view::textclassifier::TextClassifierEvent_Builder setEventContext(android::view::textclassifier::TextClassificationContext arg0);
		android::view::textclassifier::TextClassifierEvent_Builder setEventIndex(jint arg0);
		android::view::textclassifier::TextClassifierEvent_Builder setExtras(android::os::Bundle arg0);
		android::view::textclassifier::TextClassifierEvent_Builder setLocale(android::icu::util::ULocale arg0);
		android::view::textclassifier::TextClassifierEvent_Builder setModelName(jstring arg0);
		android::view::textclassifier::TextClassifierEvent_Builder setResultId(jstring arg0);
		android::view::textclassifier::TextClassifierEvent_Builder setScores(jfloatArray arg0);
	};
} // namespace android::view::textclassifier

