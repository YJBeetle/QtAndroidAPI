#pragma once

#include "./ViewGroup_LayoutParams.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}

namespace android::view
{
	class ViewGroup_MarginLayoutParams : public android::view::ViewGroup_LayoutParams
	{
	public:
		// Fields
		jint bottomMargin();
		jint leftMargin();
		jint rightMargin();
		jint topMargin();
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewGroup_MarginLayoutParams(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup_LayoutParams(className, sig, std::forward<Ts>(agv)...) {}
		ViewGroup_MarginLayoutParams(QJniObject obj);
		
		// Constructors
		ViewGroup_MarginLayoutParams(android::view::ViewGroup_LayoutParams arg0);
		ViewGroup_MarginLayoutParams(android::view::ViewGroup_MarginLayoutParams &arg0);
		ViewGroup_MarginLayoutParams(android::content::Context arg0, JObject arg1);
		ViewGroup_MarginLayoutParams(jint arg0, jint arg1);
		
		// Methods
		jint getLayoutDirection() const;
		jint getMarginEnd() const;
		jint getMarginStart() const;
		jboolean isMarginRelative() const;
		void resolveLayoutDirection(jint arg0) const;
		void setLayoutDirection(jint arg0) const;
		void setMarginEnd(jint arg0) const;
		void setMarginStart(jint arg0) const;
		void setMargins(jint arg0, jint arg1, jint arg2, jint arg3) const;
	};
} // namespace android::view

