#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class WindowInsetsAnimation : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WindowInsetsAnimation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WindowInsetsAnimation(QAndroidJniObject obj);
		
		// Constructors
		WindowInsetsAnimation(jint arg0, JObject arg1, jlong arg2);
		
		// Methods
		jfloat getAlpha();
		jlong getDurationMillis();
		jfloat getFraction();
		jfloat getInterpolatedFraction();
		JObject getInterpolator();
		jint getTypeMask();
		void setAlpha(jfloat arg0);
		void setFraction(jfloat arg0);
	};
} // namespace android::view

