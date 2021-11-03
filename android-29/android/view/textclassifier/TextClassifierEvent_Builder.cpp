#include "../../../JFloatArray.hpp"
#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../icu/util/ULocale.hpp"
#include "../../os/Bundle.hpp"
#include "./TextClassificationContext.hpp"
#include "../../../JString.hpp"
#include "./TextClassifierEvent_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QJniObject forward
	TextClassifierEvent_Builder::TextClassifierEvent_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setActionIndices(JIntArray arg0) const
	{
		return callObjectMethod(
			"setActionIndices",
			"([I)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.object<jintArray>()
		);
	}
	android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setEntityTypes(JArray arg0) const
	{
		return callObjectMethod(
			"setEntityTypes",
			"([Ljava/lang/String;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.object<jarray>()
		);
	}
	android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setEventContext(android::view::textclassifier::TextClassificationContext arg0) const
	{
		return callObjectMethod(
			"setEventContext",
			"(Landroid/view/textclassifier/TextClassificationContext;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setEventIndex(jint arg0) const
	{
		return callObjectMethod(
			"setEventIndex",
			"(I)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0
		);
	}
	android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setLocale(android::icu::util::ULocale arg0) const
	{
		return callObjectMethod(
			"setLocale",
			"(Landroid/icu/util/ULocale;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setModelName(JString arg0) const
	{
		return callObjectMethod(
			"setModelName",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.object<jstring>()
		);
	}
	android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setResultId(JString arg0) const
	{
		return callObjectMethod(
			"setResultId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.object<jstring>()
		);
	}
	android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setScores(JFloatArray arg0) const
	{
		return callObjectMethod(
			"setScores",
			"([F)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.object<jfloatArray>()
		);
	}
} // namespace android::view::textclassifier

