#include "../TextPaint.hpp"
#include "./CharacterStyle.hpp"

namespace android::text::style
{
	// Fields
	
	CharacterStyle::CharacterStyle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CharacterStyle::CharacterStyle()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.CharacterStyle",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject CharacterStyle::wrap(android::text::style::CharacterStyle arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.style.CharacterStyle",
			"wrap",
			"(Landroid/text/style/CharacterStyle;)Landroid/text/style/CharacterStyle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CharacterStyle::getUnderlying()
	{
		return __thiz.callObjectMethod(
			"getUnderlying",
			"()Landroid/text/style/CharacterStyle;"
		);
	}
	void CharacterStyle::updateDrawState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::text::style

