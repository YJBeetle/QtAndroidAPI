#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class RectF;
}
namespace android::view::inputmethod
{
	class DeleteGesture;
}
class JString;

namespace android::view::inputmethod
{
	class DeleteGesture_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DeleteGesture_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DeleteGesture_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DeleteGesture_Builder();
		
		// Methods
		android::view::inputmethod::DeleteGesture build() const;
		android::view::inputmethod::DeleteGesture_Builder setDeletionArea(android::graphics::RectF arg0) const;
		android::view::inputmethod::DeleteGesture_Builder setFallbackText(JString arg0) const;
		android::view::inputmethod::DeleteGesture_Builder setGranularity(jint arg0) const;
	};
} // namespace android::view::inputmethod

