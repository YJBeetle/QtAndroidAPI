#include "../../icu/util/ULocale.hpp"
#include "../../os/Bundle.hpp"
#include "./TextLanguage.hpp"
#include "./TextLanguage_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	TextLanguage_Builder::TextLanguage_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextLanguage_Builder::TextLanguage_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextLanguage$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject TextLanguage_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextLanguage;"
		);
	}
	QAndroidJniObject TextLanguage_Builder::putLocale(android::icu::util::ULocale arg0, jfloat arg1)
	{
		return __thiz.callObjectMethod(
			"putLocale",
			"(Landroid/icu/util/ULocale;F)Landroid/view/textclassifier/TextLanguage$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject TextLanguage_Builder::setExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextLanguage$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextLanguage_Builder::setId(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextLanguage$Builder;",
			arg0
		);
	}
} // namespace android::view::textclassifier

