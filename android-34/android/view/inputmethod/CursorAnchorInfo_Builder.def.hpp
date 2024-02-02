#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class Matrix;
}
namespace android::view::inputmethod
{
	class CursorAnchorInfo;
}
namespace android::view::inputmethod
{
	class EditorBoundsInfo;
}
namespace android::view::inputmethod
{
	class TextAppearanceInfo;
}
class JString;

namespace android::view::inputmethod
{
	class CursorAnchorInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CursorAnchorInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CursorAnchorInfo_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CursorAnchorInfo_Builder();
		
		// Methods
		android::view::inputmethod::CursorAnchorInfo_Builder addCharacterBounds(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jint arg5) const;
		android::view::inputmethod::CursorAnchorInfo_Builder addVisibleLineBounds(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		android::view::inputmethod::CursorAnchorInfo build() const;
		android::view::inputmethod::CursorAnchorInfo_Builder clearVisibleLineBounds() const;
		void reset() const;
		android::view::inputmethod::CursorAnchorInfo_Builder setComposingText(jint arg0, JString arg1) const;
		android::view::inputmethod::CursorAnchorInfo_Builder setEditorBoundsInfo(android::view::inputmethod::EditorBoundsInfo arg0) const;
		android::view::inputmethod::CursorAnchorInfo_Builder setInsertionMarkerLocation(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4) const;
		android::view::inputmethod::CursorAnchorInfo_Builder setMatrix(android::graphics::Matrix arg0) const;
		android::view::inputmethod::CursorAnchorInfo_Builder setSelectionRange(jint arg0, jint arg1) const;
		android::view::inputmethod::CursorAnchorInfo_Builder setTextAppearanceInfo(android::view::inputmethod::TextAppearanceInfo arg0) const;
	};
} // namespace android::view::inputmethod

