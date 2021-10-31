#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Animator.hpp"
#include "./ValueAnimator.hpp"

namespace android::animation
{
	class Animator;
}
namespace android::animation
{
	class TypeConverter;
}
namespace android::animation
{
	class ValueAnimator;
}
namespace android::graphics
{
	class Path;
}
namespace android::util
{
	class Property;
}

namespace android::animation
{
	class ObjectAnimator : public android::animation::ValueAnimator
	{
	public:
		// Fields
		
		ObjectAnimator(QAndroidJniObject obj);
		// Constructors
		ObjectAnimator();
		
		// Methods
		static QAndroidJniObject ofArgb(jobject arg0, android::util::Property arg1, jintArray arg2);
		static QAndroidJniObject ofArgb(jobject arg0, jstring arg1, jintArray arg2);
		static QAndroidJniObject ofFloat(jobject arg0, android::util::Property arg1, jfloatArray arg2);
		static QAndroidJniObject ofFloat(jobject arg0, jstring arg1, jfloatArray arg2);
		static QAndroidJniObject ofFloat(jobject arg0, android::util::Property arg1, android::util::Property arg2, android::graphics::Path arg3);
		static QAndroidJniObject ofFloat(jobject arg0, jstring arg1, jstring arg2, android::graphics::Path arg3);
		static QAndroidJniObject ofInt(jobject arg0, android::util::Property arg1, jintArray arg2);
		static QAndroidJniObject ofInt(jobject arg0, jstring arg1, jintArray arg2);
		static QAndroidJniObject ofInt(jobject arg0, android::util::Property arg1, android::util::Property arg2, android::graphics::Path arg3);
		static QAndroidJniObject ofInt(jobject arg0, jstring arg1, jstring arg2, android::graphics::Path arg3);
		static QAndroidJniObject ofMultiFloat(jobject arg0, jstring arg1, jarray arg2);
		static QAndroidJniObject ofMultiFloat(jobject arg0, jstring arg1, android::graphics::Path arg2);
		static QAndroidJniObject ofMultiFloat(jobject arg0, jstring arg1, android::animation::TypeConverter arg2, __JniBaseClass arg3, jobjectArray arg4);
		static QAndroidJniObject ofMultiInt(jobject arg0, jstring arg1, jarray arg2);
		static QAndroidJniObject ofMultiInt(jobject arg0, jstring arg1, android::graphics::Path arg2);
		static QAndroidJniObject ofMultiInt(jobject arg0, jstring arg1, android::animation::TypeConverter arg2, __JniBaseClass arg3, jobjectArray arg4);
		static QAndroidJniObject ofObject(jobject arg0, android::util::Property arg1, android::animation::TypeConverter arg2, android::graphics::Path arg3);
		static QAndroidJniObject ofObject(jobject arg0, android::util::Property arg1, __JniBaseClass arg2, jobjectArray arg3);
		static QAndroidJniObject ofObject(jobject arg0, jstring arg1, android::animation::TypeConverter arg2, android::graphics::Path arg3);
		static QAndroidJniObject ofObject(jobject arg0, jstring arg1, __JniBaseClass arg2, jobjectArray arg3);
		static QAndroidJniObject ofObject(jobject arg0, android::util::Property arg1, android::animation::TypeConverter arg2, __JniBaseClass arg3, jobjectArray arg4);
		static QAndroidJniObject ofPropertyValuesHolder(jobject arg0, jarray arg1);
		QAndroidJniObject clone();
		jstring getPropertyName();
		jobject getTarget();
		void setAutoCancel(jboolean arg0);
		QAndroidJniObject setDuration(jlong arg0);
		void setFloatValues(jfloatArray arg0);
		void setIntValues(jintArray arg0);
		void setObjectValues(jobjectArray arg0);
		void setProperty(android::util::Property arg0);
		void setPropertyName(jstring arg0);
		void setTarget(jobject arg0);
		void setupEndValues();
		void setupStartValues();
		void start();
		jstring toString();
	};
} // namespace android::animation

