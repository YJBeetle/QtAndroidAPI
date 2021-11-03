#pragma once

#include "../../../JObject.hpp"

class JFloatArray;
class JIntArray;
class JArray;
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
class JString;

namespace android::view::textclassifier
{
	class TextClassifierEvent_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassifierEvent_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifierEvent_Builder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::view::textclassifier::TextClassifierEvent_Builder setActionIndices(JIntArray arg0) const;
		android::view::textclassifier::TextClassifierEvent_Builder setEntityTypes(JArray arg0) const;
		android::view::textclassifier::TextClassifierEvent_Builder setEventContext(android::view::textclassifier::TextClassificationContext arg0) const;
		android::view::textclassifier::TextClassifierEvent_Builder setEventIndex(jint arg0) const;
		android::view::textclassifier::TextClassifierEvent_Builder setExtras(android::os::Bundle arg0) const;
		android::view::textclassifier::TextClassifierEvent_Builder setLocale(android::icu::util::ULocale arg0) const;
		android::view::textclassifier::TextClassifierEvent_Builder setModelName(JString arg0) const;
		android::view::textclassifier::TextClassifierEvent_Builder setResultId(JString arg0) const;
		android::view::textclassifier::TextClassifierEvent_Builder setScores(JFloatArray arg0) const;
	};
} // namespace android::view::textclassifier

