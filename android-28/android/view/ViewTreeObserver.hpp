#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}

namespace android::view
{
	class ViewTreeObserver : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewTreeObserver(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ViewTreeObserver(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addOnDrawListener(__JniBaseClass arg0);
		void addOnGlobalFocusChangeListener(__JniBaseClass arg0);
		void addOnGlobalLayoutListener(__JniBaseClass arg0);
		void addOnPreDrawListener(__JniBaseClass arg0);
		void addOnScrollChangedListener(__JniBaseClass arg0);
		void addOnTouchModeChangeListener(__JniBaseClass arg0);
		void addOnWindowAttachListener(__JniBaseClass arg0);
		void addOnWindowFocusChangeListener(__JniBaseClass arg0);
		void dispatchOnDraw();
		void dispatchOnGlobalLayout();
		jboolean dispatchOnPreDraw();
		jboolean isAlive();
		void removeGlobalOnLayoutListener(__JniBaseClass arg0);
		void removeOnDrawListener(__JniBaseClass arg0);
		void removeOnGlobalFocusChangeListener(__JniBaseClass arg0);
		void removeOnGlobalLayoutListener(__JniBaseClass arg0);
		void removeOnPreDrawListener(__JniBaseClass arg0);
		void removeOnScrollChangedListener(__JniBaseClass arg0);
		void removeOnTouchModeChangeListener(__JniBaseClass arg0);
		void removeOnWindowAttachListener(__JniBaseClass arg0);
		void removeOnWindowFocusChangeListener(__JniBaseClass arg0);
	};
} // namespace android::view

