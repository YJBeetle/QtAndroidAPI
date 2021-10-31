#include "../../icu/util/ULocale.hpp"
#include "../../os/Bundle.hpp"
#include "./TextClassificationContext.hpp"
#include "./TextClassifierEvent_1.hpp"
#include "./TextClassifierEvent_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QJniObject forward
	TextClassifierEvent_Builder::TextClassifierEvent_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setActionIndices(jintArray arg0)
	{
		return callObjectMethod(
			"setActionIndices",
			"([I)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0
		);
	}
	android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setEntityTypes(jarray arg0)
	{
		return callObjectMethod(
			"setEntityTypes",
			"([Ljava/lang/String;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0
		);
	}
	android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setEventContext(android::view::textclassifier::TextClassificationContext arg0)
	{
		return callObjectMethod(
			"setEventContext",
			"(Landroid/view/textclassifier/TextClassificationContext;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setEventIndex(jint arg0)
	{
		return callObjectMethod(
			"setEventIndex",
			"(I)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0
		);
	}
	android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setLocale(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"setLocale",
			"(Landroid/icu/util/ULocale;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setModelName(jstring arg0)
	{
		return callObjectMethod(
			"setModelName",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0
		);
	}
	android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setResultId(jstring arg0)
	{
		return callObjectMethod(
			"setResultId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0
		);
	}
	android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setScores(jfloatArray arg0)
	{
		return callObjectMethod(
			"setScores",
			"([F)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0
		);
	}
} // namespace android::view::textclassifier

