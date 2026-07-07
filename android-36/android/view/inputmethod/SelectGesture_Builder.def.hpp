#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class RectF;
}
namespace android::view::inputmethod
{
	class SelectGesture;
}
class JString;

namespace android::view::inputmethod
{
	class SelectGesture_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SelectGesture_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SelectGesture_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SelectGesture_Builder();
		
		// Methods
		android::view::inputmethod::SelectGesture build() const;
		android::view::inputmethod::SelectGesture_Builder setFallbackText(JString arg0) const;
		android::view::inputmethod::SelectGesture_Builder setGranularity(jint arg0) const;
		android::view::inputmethod::SelectGesture_Builder setSelectionArea(android::graphics::RectF arg0) const;
	};
} // namespace android::view::inputmethod

