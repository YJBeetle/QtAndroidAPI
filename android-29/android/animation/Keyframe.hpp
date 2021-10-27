#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::animation
{
	class Keyframe : public __JniBaseClass
	{
	public:
		// Fields
		
		Keyframe(QAndroidJniObject obj);
		// Constructors
		Keyframe();
		
		// Methods
		static QAndroidJniObject ofFloat(jfloat arg0);
		static QAndroidJniObject ofFloat(jfloat arg0, jfloat arg1);
		static QAndroidJniObject ofInt(jfloat arg0);
		static QAndroidJniObject ofInt(jfloat arg0, jint arg1);
		static QAndroidJniObject ofObject(jfloat arg0);
		static QAndroidJniObject ofObject(jfloat arg0, jobject arg1);
		QAndroidJniObject clone();
		jfloat getFraction();
		QAndroidJniObject getInterpolator();
		jclass getType();
		jobject getValue();
		jboolean hasValue();
		void setFraction(jfloat arg0);
		void setInterpolator(__JniBaseClass arg0);
		void setValue(jobject arg0);
	};
} // namespace android::animation

