#pragma once

#ifndef ANDROID_ICU_TEXT_EDITS
#define ANDROID_ICU_TEXT_EDITS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::text
{
	class Edits_Iterator;
}

namespace __jni_impl::android::icu::text
{
	class Edits : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void reset();
		void addUnchanged(jint arg0);
		void addReplace(jint arg0, jint arg1);
		jint lengthDelta();
		jboolean hasChanges();
		jint numberOfChanges();
		QAndroidJniObject getCoarseChangesIterator();
		QAndroidJniObject getCoarseIterator();
		QAndroidJniObject getFineChangesIterator();
		QAndroidJniObject getFineIterator();
		QAndroidJniObject mergeAndAppend(__jni_impl::android::icu::text::Edits arg0, __jni_impl::android::icu::text::Edits arg1);
	};
} // namespace __jni_impl::android::icu::text

#include "Edits_Iterator.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void Edits::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.Edits",
			"()V");
	}
	
	// Methods
	void Edits::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V");
	}
	void Edits::addUnchanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"addUnchanged",
			"(I)V",
			arg0);
	}
	void Edits::addReplace(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addReplace",
			"(II)V",
			arg0,
			arg1);
	}
	jint Edits::lengthDelta()
	{
		return __thiz.callMethod<jint>(
			"lengthDelta",
			"()I");
	}
	jboolean Edits::hasChanges()
	{
		return __thiz.callMethod<jboolean>(
			"hasChanges",
			"()Z");
	}
	jint Edits::numberOfChanges()
	{
		return __thiz.callMethod<jint>(
			"numberOfChanges",
			"()I");
	}
	QAndroidJniObject Edits::getCoarseChangesIterator()
	{
		return __thiz.callObjectMethod(
			"getCoarseChangesIterator",
			"()Landroid/icu/text/Edits$Iterator;");
	}
	QAndroidJniObject Edits::getCoarseIterator()
	{
		return __thiz.callObjectMethod(
			"getCoarseIterator",
			"()Landroid/icu/text/Edits$Iterator;");
	}
	QAndroidJniObject Edits::getFineChangesIterator()
	{
		return __thiz.callObjectMethod(
			"getFineChangesIterator",
			"()Landroid/icu/text/Edits$Iterator;");
	}
	QAndroidJniObject Edits::getFineIterator()
	{
		return __thiz.callObjectMethod(
			"getFineIterator",
			"()Landroid/icu/text/Edits$Iterator;");
	}
	QAndroidJniObject Edits::mergeAndAppend(__jni_impl::android::icu::text::Edits arg0, __jni_impl::android::icu::text::Edits arg1)
	{
		return __thiz.callObjectMethod(
			"mergeAndAppend",
			"(Landroid/icu/text/Edits;Landroid/icu/text/Edits;)Landroid/icu/text/Edits;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class Edits : public __jni_impl::android::icu::text::Edits
	{
	public:
		Edits(QAndroidJniObject obj) { __thiz = obj; }
		Edits()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_EDITS

