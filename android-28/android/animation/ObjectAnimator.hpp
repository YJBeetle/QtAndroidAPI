#pragma once

#include "../../JObject.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit ObjectAnimator(const char *className, const char *sig, Ts...agv) : android::animation::ValueAnimator(className, sig, std::forward<Ts>(agv)...) {}
		ObjectAnimator(QJniObject obj);
		
		// Constructors
		ObjectAnimator();
		
		// Methods
		static android::animation::ObjectAnimator ofArgb(jobject arg0, android::util::Property arg1, jintArray arg2);
		static android::animation::ObjectAnimator ofArgb(jobject arg0, jstring arg1, jintArray arg2);
		static android::animation::ObjectAnimator ofFloat(jobject arg0, android::util::Property arg1, jfloatArray arg2);
		static android::animation::ObjectAnimator ofFloat(jobject arg0, jstring arg1, jfloatArray arg2);
		static android::animation::ObjectAnimator ofFloat(jobject arg0, android::util::Property arg1, android::util::Property arg2, android::graphics::Path arg3);
		static android::animation::ObjectAnimator ofFloat(jobject arg0, jstring arg1, jstring arg2, android::graphics::Path arg3);
		static android::animation::ObjectAnimator ofInt(jobject arg0, android::util::Property arg1, jintArray arg2);
		static android::animation::ObjectAnimator ofInt(jobject arg0, jstring arg1, jintArray arg2);
		static android::animation::ObjectAnimator ofInt(jobject arg0, android::util::Property arg1, android::util::Property arg2, android::graphics::Path arg3);
		static android::animation::ObjectAnimator ofInt(jobject arg0, jstring arg1, jstring arg2, android::graphics::Path arg3);
		static android::animation::ObjectAnimator ofMultiFloat(jobject arg0, jstring arg1, jarray arg2);
		static android::animation::ObjectAnimator ofMultiFloat(jobject arg0, jstring arg1, android::graphics::Path arg2);
		static android::animation::ObjectAnimator ofMultiFloat(jobject arg0, jstring arg1, android::animation::TypeConverter arg2, JObject arg3, jobjectArray arg4);
		static android::animation::ObjectAnimator ofMultiInt(jobject arg0, jstring arg1, jarray arg2);
		static android::animation::ObjectAnimator ofMultiInt(jobject arg0, jstring arg1, android::graphics::Path arg2);
		static android::animation::ObjectAnimator ofMultiInt(jobject arg0, jstring arg1, android::animation::TypeConverter arg2, JObject arg3, jobjectArray arg4);
		static android::animation::ObjectAnimator ofObject(jobject arg0, android::util::Property arg1, android::animation::TypeConverter arg2, android::graphics::Path arg3);
		static android::animation::ObjectAnimator ofObject(jobject arg0, android::util::Property arg1, JObject arg2, jobjectArray arg3);
		static android::animation::ObjectAnimator ofObject(jobject arg0, jstring arg1, android::animation::TypeConverter arg2, android::graphics::Path arg3);
		static android::animation::ObjectAnimator ofObject(jobject arg0, jstring arg1, JObject arg2, jobjectArray arg3);
		static android::animation::ObjectAnimator ofObject(jobject arg0, android::util::Property arg1, android::animation::TypeConverter arg2, JObject arg3, jobjectArray arg4);
		static android::animation::ObjectAnimator ofPropertyValuesHolder(jobject arg0, jarray arg1);
		android::animation::ObjectAnimator clone();
		jstring getPropertyName();
		jobject getTarget();
		void setAutoCancel(jboolean arg0);
		android::animation::ObjectAnimator setDuration(jlong arg0);
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

