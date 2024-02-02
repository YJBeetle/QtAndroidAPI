#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class RectF;
}
namespace android::view::inputmethod
{
	class DeleteRangeGesture;
}
class JString;

namespace android::view::inputmethod
{
	class DeleteRangeGesture_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DeleteRangeGesture_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DeleteRangeGesture_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DeleteRangeGesture_Builder();
		
		// Methods
		android::view::inputmethod::DeleteRangeGesture build() const;
		android::view::inputmethod::DeleteRangeGesture_Builder setDeletionEndArea(android::graphics::RectF arg0) const;
		android::view::inputmethod::DeleteRangeGesture_Builder setDeletionStartArea(android::graphics::RectF arg0) const;
		android::view::inputmethod::DeleteRangeGesture_Builder setFallbackText(JString arg0) const;
		android::view::inputmethod::DeleteRangeGesture_Builder setGranularity(jint arg0) const;
	};
} // namespace android::view::inputmethod

