#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class PointF;
}
namespace android::view::inputmethod
{
	class RemoveSpaceGesture;
}
class JString;

namespace android::view::inputmethod
{
	class RemoveSpaceGesture_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoveSpaceGesture_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoveSpaceGesture_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RemoveSpaceGesture_Builder();
		
		// Methods
		android::view::inputmethod::RemoveSpaceGesture build() const;
		android::view::inputmethod::RemoveSpaceGesture_Builder setFallbackText(JString arg0) const;
		android::view::inputmethod::RemoveSpaceGesture_Builder setPoints(android::graphics::PointF arg0, android::graphics::PointF arg1) const;
	};
} // namespace android::view::inputmethod

