#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class View;
}

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
		QAndroidJniObject alpha(jfloat arg0);
		QAndroidJniObject alphaBy(jfloat arg0);
		void cancel();
		jlong getDuration();
		QAndroidJniObject getInterpolator();
		jlong getStartDelay();
		QAndroidJniObject rotation(jfloat arg0);
		QAndroidJniObject rotationBy(jfloat arg0);
		QAndroidJniObject rotationX(jfloat arg0);
		QAndroidJniObject rotationXBy(jfloat arg0);
		QAndroidJniObject rotationY(jfloat arg0);
		QAndroidJniObject rotationYBy(jfloat arg0);
		QAndroidJniObject scaleX(jfloat arg0);
		QAndroidJniObject scaleXBy(jfloat arg0);
		QAndroidJniObject scaleY(jfloat arg0);
		QAndroidJniObject scaleYBy(jfloat arg0);
		QAndroidJniObject setDuration(jlong arg0);
		QAndroidJniObject setInterpolator(__JniBaseClass arg0);
		QAndroidJniObject setListener(__JniBaseClass arg0);
		QAndroidJniObject setStartDelay(jlong arg0);
		QAndroidJniObject setUpdateListener(__JniBaseClass arg0);
		void start();
		QAndroidJniObject translationX(jfloat arg0);
		QAndroidJniObject translationXBy(jfloat arg0);
		QAndroidJniObject translationY(jfloat arg0);
		QAndroidJniObject translationYBy(jfloat arg0);
		QAndroidJniObject translationZ(jfloat arg0);
		QAndroidJniObject translationZBy(jfloat arg0);
		QAndroidJniObject withEndAction(__JniBaseClass arg0);
		QAndroidJniObject withLayer();
		QAndroidJniObject withStartAction(__JniBaseClass arg0);
		QAndroidJniObject x(jfloat arg0);
		QAndroidJniObject xBy(jfloat arg0);
		QAndroidJniObject y(jfloat arg0);
		QAndroidJniObject yBy(jfloat arg0);
		QAndroidJniObject z(jfloat arg0);
		QAndroidJniObject zBy(jfloat arg0);
	};
} // namespace android::view

