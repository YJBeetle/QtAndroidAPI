#pragma once

#include "../../view/ViewGroup.hpp"

namespace android::view
{
	class SurfaceControl;
}

namespace android::widget::inline_
{
	class InlineContentView : public android::view::ViewGroup
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InlineContentView(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup(className, sig, std::forward<Ts>(agv)...) {}
		InlineContentView(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::view::SurfaceControl getSurfaceControl() const;
		jboolean isZOrderedOnTop() const;
		void onLayout(jboolean arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
		void setSurfaceControlCallback(JObject arg0) const;
		jboolean setZOrderedOnTop(jboolean arg0) const;
	};
} // namespace android::widget::inline_

