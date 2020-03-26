#pragma once

#ifndef ANDROID_ICU_TEXT_CASEMAP_TITLE
#define ANDROID_ICU_TEXT_CASEMAP_TITLE

#include "../../../__JniBaseClass.hpp"
#include "CaseMap.hpp"

namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::icu::text
{
	class BreakIterator;
}
namespace __jni_impl::android::icu::text
{
	class Edits;
}
namespace __jni_impl::android::icu::text
{
	class CaseMap;
}

namespace __jni_impl::android::icu::text
{
	class CaseMap_Title : public __jni_impl::android::icu::text::CaseMap
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring apply(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::BreakIterator arg1, jstring arg2);
		QAndroidJniObject apply(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::BreakIterator arg1, jstring arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::icu::text::Edits arg4);
		QAndroidJniObject wholeString();
		QAndroidJniObject sentences();
		QAndroidJniObject noLowercase();
		QAndroidJniObject noBreakAdjustment();
		QAndroidJniObject adjustToCased();
		QAndroidJniObject omitUnchangedText();
	};
} // namespace __jni_impl::android::icu::text

#include "../../../java/util/Locale.hpp"
#include "BreakIterator.hpp"
#include "Edits.hpp"
#include "CaseMap.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void CaseMap_Title::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.CaseMap$Title",
			"(V)V");
	}
	
	// Methods
	jstring CaseMap_Title::apply(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::BreakIterator arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Landroid/icu/text/BreakIterator;Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		).object<jstring>();
	}
	QAndroidJniObject CaseMap_Title::apply(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::BreakIterator arg1, jstring arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::icu::text::Edits arg4)
	{
		return __thiz.callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Landroid/icu/text/BreakIterator;Ljava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject CaseMap_Title::wholeString()
	{
		return __thiz.callObjectMethod(
			"wholeString",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	QAndroidJniObject CaseMap_Title::sentences()
	{
		return __thiz.callObjectMethod(
			"sentences",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	QAndroidJniObject CaseMap_Title::noLowercase()
	{
		return __thiz.callObjectMethod(
			"noLowercase",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	QAndroidJniObject CaseMap_Title::noBreakAdjustment()
	{
		return __thiz.callObjectMethod(
			"noBreakAdjustment",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	QAndroidJniObject CaseMap_Title::adjustToCased()
	{
		return __thiz.callObjectMethod(
			"adjustToCased",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	QAndroidJniObject CaseMap_Title::omitUnchangedText()
	{
		return __thiz.callObjectMethod(
			"omitUnchangedText",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class CaseMap_Title : public __jni_impl::android::icu::text::CaseMap_Title
	{
	public:
		CaseMap_Title(QAndroidJniObject obj) { __thiz = obj; }
		CaseMap_Title()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_CASEMAP_TITLE

