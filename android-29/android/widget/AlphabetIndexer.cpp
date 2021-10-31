#include "./AlphabetIndexer.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	AlphabetIndexer::AlphabetIndexer(QAndroidJniObject obj) : android::database::DataSetObserver(obj) {}
	
	// Constructors
	AlphabetIndexer::AlphabetIndexer(__JniBaseClass arg0, jint arg1, jstring arg2)
		: android::database::DataSetObserver(
			"android.widget.AlphabetIndexer",
			"(Landroid/database/Cursor;ILjava/lang/CharSequence;)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	jint AlphabetIndexer::getPositionForSection(jint arg0)
	{
		return callMethod<jint>(
			"getPositionForSection",
			"(I)I",
			arg0
		);
	}
	jint AlphabetIndexer::getSectionForPosition(jint arg0)
	{
		return callMethod<jint>(
			"getSectionForPosition",
			"(I)I",
			arg0
		);
	}
	jobjectArray AlphabetIndexer::getSections()
	{
		return callObjectMethod(
			"getSections",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	void AlphabetIndexer::onChanged()
	{
		callMethod<void>(
			"onChanged",
			"()V"
		);
	}
	void AlphabetIndexer::onInvalidated()
	{
		callMethod<void>(
			"onInvalidated",
			"()V"
		);
	}
	void AlphabetIndexer::setCursor(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setCursor",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		);
	}
} // namespace android::widget

