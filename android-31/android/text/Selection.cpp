#include "./Layout.hpp"
#include "./Selection.hpp"

namespace android::text
{
	// Fields
	jobject Selection::SELECTION_END()
	{
		return getStaticObjectField(
			"android.text.Selection",
			"SELECTION_END",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject Selection::SELECTION_START()
	{
		return getStaticObjectField(
			"android.text.Selection",
			"SELECTION_START",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	
	// QJniObject forward
	Selection::Selection(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Selection::extendDown(__JniBaseClass arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"extendDown",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Selection::extendLeft(__JniBaseClass arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"extendLeft",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Selection::extendRight(__JniBaseClass arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"extendRight",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void Selection::extendSelection(__JniBaseClass arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.text.Selection",
			"extendSelection",
			"(Landroid/text/Spannable;I)V",
			arg0.object(),
			arg1
		);
	}
	jboolean Selection::extendToLeftEdge(__JniBaseClass arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"extendToLeftEdge",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Selection::extendToRightEdge(__JniBaseClass arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"extendToRightEdge",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Selection::extendUp(__JniBaseClass arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"extendUp",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jint Selection::getSelectionEnd(jstring arg0)
	{
		return callStaticMethod<jint>(
			"android.text.Selection",
			"getSelectionEnd",
			"(Ljava/lang/CharSequence;)I",
			arg0
		);
	}
	jint Selection::getSelectionStart(jstring arg0)
	{
		return callStaticMethod<jint>(
			"android.text.Selection",
			"getSelectionStart",
			"(Ljava/lang/CharSequence;)I",
			arg0
		);
	}
	jboolean Selection::moveDown(__JniBaseClass arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"moveDown",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Selection::moveLeft(__JniBaseClass arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"moveLeft",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Selection::moveRight(__JniBaseClass arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"moveRight",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Selection::moveToLeftEdge(__JniBaseClass arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"moveToLeftEdge",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Selection::moveToRightEdge(__JniBaseClass arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"moveToRightEdge",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Selection::moveUp(__JniBaseClass arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"moveUp",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void Selection::removeSelection(__JniBaseClass arg0)
	{
		callStaticMethod<void>(
			"android.text.Selection",
			"removeSelection",
			"(Landroid/text/Spannable;)V",
			arg0.object()
		);
	}
	void Selection::selectAll(__JniBaseClass arg0)
	{
		callStaticMethod<void>(
			"android.text.Selection",
			"selectAll",
			"(Landroid/text/Spannable;)V",
			arg0.object()
		);
	}
	void Selection::setSelection(__JniBaseClass arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.text.Selection",
			"setSelection",
			"(Landroid/text/Spannable;I)V",
			arg0.object(),
			arg1
		);
	}
	void Selection::setSelection(__JniBaseClass arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.text.Selection",
			"setSelection",
			"(Landroid/text/Spannable;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
} // namespace android::text

