#include "../../icu/util/ULocale.hpp"
#include "../../os/Bundle.hpp"
#include "./TextClassificationContext.hpp"
#include "./TextClassifierEvent_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	TextClassifierEvent_Builder::TextClassifierEvent_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject TextClassifierEvent_Builder::setActionIndices(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"setActionIndices",
			"([I)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0
		);
	}
	QAndroidJniObject TextClassifierEvent_Builder::setEntityTypes(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setEntityTypes",
			"([Ljava/lang/String;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0
		);
	}
	QAndroidJniObject TextClassifierEvent_Builder::setEventContext(android::view::textclassifier::TextClassificationContext arg0)
	{
		return __thiz.callObjectMethod(
			"setEventContext",
			"(Landroid/view/textclassifier/TextClassificationContext;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextClassifierEvent_Builder::setEventIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setEventIndex",
			"(I)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0
		);
	}
	QAndroidJniObject TextClassifierEvent_Builder::setExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextClassifierEvent_Builder::setLocale(android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"setLocale",
			"(Landroid/icu/util/ULocale;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextClassifierEvent_Builder::setModelName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setModelName",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0
		);
	}
	QAndroidJniObject TextClassifierEvent_Builder::setModelName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setModelName",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TextClassifierEvent_Builder::setResultId(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setResultId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0
		);
	}
	QAndroidJniObject TextClassifierEvent_Builder::setResultId(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setResultId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TextClassifierEvent_Builder::setScores(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"setScores",
			"([F)Landroid/view/textclassifier/TextClassifierEvent$Builder;",
			arg0
		);
	}
} // namespace android::view::textclassifier

