#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::textclassifier
{
	class TextClassifier_EntityConfig;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextClassifier_EntityConfig_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject includeTypesFromTextClassifier(jboolean arg0);
		QAndroidJniObject setExcludedTypes(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setHints(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setIncludedTypes(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "./TextClassifier_EntityConfig.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	
	// Constructors
	void TextClassifier_EntityConfig_Builder::__constructor()
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
	QAndroidJniObject TextClassifier_EntityConfig_Builder::setExcludedTypes(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setExcludedTypes",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextClassifier_EntityConfig_Builder::setHints(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setHints",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextClassifier_EntityConfig_Builder::setIncludedTypes(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setIncludedTypes",
			"(Ljava/util/Collection;)Landroid/view/textclassifier/TextClassifier$EntityConfig$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextClassifier_EntityConfig_Builder : public __jni_impl::android::view::textclassifier::TextClassifier_EntityConfig_Builder
	{
	public:
		TextClassifier_EntityConfig_Builder(QAndroidJniObject obj) { __thiz = obj; }
		TextClassifier_EntityConfig_Builder()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

