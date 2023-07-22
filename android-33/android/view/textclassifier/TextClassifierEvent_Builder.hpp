#pragma once

#include "../../../JFloatArray.hpp"
#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../icu/util/ULocale.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "./TextClassificationContext.def.hpp"
#include "./TextClassifierEvent_1.def.hpp"
#include "../../../JString.hpp"
#include "./TextClassifierEvent_Builder.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setActionIndices(JIntArray arg0) const
	{
		return callObjectMethod(
			"setActionIndices",
			"([I)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.object<jintArray>()
		);
	}
	inline android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setEntityTypes(JArray arg0) const
	{
		return callObjectMethod(
			"setEntityTypes",
			"([Ljava/lang/String;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setEventContext(android::view::textclassifier::TextClassificationContext arg0) const
	{
		return callObjectMethod(
			"setEventContext",
			"(Landroid/view/textclassifier/TextClassificationContext;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setEventIndex(jint arg0) const
	{
		return callObjectMethod(
			"setEventIndex",
			"(I)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0
		);
	}
	inline android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setLocale(android::icu::util::ULocale arg0) const
	{
		return callObjectMethod(
			"setLocale",
			"(Landroid/icu/util/ULocale;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setModelName(JString arg0) const
	{
		return callObjectMethod(
			"setModelName",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setResultId(JString arg0) const
	{
		return callObjectMethod(
			"setResultId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::textclassifier::TextClassifierEvent_Builder TextClassifierEvent_Builder::setScores(JFloatArray arg0) const
	{
		return callObjectMethod(
			"setScores",
			"([F)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.object<jfloatArray>()
		);
	}
} // namespace android::view::textclassifier

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::textclassifier;
#endif
