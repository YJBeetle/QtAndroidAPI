#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class PointF;
}
namespace android::os
{
	class CancellationSignal;
}
namespace android::view::inputmethod
{
	class InsertModeGesture;
}
class JString;

namespace android::view::inputmethod
{
	class InsertModeGesture_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InsertModeGesture_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InsertModeGesture_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		InsertModeGesture_Builder();
		
		// Methods
		android::view::inputmethod::InsertModeGesture build() const;
		android::view::inputmethod::InsertModeGesture_Builder setCancellationSignal(android::os::CancellationSignal arg0) const;
		android::view::inputmethod::InsertModeGesture_Builder setFallbackText(JString arg0) const;
		android::view::inputmethod::InsertModeGesture_Builder setInsertionPoint(android::graphics::PointF arg0) const;
	};
} // namespace android::view::inputmethod

