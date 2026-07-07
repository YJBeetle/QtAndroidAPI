#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class RectF;
}
namespace android::view::inputmethod
{
	class SelectRangeGesture;
}
class JString;

namespace android::view::inputmethod
{
	class SelectRangeGesture_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SelectRangeGesture_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SelectRangeGesture_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SelectRangeGesture_Builder();
		
		// Methods
		android::view::inputmethod::SelectRangeGesture build() const;
		android::view::inputmethod::SelectRangeGesture_Builder setFallbackText(JString arg0) const;
		android::view::inputmethod::SelectRangeGesture_Builder setGranularity(jint arg0) const;
		android::view::inputmethod::SelectRangeGesture_Builder setSelectionEndArea(android::graphics::RectF arg0) const;
		android::view::inputmethod::SelectRangeGesture_Builder setSelectionStartArea(android::graphics::RectF arg0) const;
	};
} // namespace android::view::inputmethod

