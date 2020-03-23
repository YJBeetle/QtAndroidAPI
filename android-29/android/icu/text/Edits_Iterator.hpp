#pragma once

#ifndef ANDROID_ICU_TEXT_EDITS_ITERATOR
#define ANDROID_ICU_TEXT_EDITS_ITERATOR

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::text
{
	class Edits_Iterator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		jboolean next();
		jint newLength();
		jint oldLength();
		jboolean findSourceIndex(jint arg0);
		jboolean findDestinationIndex(jint arg0);
		jint destinationIndexFromSourceIndex(jint arg0);
		jint sourceIndexFromDestinationIndex(jint arg0);
		jboolean hasChange();
		jint replacementIndex();
		jint destinationIndex();
		jint sourceIndex();
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void Edits_Iterator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.Edits$Iterator",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Edits_Iterator::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jboolean Edits_Iterator::next()
	{
		return __thiz.callMethod<jboolean>(
			"next",
			"()Z");
	}
	jint Edits_Iterator::newLength()
	{
		return __thiz.callMethod<jint>(
			"newLength",
			"()I");
	}
	jint Edits_Iterator::oldLength()
	{
		return __thiz.callMethod<jint>(
			"oldLength",
			"()I");
	}
	jboolean Edits_Iterator::findSourceIndex(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"findSourceIndex",
			"(I)Z",
			arg0);
	}
	jboolean Edits_Iterator::findDestinationIndex(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"findDestinationIndex",
			"(I)Z",
			arg0);
	}
	jint Edits_Iterator::destinationIndexFromSourceIndex(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"destinationIndexFromSourceIndex",
			"(I)I",
			arg0);
	}
	jint Edits_Iterator::sourceIndexFromDestinationIndex(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"sourceIndexFromDestinationIndex",
			"(I)I",
			arg0);
	}
	jboolean Edits_Iterator::hasChange()
	{
		return __thiz.callMethod<jboolean>(
			"hasChange",
			"()Z");
	}
	jint Edits_Iterator::replacementIndex()
	{
		return __thiz.callMethod<jint>(
			"replacementIndex",
			"()I");
	}
	jint Edits_Iterator::destinationIndex()
	{
		return __thiz.callMethod<jint>(
			"destinationIndex",
			"()I");
	}
	jint Edits_Iterator::sourceIndex()
	{
		return __thiz.callMethod<jint>(
			"sourceIndex",
			"()I");
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class Edits_Iterator : public __jni_impl::android::icu::text::Edits_Iterator
	{
	public:
		Edits_Iterator(QAndroidJniObject obj) { __thiz = obj; }
		Edits_Iterator()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_EDITS_ITERATOR

