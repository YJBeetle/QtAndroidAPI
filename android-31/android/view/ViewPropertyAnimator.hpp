#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::view
{
	class ViewPropertyAnimator : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewPropertyAnimator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ViewPropertyAnimator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::view::ViewPropertyAnimator alpha(jfloat arg0);
		android::view::ViewPropertyAnimator alphaBy(jfloat arg0);
		void cancel();
		jlong getDuration();
		__JniBaseClass getInterpolator();
		jlong getStartDelay();
		android::view::ViewPropertyAnimator rotation(jfloat arg0);
		android::view::ViewPropertyAnimator rotationBy(jfloat arg0);
		android::view::ViewPropertyAnimator rotationX(jfloat arg0);
		android::view::ViewPropertyAnimator rotationXBy(jfloat arg0);
		android::view::ViewPropertyAnimator rotationY(jfloat arg0);
		android::view::ViewPropertyAnimator rotationYBy(jfloat arg0);
		android::view::ViewPropertyAnimator scaleX(jfloat arg0);
		android::view::ViewPropertyAnimator scaleXBy(jfloat arg0);
		android::view::ViewPropertyAnimator scaleY(jfloat arg0);
		android::view::ViewPropertyAnimator scaleYBy(jfloat arg0);
		android::view::ViewPropertyAnimator setDuration(jlong arg0);
		android::view::ViewPropertyAnimator setInterpolator(__JniBaseClass arg0);
		android::view::ViewPropertyAnimator setListener(__JniBaseClass arg0);
		android::view::ViewPropertyAnimator setStartDelay(jlong arg0);
		android::view::ViewPropertyAnimator setUpdateListener(__JniBaseClass arg0);
		void start();
		android::view::ViewPropertyAnimator translationX(jfloat arg0);
		android::view::ViewPropertyAnimator translationXBy(jfloat arg0);
		android::view::ViewPropertyAnimator translationY(jfloat arg0);
		android::view::ViewPropertyAnimator translationYBy(jfloat arg0);
		android::view::ViewPropertyAnimator translationZ(jfloat arg0);
		android::view::ViewPropertyAnimator translationZBy(jfloat arg0);
		android::view::ViewPropertyAnimator withEndAction(__JniBaseClass arg0);
		android::view::ViewPropertyAnimator withLayer();
		android::view::ViewPropertyAnimator withStartAction(__JniBaseClass arg0);
		android::view::ViewPropertyAnimator x(jfloat arg0);
		android::view::ViewPropertyAnimator xBy(jfloat arg0);
		android::view::ViewPropertyAnimator y(jfloat arg0);
		android::view::ViewPropertyAnimator yBy(jfloat arg0);
		android::view::ViewPropertyAnimator z(jfloat arg0);
		android::view::ViewPropertyAnimator zBy(jfloat arg0);
	};
} // namespace android::view

