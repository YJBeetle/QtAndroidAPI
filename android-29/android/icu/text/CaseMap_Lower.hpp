#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CaseMap.hpp"

namespace __jni_impl::android::icu::text
{
	class CaseMap;
}
namespace __jni_impl::android::icu::text
{
	class Edits;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::icu::text
{
	class CaseMap_Lower : public __jni_impl::android::icu::text::CaseMap
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject apply(__jni_impl::java::util::Locale arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::icu::text::Edits arg3);
		QAndroidJniObject apply(__jni_impl::java::util::Locale arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::icu::text::Edits arg3);
		jstring apply(__jni_impl::java::util::Locale arg0, jstring arg1);
		jstring apply(__jni_impl::java::util::Locale arg0, const QString &arg1);
		QAndroidJniObject omitUnchangedText();
	};
} // namespace __jni_impl::android::icu::text

#include "./CaseMap.hpp"
#include "./Edits.hpp"
#include "../../../java/util/Locale.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void CaseMap_Lower::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.CaseMap$Lower",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CaseMap_Lower::apply(__jni_impl::java::util::Locale arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::icu::text::Edits arg3)
	{
		return __thiz.callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Ljava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject CaseMap_Lower::apply(__jni_impl::java::util::Locale arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::icu::text::Edits arg3)
	{
		return __thiz.callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Ljava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jstring CaseMap_Lower::apply(__jni_impl::java::util::Locale arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	jstring CaseMap_Lower::apply(__jni_impl::java::util::Locale arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject CaseMap_Lower::omitUnchangedText()
	{
		return __thiz.callObjectMethod(
			"omitUnchangedText",
			"()Landroid/icu/text/CaseMap$Lower;"
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class CaseMap_Lower : public __jni_impl::android::icu::text::CaseMap_Lower
	{
	public:
		CaseMap_Lower(QAndroidJniObject obj) { __thiz = obj; }
		CaseMap_Lower()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

