#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class PointF;
}
namespace android::view::inputmethod
{
	class InsertGesture;
}
class JString;

namespace android::view::inputmethod
{
	class InsertGesture_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InsertGesture_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InsertGesture_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		InsertGesture_Builder();
		
		// Methods
		android::view::inputmethod::InsertGesture build() const;
		android::view::inputmethod::InsertGesture_Builder setFallbackText(JString arg0) const;
		android::view::inputmethod::InsertGesture_Builder setInsertionPoint(android::graphics::PointF arg0) const;
		android::view::inputmethod::InsertGesture_Builder setTextToInsert(JString arg0) const;
	};
} // namespace android::view::inputmethod

