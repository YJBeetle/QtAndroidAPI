#include "./TextClassifier_EntityConfig.hpp"
#include "./TextClassifier_EntityConfig_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	TextClassifier_EntityConfig_Builder::TextClassifier_EntityConfig_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextClassifier_EntityConfig_Builder::TextClassifier_EntityConfig_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassifier$EntityConfig$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject TextClassifier_EntityConfig_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassifier$EntityConfig;"
		);
	}
	QAndroidJniObject TextClassifier_EntityConfig_Builder::includeTypesFromTextClassifier(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"includeTypesFromTextClassifier",
			"(Z)Landroid/view/textclassifier/TextClassifier$EntityConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject TextClassifier_EntityConfig_Builder::setExcludedTypes(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setExcludedTypes",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextClassifier_EntityConfig_Builder::setHints(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setHints",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextClassifier_EntityConfig_Builder::setIncludedTypes(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setIncludedTypes",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view::textclassifier

