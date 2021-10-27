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
	class TextClassifierEvent_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		TextClassifierEvent_Builder(QAndroidJniObject obj);
		// Constructors
		TextClassifierEvent_Builder() = default;
		
		// Methods
		QAndroidJniObject setActionIndices(jintArray arg0);
		QAndroidJniObject setEntityTypes(jarray arg0);
		QAndroidJniObject setEventContext(android::view::textclassifier::TextClassificationContext arg0);
		QAndroidJniObject setEventIndex(jint arg0);
		QAndroidJniObject setExtras(android::os::Bundle arg0);
		QAndroidJniObject setLocale(android::icu::util::ULocale arg0);
		QAndroidJniObject setModelName(jstring arg0);
		QAndroidJniObject setModelName(const QString &arg0);
		QAndroidJniObject setResultId(jstring arg0);
		QAndroidJniObject setResultId(const QString &arg0);
		QAndroidJniObject setScores(jfloatArray arg0);
	};
} // namespace android::view::textclassifier

