#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class PointF;
}
namespace android::view::inputmethod
{
	class JoinOrSplitGesture;
}
class JString;

namespace android::view::inputmethod
{
	class JoinOrSplitGesture_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JoinOrSplitGesture_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JoinOrSplitGesture_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		JoinOrSplitGesture_Builder();
		
		// Methods
		android::view::inputmethod::JoinOrSplitGesture build() const;
		android::view::inputmethod::JoinOrSplitGesture_Builder setFallbackText(JString arg0) const;
		android::view::inputmethod::JoinOrSplitGesture_Builder setJoinOrSplitPoint(android::graphics::PointF arg0) const;
	};
} // namespace android::view::inputmethod

