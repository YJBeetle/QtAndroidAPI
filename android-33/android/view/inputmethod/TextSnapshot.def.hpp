#pragma once

#include "../../../JObject.hpp"

namespace android::view::inputmethod
{
	class SurroundingText;
}

namespace android::view::inputmethod
{
	class TextSnapshot : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextSnapshot(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextSnapshot(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		TextSnapshot(android::view::inputmethod::SurroundingText arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		jint getCompositionEnd() const;
		jint getCompositionStart() const;
		jint getCursorCapsMode() const;
		jint getSelectionEnd() const;
		jint getSelectionStart() const;
		android::view::inputmethod::SurroundingText getSurroundingText() const;
	};
} // namespace android::view::inputmethod

