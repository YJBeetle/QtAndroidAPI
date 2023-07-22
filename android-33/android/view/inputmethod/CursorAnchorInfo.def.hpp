#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class Matrix;
}
namespace android::graphics
{
	class RectF;
}
namespace android::os
{
	class Parcel;
}
namespace android::view::inputmethod
{
	class EditorBoundsInfo;
}
class JString;
class JObject;
class JString;

namespace android::view::inputmethod
{
	class CursorAnchorInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_HAS_INVISIBLE_REGION();
		static jint FLAG_HAS_VISIBLE_REGION();
		static jint FLAG_IS_RTL();
		
		// QJniObject forward
		template<typename ...Ts> explicit CursorAnchorInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CursorAnchorInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CursorAnchorInfo(android::os::Parcel arg0);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::graphics::RectF getCharacterBounds(jint arg0) const;
		jint getCharacterBoundsFlags(jint arg0) const;
		JString getComposingText() const;
		jint getComposingTextStart() const;
		android::view::inputmethod::EditorBoundsInfo getEditorBoundsInfo() const;
		jfloat getInsertionMarkerBaseline() const;
		jfloat getInsertionMarkerBottom() const;
		jint getInsertionMarkerFlags() const;
		jfloat getInsertionMarkerHorizontal() const;
		jfloat getInsertionMarkerTop() const;
		android::graphics::Matrix getMatrix() const;
		jint getSelectionEnd() const;
		jint getSelectionStart() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::inputmethod

