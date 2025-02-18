#pragma once

#include "../../../JObject.hpp"

class JIntArray;
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
namespace android::text
{
	class SegmentFinder;
}

namespace android::view::inputmethod
{
	class TextBoundsInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_CHARACTER_LINEFEED();
		static jint FLAG_CHARACTER_PUNCTUATION();
		static jint FLAG_CHARACTER_WHITESPACE();
		static jint FLAG_LINE_IS_RTL();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextBoundsInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextBoundsInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getCharacterBidiLevel(jint arg0) const;
		void getCharacterBounds(jint arg0, android::graphics::RectF arg1) const;
		jint getCharacterFlags(jint arg0) const;
		jint getEndIndex() const;
		android::text::SegmentFinder getGraphemeSegmentFinder() const;
		android::text::SegmentFinder getLineSegmentFinder() const;
		void getMatrix(android::graphics::Matrix arg0) const;
		jint getOffsetForPosition(jfloat arg0, jfloat arg1) const;
		JIntArray getRangeForRect(android::graphics::RectF arg0, android::text::SegmentFinder arg1, JObject arg2) const;
		jint getStartIndex() const;
		android::text::SegmentFinder getWordSegmentFinder() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::inputmethod

