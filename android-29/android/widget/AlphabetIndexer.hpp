#pragma once

#ifndef ANDROID_WIDGET_ALPHABETINDEXER
#define ANDROID_WIDGET_ALPHABETINDEXER

#include "../../__JniBaseClass.hpp"
#include "../database/DataSetObserver.hpp"


namespace __jni_impl::android::widget
{
	class AlphabetIndexer : public __jni_impl::android::database::DataSetObserver
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0, jint arg1, jstring arg2);
		void __constructor(__jni_impl::__JniBaseClass arg0, jint arg1, const QString &arg2);
		
		// Methods
		jint getPositionForSection(jint arg0);
		jint getSectionForPosition(jint arg0);
		jobjectArray getSections();
		void onChanged();
		void onInvalidated();
		void setCursor(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::widget


namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void AlphabetIndexer::__constructor(__jni_impl::__JniBaseClass arg0, jint arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AlphabetIndexer",
			"(Landroid/database/Cursor;ILjava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void AlphabetIndexer::__constructor(__jni_impl::__JniBaseClass arg0, jint arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AlphabetIndexer",
			"(Landroid/database/Cursor;ILjava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
	jint AlphabetIndexer::getPositionForSection(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getPositionForSection",
			"(I)I",
			arg0
		);
	}
	jint AlphabetIndexer::getSectionForPosition(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getSectionForPosition",
			"(I)I",
			arg0
		);
	}
	jobjectArray AlphabetIndexer::getSections()
	{
		return __thiz.callObjectMethod(
			"getSections",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	void AlphabetIndexer::onChanged()
	{
		__thiz.callMethod<void>(
			"onChanged",
			"()V"
		);
	}
	void AlphabetIndexer::onInvalidated()
	{
		__thiz.callMethod<void>(
			"onInvalidated",
			"()V"
		);
	}
	void AlphabetIndexer::setCursor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setCursor",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class AlphabetIndexer : public __jni_impl::android::widget::AlphabetIndexer
	{
	public:
		AlphabetIndexer(QAndroidJniObject obj) { __thiz = obj; }
		AlphabetIndexer(__jni_impl::__JniBaseClass arg0, jint arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_ALPHABETINDEXER

