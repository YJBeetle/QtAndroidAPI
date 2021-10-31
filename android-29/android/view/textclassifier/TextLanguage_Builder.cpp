#include "../../icu/util/ULocale.hpp"
#include "../../os/Bundle.hpp"
#include "./TextLanguage.hpp"
#include "./TextLanguage_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QAndroidJniObject forward
	TextLanguage_Builder::TextLanguage_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TextLanguage_Builder::TextLanguage_Builder()
		: __JniBaseClass(
			"android.view.textclassifier.TextLanguage$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject TextLanguage_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextLanguage;"
		);
	}
	QAndroidJniObject TextLanguage_Builder::putLocale(android::icu::util::ULocale arg0, jfloat arg1)
	{
		return callObjectMethod(
			"putLocale",
			"(Landroid/icu/util/ULocale;F)Landroid/view/textclassifier/TextLanguage$Builder;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject TextLanguage_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextLanguage$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject TextLanguage_Builder::setId(jstring arg0)
	{
		return callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextLanguage$Builder;",
			arg0
		);
	}
} // namespace android::view::textclassifier

