#include "./TextKeyListener_Capitalize.hpp"
#include "../../view/KeyEvent.hpp"
#include "../../view/View.hpp"
#include "./QwertyKeyListener.hpp"

namespace android::text::method
{
	// Fields
	
	// QAndroidJniObject forward
	QwertyKeyListener::QwertyKeyListener(QAndroidJniObject obj) : android::text::method::BaseKeyListener(obj) {}
	
	// Constructors
	QwertyKeyListener::QwertyKeyListener(android::text::method::TextKeyListener_Capitalize arg0, jboolean arg1)
		: android::text::method::BaseKeyListener(
			"android.text.method.QwertyKeyListener",
			"(Landroid/text/method/TextKeyListener$Capitalize;Z)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	QAndroidJniObject QwertyKeyListener::getInstance(jboolean arg0, android::text::method::TextKeyListener_Capitalize arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.QwertyKeyListener",
			"getInstance",
			"(ZLandroid/text/method/TextKeyListener$Capitalize;)Landroid/text/method/QwertyKeyListener;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject QwertyKeyListener::getInstanceForFullKeyboard()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.QwertyKeyListener",
			"getInstanceForFullKeyboard",
			"()Landroid/text/method/QwertyKeyListener;"
		);
	}
	void QwertyKeyListener::markAsReplaced(__JniBaseClass arg0, jint arg1, jint arg2, jstring arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.method.QwertyKeyListener",
			"markAsReplaced",
			"(Landroid/text/Spannable;IILjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	jint QwertyKeyListener::getInputType()
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	jboolean QwertyKeyListener::onKeyDown(android::view::View arg0, __JniBaseClass arg1, jint arg2, android::view::KeyEvent arg3)
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
} // namespace android::text::method

