#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class RectF;
}
namespace android::view::inputmethod
{
	class EditorBoundsInfo;
}

namespace android::view::inputmethod
{
	class EditorBoundsInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EditorBoundsInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EditorBoundsInfo_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		EditorBoundsInfo_Builder();
		
		// Methods
		android::view::inputmethod::EditorBoundsInfo build() const;
		android::view::inputmethod::EditorBoundsInfo_Builder setEditorBounds(android::graphics::RectF arg0) const;
		android::view::inputmethod::EditorBoundsInfo_Builder setHandwritingBounds(android::graphics::RectF arg0) const;
	};
} // namespace android::view::inputmethod

