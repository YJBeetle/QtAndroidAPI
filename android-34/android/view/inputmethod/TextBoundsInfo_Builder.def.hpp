#pragma once

#include "../../../JObject.hpp"

class JFloatArray;
class JIntArray;
namespace android::graphics
{
	class Matrix;
}
namespace android::text
{
	class SegmentFinder;
}
namespace android::view::inputmethod
{
	class TextBoundsInfo;
}

namespace android::view::inputmethod
{
	class TextBoundsInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextBoundsInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextBoundsInfo_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TextBoundsInfo_Builder(jint arg0, jint arg1);
		
		// Methods
		android::view::inputmethod::TextBoundsInfo build() const;
		android::view::inputmethod::TextBoundsInfo_Builder clear() const;
		android::view::inputmethod::TextBoundsInfo_Builder setCharacterBidiLevel(JIntArray arg0) const;
		android::view::inputmethod::TextBoundsInfo_Builder setCharacterBounds(JFloatArray arg0) const;
		android::view::inputmethod::TextBoundsInfo_Builder setCharacterFlags(JIntArray arg0) const;
		android::view::inputmethod::TextBoundsInfo_Builder setGraphemeSegmentFinder(android::text::SegmentFinder arg0) const;
		android::view::inputmethod::TextBoundsInfo_Builder setLineSegmentFinder(android::text::SegmentFinder arg0) const;
		android::view::inputmethod::TextBoundsInfo_Builder setMatrix(android::graphics::Matrix arg0) const;
		android::view::inputmethod::TextBoundsInfo_Builder setStartAndEnd(jint arg0, jint arg1) const;
		android::view::inputmethod::TextBoundsInfo_Builder setWordSegmentFinder(android::text::SegmentFinder arg0) const;
	};
} // namespace android::view::inputmethod

