#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::view
{
	class WindowInsetsAnimation : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WindowInsetsAnimation(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WindowInsetsAnimation(QJniObject obj);
		
		// Constructors
		WindowInsetsAnimation(jint arg0, __JniBaseClass arg1, jlong arg2);
		
		// Methods
		jfloat getAlpha();
		jlong getDurationMillis();
		jfloat getFraction();
		jfloat getInterpolatedFraction();
		__JniBaseClass getInterpolator();
		jint getTypeMask();
		void setAlpha(jfloat arg0);
		void setFraction(jfloat arg0);
	};
} // namespace android::view

