#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class View;
}

namespace android::view
{
	class ViewPropertyAnimator : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewPropertyAnimator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ViewPropertyAnimator(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::view::ViewPropertyAnimator alpha(jfloat arg0) const;
		android::view::ViewPropertyAnimator alphaBy(jfloat arg0) const;
		void cancel() const;
		jlong getDuration() const;
		JObject getInterpolator() const;
		jlong getStartDelay() const;
		android::view::ViewPropertyAnimator rotation(jfloat arg0) const;
		android::view::ViewPropertyAnimator rotationBy(jfloat arg0) const;
		android::view::ViewPropertyAnimator rotationX(jfloat arg0) const;
		android::view::ViewPropertyAnimator rotationXBy(jfloat arg0) const;
		android::view::ViewPropertyAnimator rotationY(jfloat arg0) const;
		android::view::ViewPropertyAnimator rotationYBy(jfloat arg0) const;
		android::view::ViewPropertyAnimator scaleX(jfloat arg0) const;
		android::view::ViewPropertyAnimator scaleXBy(jfloat arg0) const;
		android::view::ViewPropertyAnimator scaleY(jfloat arg0) const;
		android::view::ViewPropertyAnimator scaleYBy(jfloat arg0) const;
		android::view::ViewPropertyAnimator setDuration(jlong arg0) const;
		android::view::ViewPropertyAnimator setInterpolator(JObject arg0) const;
		android::view::ViewPropertyAnimator setListener(JObject arg0) const;
		android::view::ViewPropertyAnimator setStartDelay(jlong arg0) const;
		android::view::ViewPropertyAnimator setUpdateListener(JObject arg0) const;
		void start() const;
		android::view::ViewPropertyAnimator translationX(jfloat arg0) const;
		android::view::ViewPropertyAnimator translationXBy(jfloat arg0) const;
		android::view::ViewPropertyAnimator translationY(jfloat arg0) const;
		android::view::ViewPropertyAnimator translationYBy(jfloat arg0) const;
		android::view::ViewPropertyAnimator translationZ(jfloat arg0) const;
		android::view::ViewPropertyAnimator translationZBy(jfloat arg0) const;
		android::view::ViewPropertyAnimator withEndAction(JObject arg0) const;
		android::view::ViewPropertyAnimator withLayer() const;
		android::view::ViewPropertyAnimator withStartAction(JObject arg0) const;
		android::view::ViewPropertyAnimator x(jfloat arg0) const;
		android::view::ViewPropertyAnimator xBy(jfloat arg0) const;
		android::view::ViewPropertyAnimator y(jfloat arg0) const;
		android::view::ViewPropertyAnimator yBy(jfloat arg0) const;
		android::view::ViewPropertyAnimator z(jfloat arg0) const;
		android::view::ViewPropertyAnimator zBy(jfloat arg0) const;
	};
} // namespace android::view

