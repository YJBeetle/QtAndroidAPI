#include "./CharSequenceTransformation.hpp"
#include "../../view/autofill/AutofillId.hpp"
#include "../../../java/util/regex/Pattern.hpp"
#include "./CharSequenceTransformation_Builder.hpp"

namespace android::service::autofill
{
	// Fields
	
	CharSequenceTransformation_Builder::CharSequenceTransformation_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CharSequenceTransformation_Builder::CharSequenceTransformation_Builder(android::view::autofill::AutofillId &arg0, java::util::regex::Pattern &arg1, jstring &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.CharSequenceTransformation$Builder",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	CharSequenceTransformation_Builder::CharSequenceTransformation_Builder(android::view::autofill::AutofillId &arg0, java::util::regex::Pattern &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.CharSequenceTransformation$Builder",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject CharSequenceTransformation_Builder::addField(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"addField",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;Ljava/lang/String;)Landroid/service/autofill/CharSequenceTransformation$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject CharSequenceTransformation_Builder::addField(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1, const QString &arg2)
	{
		return __thiz.callObjectMethod(
			"addField",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;Ljava/lang/String;)Landroid/service/autofill/CharSequenceTransformation$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	QAndroidJniObject CharSequenceTransformation_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/service/autofill/CharSequenceTransformation;"
		);
	}
} // namespace android::service::autofill

