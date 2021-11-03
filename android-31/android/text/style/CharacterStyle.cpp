#include "../TextPaint.hpp"
#include "./CharacterStyle.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	CharacterStyle::CharacterStyle(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CharacterStyle::CharacterStyle()
		: JObject(
			"android.text.style.CharacterStyle",
			"()V"
		) {}
	
	// Methods
	android::text::style::CharacterStyle CharacterStyle::wrap(android::text::style::CharacterStyle arg0)
	{
		return callStaticObjectMethod(
			"android.text.style.CharacterStyle",
			"wrap",
			"(Landroid/text/style/CharacterStyle;)Landroid/text/style/CharacterStyle;",
			arg0.object()
		);
	}
	android::text::style::CharacterStyle CharacterStyle::getUnderlying()
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

