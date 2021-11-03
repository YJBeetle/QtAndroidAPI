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
class JString;

namespace android::view::inputmethod
{
	class CursorAnchorInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CursorAnchorInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CursorAnchorInfo_Builder(QJniObject obj);
		
		// Constructors
		CursorAnchorInfo_Builder();
		
		// Methods
		android::view::inputmethod::CursorAnchorInfo_Builder addCharacterBounds(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jint arg5);
		android::view::inputmethod::CursorAnchorInfo build();
		void reset();
		android::view::inputmethod::CursorAnchorInfo_Builder setComposingText(jint arg0, JString arg1);
		android::view::inputmethod::CursorAnchorInfo_Builder setInsertionMarkerLocation(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4);
		android::view::inputmethod::CursorAnchorInfo_Builder setMatrix(android::graphics::Matrix arg0);
		android::view::inputmethod::CursorAnchorInfo_Builder setSelectionRange(jint arg0, jint arg1);
	};
} // namespace android::view::inputmethod

