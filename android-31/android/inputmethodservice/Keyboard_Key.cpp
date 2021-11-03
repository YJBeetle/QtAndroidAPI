#include "../content/res/Resources.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "./Keyboard_Row.hpp"
#include "./Keyboard_Key.hpp"

namespace android::inputmethodservice
{
	// Fields
	jintArray Keyboard_Key::codes()
	{
		return getObjectField(
			"codes",
			"[I"
		).object<jintArray>();
	}
	jint Keyboard_Key::edgeFlags()
	{
		return getField<jint>(
			"edgeFlags"
		);
	}
	jint Keyboard_Key::gap()
	{
		return getField<jint>(
			"gap"
		);
	}
	jint Keyboard_Key::height()
	{
		return getField<jint>(
			"height"
		);
	}
	android::graphics::drawable::Drawable Keyboard_Key::icon()
	{
		return getObjectField(
			"icon",
			"Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::drawable::Drawable Keyboard_Key::iconPreview()
	{
		return getObjectField(
			"iconPreview",
			"Landroid/graphics/drawable/Drawable;"
		);
	}
	jstring Keyboard_Key::label()
	{
		return getObjectField(
			"label",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean Keyboard_Key::modifier()
	{
		return getField<jboolean>(
			"modifier"
		);
	}
	jboolean Keyboard_Key::on()
	{
		return getField<jboolean>(
			"on"
		);
	}
	jstring Keyboard_Key::popupCharacters()
	{
		return getObjectField(
			"popupCharacters",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint Keyboard_Key::popupResId()
	{
		return getField<jint>(
			"popupResId"
		);
	}
	jboolean Keyboard_Key::pressed()
	{
		return getField<jboolean>(
			"pressed"
		);
	}
	jboolean Keyboard_Key::repeatable()
	{
		return getField<jboolean>(
			"repeatable"
		);
	}
	jboolean Keyboard_Key::sticky()
	{
		return getField<jboolean>(
			"sticky"
		);
	}
	jstring Keyboard_Key::text()
	{
		return getObjectField(
			"text",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint Keyboard_Key::width()
	{
		return getField<jint>(
			"width"
		);
	}
	jint Keyboard_Key::x()
	{
		return getField<jint>(
			"x"
		);
	}
	jint Keyboard_Key::y()
	{
		return getField<jint>(
			"y"
		);
	}
	
	// QJniObject forward
	Keyboard_Key::Keyboard_Key(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Keyboard_Key::Keyboard_Key(android::inputmethodservice::Keyboard_Row arg0)
		: JObject(
			"android.inputmethodservice.Keyboard$Key",
			"(Landroid/inputmethodservice/Keyboard$Row;)V",
			arg0.object()
		) {}
	Keyboard_Key::Keyboard_Key(android::content::res::Resources arg0, android::inputmethodservice::Keyboard_Row arg1, jint arg2, jint arg3, JObject arg4)
		: JObject(
			"android.inputmethodservice.Keyboard$Key",
			"(Landroid/content/res/Resources;Landroid/inputmethodservice/Keyboard$Row;IILandroid/content/res/XmlResourceParser;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4.object()
		) {}
	
	// Methods
	jintArray Keyboard_Key::getCurrentDrawableState()
	{
		return callObjectMethod(
			"getCurrentDrawableState",
			"()[I"
		).object<jintArray>();
	}
	jboolean Keyboard_Key::isInside(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"isInside",
			"(II)Z",
			arg0,
			arg1
		);
	}
	void Keyboard_Key::onPressed()
	{
		callMethod<void>(
			"onPressed",
			"()V"
		);
	}
	void Keyboard_Key::onReleased(jboolean arg0)
	{
		callMethod<void>(
			"onReleased",
			"(Z)V",
			arg0
		);
	}
	jint Keyboard_Key::squaredDistanceFrom(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"squaredDistanceFrom",
			"(II)I",
			arg0,
			arg1
		);
	}
} // namespace android::inputmethodservice

