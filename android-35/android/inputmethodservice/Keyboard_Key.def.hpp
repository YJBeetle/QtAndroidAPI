#pragma once

#include "../../JObject.hpp"

class JIntArray;
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
class JString;

namespace android::inputmethodservice
{
	class Keyboard_Key : public JObject
	{
	public:
		// Fields
		JIntArray codes();
		jint edgeFlags();
		jint gap();
		jint height();
		android::graphics::drawable::Drawable icon();
		android::graphics::drawable::Drawable iconPreview();
		JString label();
		jboolean modifier();
		jboolean on();
		JString popupCharacters();
		jint popupResId();
		jboolean pressed();
		jboolean repeatable();
		jboolean sticky();
		JString text();
		jint width();
		jint x();
		jint y();
		
		// QJniObject forward
		template<typename ...Ts> explicit Keyboard_Key(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Keyboard_Key(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Keyboard_Key(android::inputmethodservice::Keyboard_Row arg0);
		Keyboard_Key(android::content::res::Resources arg0, android::inputmethodservice::Keyboard_Row arg1, jint arg2, jint arg3, JObject arg4);
		
		// Methods
		JIntArray getCurrentDrawableState() const;
		jboolean isInside(jint arg0, jint arg1) const;
		void onPressed() const;
		void onReleased(jboolean arg0) const;
		jint squaredDistanceFrom(jint arg0, jint arg1) const;
	};
} // namespace android::inputmethodservice

