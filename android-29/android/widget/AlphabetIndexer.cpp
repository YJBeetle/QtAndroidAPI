#include "./AlphabetIndexer.hpp"

namespace android::widget
{
	// Fields
	
	AlphabetIndexer::AlphabetIndexer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AlphabetIndexer::AlphabetIndexer(__JniBaseClass arg0, jint arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AlphabetIndexer",
			"(Landroid/database/Cursor;ILjava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
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
	void AlphabetIndexer::setCursor(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setCursor",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::widget

