#pragma once

#include "../../JObject.hpp"

namespace android::content::res
{
	class Resources;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::inputmethodservice
{
	class Keyboard_Row;
}

namespace android::inputmethodservice
{
	class Keyboard_Key : public JObject
	{
	public:
		// Fields
		jintArray codes();
		jint edgeFlags();
		jint gap();
		jint height();
		android::graphics::drawable::Drawable icon();
		android::graphics::drawable::Drawable iconPreview();
		jstring label();
		jboolean modifier();
		jboolean on();
		jstring popupCharacters();
		jint popupResId();
		jboolean pressed();
		jboolean repeatable();
		jboolean sticky();
		jstring text();
		jint width();
		jint x();
		jint y();
		
		// QJniObject forward
		template<typename ...Ts> explicit Keyboard_Key(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Keyboard_Key(QJniObject obj);
		
		// Constructors
		Keyboard_Key(android::inputmethodservice::Keyboard_Row arg0);
		Keyboard_Key(android::content::res::Resources arg0, android::inputmethodservice::Keyboard_Row arg1, jint arg2, jint arg3, JObject arg4);
		
		// Methods
		jintArray getCurrentDrawableState();
		jboolean isInside(jint arg0, jint arg1);
		void onPressed();
		void onReleased(jboolean arg0);
		jint squaredDistanceFrom(jint arg0, jint arg1);
	};
} // namespace android::inputmethodservice

