#include "../TextPaint.hpp"
#include "./CharacterStyle.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	CharacterStyle::CharacterStyle(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CharacterStyle::CharacterStyle()
		: __JniBaseClass(
			"android.text.style.CharacterStyle",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject CharacterStyle::wrap(android::text::style::CharacterStyle arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.style.CharacterStyle",
			"wrap",
			"(Landroid/text/style/CharacterStyle;)Landroid/text/style/CharacterStyle;",
			arg0.object()
		);
	}
	QAndroidJniObject CharacterStyle::getUnderlying()
	{
		return callObjectMethod(
			"getUnderlying",
			"()Landroid/text/style/CharacterStyle;"
		);
	}
	void CharacterStyle::updateDrawState(android::text::TextPaint arg0)
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
} // namespace android::text::style

